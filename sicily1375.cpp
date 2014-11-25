#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
struct cow {
    int kind;
    int pos;
    bool friend operator<(const cow &a, const cow &b) {
        return a.pos < b.pos;
    } 
}cow[50005];
int sum[50005];
int result[100005];
int main() {
    int n, i;
    int balance = 50002;
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf("%d%d", &cow[i].kind, &cow[i].pos);
        if (cow[i].kind == 0) {
            cow[i].kind = -1;
        }
    }
    sort(cow, cow+n);
    sum[0] = cow[0].kind + balance;
    for (i = 1; i < n; ++i) {
        sum[i] = sum[i-1] + cow[i].kind;
    }
    int ans = 0;
    for (i = 0; i < n; ++i) {
        if (result[sum[i]] == 0) {
            result[sum[i]] = i;
        } else {
              ans = max(ans, cow[i].pos - cow[result[sum[i]]+1].pos);
          }
    }
    printf("%d\n", ans);
    return 0;
}

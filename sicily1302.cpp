#include<iostream>
#include<cstdio>
using namespace std;

int main() {
	long long n;
	while (scanf("%lld", &n) != EOF && n) {
		if (n == 1) {
			printf("1\n");
		} else {
			  printf("%lld\n", (n*n - n - 2) / 2);
		  }
	}
	return 0;
}

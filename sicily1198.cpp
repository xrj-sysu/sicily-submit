#include<iostream>
#include<set>
#include<string>
using namespace std;
int main() {
    int t, n;
    string s;
    cin >> t;
    while (t--) {
        cin >> n;
        multiset<string> mset;
        while(n--) {
            cin >> s;
            s = s + s[s.size()-1];
            mset.insert(s);
        }
        multiset<string>::iterator it;
        string ans;
        for (it = mset.begin(); it != mset.end(); ++it) {
            string temp = (*it);
            ans = ans + temp.substr(0, temp.size()-1);
        }
        cout << ans << endl;
    }
    return 0;
}

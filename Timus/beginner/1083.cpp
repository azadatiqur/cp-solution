#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, p;
    string s;
    cin >> n;
    cin >> s;
    int ans = 1;
    k = n;
    int l = s.length();
    p = l;
    if(n%l != 0) {
        p = n%l;
        //cout << p << "\n";
    }
    for(int i = 1;k >= p;i++) {
        ans *= k;
        k = n-(i*l);
        //cout << i << "\n";
    }
    cout << ans;
}
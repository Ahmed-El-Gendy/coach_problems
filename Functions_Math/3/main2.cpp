#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll getDigitalWeight(ll num) {
    ll sum = 0;
    string s = to_string(num);
    for(auto i : s) sum += i-'0';
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m;
    cin>>n;
    ll s1 = 0, s2 = 0;

    for (int i = 0; i < n; ++i) {
        ll number;
        cin>>number;
        s1 += getDigitalWeight(number);
    }

    cin>>m;
    for (int i = 0; i < m; ++i) {
        ll number;
        cin>>number;
        s2 += getDigitalWeight(number);
    }

    if (s1 > s2) {
        cout<<"Team A";
    } else if (s1 < s2) {
        cout<<"Team B";
    } else {
        cout<<"Tie";
    }
}
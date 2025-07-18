#include <bits/stdc++.h>

using namespace std;
typedef long long ll;



int main() {

    ll n;
    cin>>n;
    long double x[n], y[n];
    for (int i = 0; i < n; ++i) {
        ll a,b; cin>>a>>b;
        x[i] = a, y[i] = b;
    }
    long double mn = 1e9, ma = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            long double dis = sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
            mn = min(mn, dis);
            ma = max(ma, dis);
        }
    }

    cout<<fixed<<setprecision(9);
    cout<<mn<<" "<<ma;


}

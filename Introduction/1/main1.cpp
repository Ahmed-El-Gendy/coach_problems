#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#undef _GLIBCXX_DEBUG

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef vector<vector<ll>> vii;
typedef vector<vector<char>> vcc;
typedef vector<ll> vi;
typedef vector<char> vc;
typedef vector<pair<ll,ll>> vp;
typedef map<ll,ll> mi;
typedef map<char,ll> mc;
#define Gendy ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ln  "\n"
#define cin_vii(vec, n, m) for(int i = 0; i < n; i++) for(int j = 0; j < m && cin >> vec[i][j]; j++);
#define cout_vii(vec, n, m) for(int i = 0; i < n; i++, cout << "\n") for(int j = 0; j < m && cout << vec[i][j] << " "; j++);
#define fixed(n) fixed << setprecision(n)
#define all(p)           p.begin(),p.end()
#define rall(v)          v.rbegin(),v.rend()
#define F                     first
#define S                     second
#define cin(v) for (auto &_ : v) cin >> _;
#define cout(v) for (auto &_: v) cout << _ << " " ;
void pre(vi& v) { for (ll i = 1; i < v.size(); ++i) v[i] += v[i - 1];}
void suf(vi& v) { for (ll i = v.size() - 2; i >= 0; --i) v[i] += v[i + 1];}
ll gcd(ll a,ll b) { return (__gcd(a,b));}
ll lcm(ll a,ll b) { return ((a / gcd(a, b)) * b);}
ll sum(ll n){return (n*(n+1)/2);}
#define YES { cout << "YES\n"; return; }
#define NO { cout << "NO\n"; return; }
#define pi  3.14159265358979323846
const double PI = acos(-1.0);
#define MOD 1000000007

vi dx = {0, 0, 1, -1, 1, -1, -1, 1};
vi dy = {1, -1, 0, 0, 1, -1, 1, -1};
//vi dx = {0, 0, 1, -1};
//vi dy = {1, -1, 0, 0};



void solve(ll test) {


    ll n,k;
    cin>>n>>k;
    cout<<n/k<<' '<<n%k;




}

int main() {
    Gendy
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int codeKiller = 1;
    //cin >> codeKiller;
    for (int i = 1; i <= codeKiller; ++i) {
        solve(i);
    }
}
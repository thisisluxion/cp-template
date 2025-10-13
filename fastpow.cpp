#include <bits/stdc++.h>
#define pb push_back 
#define mp make_pair 
#define st first
#define nd second
#ifndef ONLINE_JUDGE  
#define DEBUG(x) cout << #x << " = " << (x) << endl   
#else     
#define DEBUG(x)        
#endif             
#define forn(n) for(int i = 0; i < (n); i++)    
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define sz(x) (int)(x).size()                 
#define all(x) x.begin(), x.end()
#define rev(x) x.rbegin(), x.rend()
#define sp <<" "<<
#define sortf(v) sort(all(v))
#define sortb(v) sort(rev(v))
#define print(v) for(auto x: (v))cout << x << " "; cout << endl;
#define two(n) (1 << (n))
#define input(v) for(auto &x : (v))cin >> x;
#define yes cout << "YES" sp endl;
#define no cout << "NO" sp endl;
//comment this out when using floating point variables ^_^
#pragma GCC optimize("Ofast,no-stack-protector,fast-math, unroll-loops",3)
//comment this out when doing interactive problems ^-^
#define endl '\n'

using namespace std;
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vl = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using si = set<int>;
using sl = set<ll>;

constexpr int MOD = 1000000007;
constexpr double PI = 3.1415926535897932384626;

int fpow(int base, int exp) {
    base %= MOD;
    int result = 1;
    while (exp > 0) {
        if (exp & 1)
            result = ((ll)result * base) % MOD;
        base = ((ll)base * base) % MOD;
        exp >>= 1;
    }
    return result;
}
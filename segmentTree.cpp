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
#define endl '\n';

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

struct segTree{

    vl tree;
    ll n; 

    segTree(ll N, vl v) : tree(4*N,0), n(N){
        ll added = 0;
        if((n & (n - 1))){
            added =  (0x8000000000000000 >> (__builtin_clzll(n) - 1)) - n;
            for(int i = 0; i < added; i++)v.pb(0);
        }
        n += added;
        for(int i = 0; i < n; i++){
            tree[i+n] = v[i];
        }
        build();
    }

    void build() { 
        for (int i = n - 1; i > 0; --i) tree[i] = tree[i<<1] + tree[i<<1|1];
    }

    ll query(ll l, ll r){
        ll res = 0;
        l += n; r += n;
        while(l <= r){
            if(l % 2 == 1)res += tree[l++];
            if(r % 2 == 0)res += tree[r--];
            l /= 2; r /= 2;
        }
        return res;
    }  

    void modify(ll p, ll val){
        p += n;
        tree[p] = val;
        p /= 2;
        while(p > 0){
            tree[p] = tree[2*p] + tree[2*p +1];
            p /= 2;
        }
    }
    void add(ll p, ll val){
        p += n;
        while(p > 0){
            tree[p] += val;
            p/=2;
        }
    } 
};


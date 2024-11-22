/**
 *    author: azmatroshan
**/
#include<bits/stdc++.h>
using namespace std;
#define          Azmat    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define          Error    freopen("error.txt", "w",stderr);
#define         all(v)    v.begin(),v.end()
#define            grt    greater 
#define             TC    ll t; cin>>t; while(t--)
#define             ll    long long
#define             ss    second
#define      fr(i,x,n)    for(ll i=x;i<n;i++)
#define            pll    pair<ll,ll>
#define             ff    first
#define             pb    push_back
#define             lb    lower_bound
#define             ub    upper_bound
#define          unset    unordered_set
#define          unmap    unordered_map
#define            vec    vector
#define           priq    priority_queue
#define          in(v)    for(auto &x:v)
#define              M    1000000007
#define             Pi    3.14159265358979323846
#define        runTime    cerr<<"Runtime is: "<<clock()*1.0/CLOCKS_PER_SEC<<endl;

#ifndef ONLINE_JUDGE
    #include "debug.h"
#else
    #define debug(x...)
    #define adebug(a,n)
#endif

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << p.first << " " << p.second ; }
template<typename A, typename B> istream& operator>>(istream &in, pair<A, B> &p) {  return in >> p.first >> p.second; }
template<typename A> istream& operator>>(istream &in, vector<A> &v) { for(auto &x:v) cin >> x; return in;}
template<typename A> ostream& operator<<(ostream &os, const vector<A> &v) { for(auto &x:v) cout<<x<<" "; return os; }
template<typename A, typename B> ostream& operator<<(ostream &os, const vector<pair<A,B>> &v) { for(auto &x:v) cout<<x<<"\n"; return os; }
#include <bits/stdc++.h>
using namespace std;
//order_of_key (k) -> Number of items less than k 
//find_by_order(k) -> index of Kth element
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
template<typename T> using indexed_set = 
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using indexed_multiset = 
    tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define int long long 
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define vl vector<int>
#define vvl vector<vl>
#define pl pair<int,int>
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second
#define sz(x) ((int) (x).size())
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
#define For(i, a, b) for (int i = (a); i < (b); ++i)
#define repr(i,x,y) for (int i = (x); i >= (y); --i)
int mod(int x,int MOD){if(x>MOD)x-=MOD;return x;}
int _ceil(int x,int y){return x/y+(x%y!=0);}
void wrt() { cout << "\n"; return;}template<typename T1, typename... T2>void wrt(T1 x, T2... args){((cout << x << ' '), wrt(args...));}
template<typename T> ostream& operator<<(ostream& os, const vector<T>& v) {for (auto& i : v) os << i << " ";return os;}
template<typename T> istream& operator>>(istream& in, vector<T>& v) {for (auto& e : v) in >> e;return in;}

#include <bits/stdc++.h>

#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define pb push_back
#define sz(x) int((x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rp(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep(i, x, n) for (int i = (x); i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define fore(i, a, b) for (int i = (int)(a); i < (int)(b); ++i)

#define TRACE(x...)
#define PRINT(x...)
#define WATCH(x) TRACE(cout << #x << " = " << x << endl )

using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef vector<vi> vvi;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vll;
typedef vector<vll> vvll;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        vi freq(30,0);
        int n = sz(s);
        rp(i,n) freq[s[i] - 'a']++;
        int count = 0;
        string resp = "";
        rp(i,30) {
            if(freq[i] > 0) count++;
            rp(j,freq[i]) {
                resp += 'a' + i;
            }
        }
        if(count > 1) cout << resp << endl;
        else cout << -1 << endl;
    }


}
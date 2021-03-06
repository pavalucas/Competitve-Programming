#include <bits/stdc++.h>

#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rp(i, n) for (int i = 0; i < (int)(n); ++i)
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

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k;
    cin >> n >> k;
    vi vec(n);
    int minEle = 2000000000;
    rp(i, n) {
        cin >> vec[i];
        minEle = min(vec[i], minEle);
    }
    sort(all(vec));
    if(k == 0) {
        if(minEle == 1) {
            cout << -1 << endl;
        } else {
            cout << minEle - 1 << endl;
        }
    } else {
        int resp;
        if(vec[k-1] == vec[k]) {
            resp = -1;
        } else {
            resp = vec[k-1];
        }
        cout << resp << endl;
    }
    return 0;
}

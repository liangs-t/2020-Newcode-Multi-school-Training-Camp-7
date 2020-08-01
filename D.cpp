#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> P;
const int maxn = 20550;
const int inf = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const ll linf = 3e18;
#define debug(x) cout << #x << " " << x << "\n";

ll power(ll x, ll y)
{
    ll ans = 1;
    while (y)
    {
        if (y & 1)
            ans = ans * x % mod;
        x = x * x % mod;
        y >>= 1;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        ll n;
        cin >> n;
        cout << ((n == 1 || n == 24) ? ("Fake news!") : ("Nobody knows it better than me!")) << "\n";
    }
    return 0;
}
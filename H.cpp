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
    ll n, k, ans = 0;
    cin >> n >> k;
    if (n < k)
    {
        ans = k - n;
        k = n;
    }
    for (ll i = 1; i * i <= n && i <= k; i++)
    {
        if (i == 1)
            ans += n;
        else
        {
            ans += n / i * 2;
            if (n % i != 0)
                ans++;
        }
        ans %= mod;
        ll j = n / i;
        if (j == i)
            continue;
        if (j > k)
        {
            ll x = n / (i + 1);
            if (x < k)
                ans += (k - x) % mod * (i * 2 + 1) % mod;
            ans %= mod;
            continue;
        }
        ans += i * 2;
        if (n % j != 0)
            ans++;
        ll x = n / (i + 1);
        ans %= mod;
        ans += (j - x - 1) % mod * (i * 2 + 1) % mod;
    }
    cout << ans << "\n";
    return 0;
}
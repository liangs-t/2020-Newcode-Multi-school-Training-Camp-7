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
        int n, m, k, i, j;
        vector<int> ans;
        cin >> n >> m;
        if (n > m)
            swap(n, m);
        k = m / n * n;
        for (i = 0; i < k; i++)
            ans.push_back(n);
        k = m % n;
        while (m % n != 0)
        {
            m = n, n = k;
            k = m / n * n;
            for (i = 0; i < k; i++)
                ans.push_back(n);
            k = m % n;
        }
        cout << ans.size() << "\n";
        for (i = 0; i < ans.size(); i++)
            cout << ans[i] << (i == ans.size() - 1 ? "\n" : " ");
    }
    return 0;
}
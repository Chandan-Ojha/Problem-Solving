// Problem Link: https://codeforces.com/contest/2051/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int m = 0;
        int s = 0;

        for (int i = 0; i < n; ++i)
        {
            if (i == n - 1 || a[i] - b[i + 1] > 0)
            {
                m += a[i];

                if (i + 1 < n)
                {
                    s += b[i + 1];
                }
            }
        }

        cout << m - s << endl;
    }

    return 0;
}
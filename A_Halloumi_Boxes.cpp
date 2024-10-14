#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        if (is_sorted(a.begin(), a.end()))
            cout << "YES" << endl;
        else if (k >= 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

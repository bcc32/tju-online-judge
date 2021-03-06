#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vector<bool> v(m);
        for (int j = 0; j < m; j++)
            v[j] = true;
        for (int j = 2; j <= m; j++)
            for (int k = 0; k < m; k++)
                if ((k + 1) % j == 0)
                    v[k] = !v[k];
        cout << count(v.begin(), v.end(), true) << endl;
    }
}

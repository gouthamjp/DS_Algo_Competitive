//question https://www.hackerrank.com/contests/ieeextreme-challenges/challenges/magic-square

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    int mdsum = 0;
    int adsum = 0;
    int n;
    int diaSum = 0;

    cin >> n;
    int mat[n][n];
    int rsum[n];
    int csum[n];
    int res[n];
    vector<int> farray;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            // Condition for principal diagonal
            if (i == j)
                mdsum += mat[i][j];

            // Condition for secondary diagonal
            if ((i + j) == (n - 1))
                adsum += mat[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        rsum[i] = 0;
        for (int j = 0; j < n; j++)
        {
            rsum[i] = rsum[i] + mat[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        csum[i] = 0;
        for (int j = 0; j < n; j++)
        {
            csum[i] = csum[i] + mat[j][i];
        }
    }

    if (mdsum != adsum)
    {
        count++;
        farray.push_back(0);
    }

    for (int i = 0; i < n; ++i)
    {
        if (rsum[i] != mdsum)
        {
            count++;
            farray.push_back(i + 1);
        }
        if (csum[i] != mdsum)
        {
            count++;
            farray.push_back((i + 1) * (-1));
        }
    }

    cout << count << endl;

    sort(farray.begin(), farray.end());

    for (auto x : farray)
        cout << x << endl;

    return 0;
}
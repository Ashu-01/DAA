#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t, n, temp, k;
    vector<int> v;
    cin >> t;
    while (t)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        cin >> k;
        nth_element(v.begin(), v.begin() + k - 1, v.end());
        t--;
        cout<<v[k-1]<<endl;
        v.clear();
    }
}
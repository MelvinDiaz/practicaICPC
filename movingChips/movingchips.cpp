#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        auto first_chip = std::find(a.begin(), a.end(), 1);
        auto last_chip = std::find(a.rbegin(), a.rend(), 1);
        int free_cells = std::count(first_chip, a.end() - (last_chip - a.rbegin()), 0);
        cout << free_cells << std::endl;
    }
    return 0;
}
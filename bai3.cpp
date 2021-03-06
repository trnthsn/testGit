#include <iostream>
using namespace std;

int main()
{
    int a, n, m;
    cin >> a >> n >> m;
    unsigned long long tich = 1;
    for (int i = 1; i <= n; i++)
    {
        int k = a % m;
        tich = tich * k;
        tich = tich % m;
    }
    cout << tich;
    return 0;
}
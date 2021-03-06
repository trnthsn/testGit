#include <iostream>
using namespace std;

void getNumber(int *storage, int n)
{
    storage[0] = 1;
    for (int i = 1; i < n; i++)
        storage[i] = storage[i - 1] + 1;
}

void getPrimeNumber(int *storage, bool *check, int n)
{
    check[0] = false;
    for (int i = 1; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (storage[j] % storage[i] == 0)
            	check[j] = false;
}

void fillArray(bool *check, int n)
{
    for (int i = 0; i < n; i++)
        check[i] = true;
}

int main()
{
    int n;
    cin >> n;
    int storage[n];
    bool check[n];
    fillArray(check, n);
    getNumber(storage, n);
    getPrimeNumber(storage, check, n);
    for (int i = 0; i < n; i++)
    {
        if (check[i])
            cout << storage[i] << ' ';
    }
    return 0;
}
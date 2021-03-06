#include <iostream>
using namespace std;

void input (int array[][2], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> array[i][j];
        }
    }
}

bool check(int x1, int x2, int y1, int y2)
{
    if ((x1 - y1) == (x2 - y2)||(x1 - x2) == (y2 - y1) || (x1 == x2) || (y1 == y2))
        return true;
    return false;
}

bool checkArray(int array[][2], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (check(array[i][0], array[j][0], array[i][1], array[j][1]))
                return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int array[n][2];
    input(array, n);
    if (checkArray(array, n) == true)
        cout << "yes";
    else
        cout << "no";
}
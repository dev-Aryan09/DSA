#include <iostream>
using namespace std;

int main()
{

    // int n;
    // cin >> n;
    // cout << "value of n is:" << n << endl;

    // int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << sum << " ";
    //     sum = sum + i;
    // }
    // cout << sum;

    // we can also write like

    // int i = 1;
    // int sum = 0;
    // for (;;)
    // {

    //     if (i <= n)
    //     {
    //         cout << sum << " ";
    //         sum = sum + i;
    //     }
    //     else
    //     {
    //         break;
    //     }
    //     i++;
    // }
    // cout << " "<< endl;
    // cout << sum;

    // We can give multiple variables, conditions, and updators accordingly.

    for (int a = 0, b = 1, c = 2; a >= 0 && b >= 1 && c >= 2; a--, b--, c--)
    {
        cout << a << " " << b << " " << c << " " << endl;
        a = a - 1;
        b = b - 1;
        c = c - 1;
        cout << a << " " << b << " " << c << " " << endl;
    }
}
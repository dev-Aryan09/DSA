#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cin >> n;

    // cout << "value of n is:" << n << endl;

    // int i = 1;
    // while(i<=n)
    // {
    //     cout <<" "<< i;
    //     i = i + 1;

    // }

    // sum of 1 to n

    // int i = 1;
    // int sum = 0;

    // while(i<=n)
    // {
    //     sum = sum + i;
    //     cout << sum << endl;
    //     i = i + 1;
    // }
    // cout << "sum is: "<< sum << endl;

    int n;
    cin >> n;

    int i = 2;
     while(i<n) 
     {
        if(n%1 == 0) {
            cout << "Not prime for" << i <<endl;
        }
        else {
            cout << "Prime for" << i << endl;
        }
        i = i + 1;
     }
}
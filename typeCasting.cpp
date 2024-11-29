#include <iostream>
using namespace std;

int main()
{
    // IMPLICIT CASTING
    // 1. int to float
    int num1 = 10;
    float num2 = 5.5;

    float result = num1 + num2; // Implicit conversion of num1 from int to float
    // cout << result << endl;

    // int result = num1 + num2;
    // cout << result << endl;

    // 2. chat to int
    char ch = 'A';
    int a = 1;

    int sum = ch + a; // Implicit conversion from char to int
    // cout << sum << endl;

    // 3. int to char
    int b = 67;
    char chh = 'H';

    char rslt = b + chh;
    // cout << rslt << endl;

    // EXPLICT TYPECASTING
    // 1. double to int
    double pi = 3.14159265;
    int intPi = (int)pi; // Explicit conversion from double to int
    // cout << intPi << endl;

    // 2. float to char
    float floatingNumber = 65.35;
    char charValue = (char)floatingNumber; // Explicit conversion from float to char
    // cout << charValue << endl;

    // 3. int to float
    int A = 10;
    int B = 3.0;
    float C = A / B; // Explicit conversion from int to float
    cout << C << endl;
}
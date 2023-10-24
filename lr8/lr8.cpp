#include <iostream>
#include <iomanip>
#include "func.h"

using namespace std;

int main()
{
    double a, b, z, x, y;

    // 1

    cout << "Enter x, y, z, separated by spaces: ";
    cin >> x >> y >> z;
    if (x == 0 || x < 0 || y == 0 || x / y == 0) {
        cerr << "Error 1: invalid value or values";
        return 1;
    }

    a = numToA(x, y);
    b = numToB(x, y, z);
    
    cout << fixed << "a: " << a << endl << "b: " << b << endl;

    system("pause");
    cout << "\033[2J\033[1;1H";

    // 2

    cout << fixed << "a: " << a << endl << "b: " << b << endl;
    outputPalindrome((int)a);
    outputPalindrome((int)b);

    system("pause");

    // ADDED

    cout << "\033[2J\033[1;1H";

    // 3

    cout << "Enter num: ";
    cin >> x;
    
    cout << "The number of ways you can write num as the sum of consecutive positive integers: " << consecutiveNumbersSum(x) << endl;

    system("pause");
    // END OF ADDED
}
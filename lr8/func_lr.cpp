#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

double numToA(const double x, const double y) {
    return abs(pow(x, y / x) - pow(y / x, 1. / 3.)) + pow(x, 1. / 2.) - (pow(y, 2) - 8 * x) / pow(M_E, 3);
}
double numToB(const double x, const double y, const double z) {
    return y * pow(tan(x), 2) - (z + cos(2.26893)) / (pow(sin(x / y), 2));
}

bool isPalindrome(const int num) {
    int digit;
    int original = num;
    int reversed = 0;

    for (int i = original; i > 0; i /= 10) {
        digit = i % 10;
        reversed = reversed * 10 + digit;
    }
    if (original == reversed) {
        return true;
    }
    else {
        return false;
    }
}

void outputPalindrome(const int num) {
    if (isPalindrome(num)) {
        cout << num << " is a palindrome" << endl;
    }
    else {
        cout << num << " isn't a palindrome" << endl;
    }
}

// ADDED

int consecutiveNumbersSum(const int n) {
    int answer = 1;
    int sum;
    for (int i = 1; i < n; ++i) {
        sum = i;
        for (int j = i + 1;; ++j) {
            sum += j;
            if (sum >= n) {
                if (sum == n) {
                    answer++;
                }
                break;
            }
        }
    }
    return answer;
}

// END OF ADDED
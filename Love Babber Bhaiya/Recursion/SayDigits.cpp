#include <bits/stdc++.h>
using namespace std;
void sayDigits(int num, string arr[])
{
    if (num == 0)
        return;
    int digit = num % 10;

    num = num / 10;
    sayDigits(num, arr);
    cout << arr[digit] << " ";
}
int main()
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int n = 431;
    sayDigits(n, arr);
    return 0;
}
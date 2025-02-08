/*Create a program that finds and displays all Armstrong numbers within a given range using nested loops.*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;
    
    cout << "Enter the range (start and end): ";
    cin >> start >> end;

    cout << "Armstrong numbers between " << start << " and " << end << ": ";

    for (int num = start; num <= end; num++) {
        int sum = 0, temp = num, digits = 0;

        // Count digits
        while (temp > 0) {
            temp /= 10;
            digits++;
        }

        temp = num; // Reset temp to original number

        // Calculate sum of digits raised to the power of digit count
        while (temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        if (sum == num)  // Check if Armstrong
            cout << num << " ";
    }

    return 0;
}

/*
===============================================================
                Factorial Calculator in C++
===============================================================

Description:
    This program calculates the factorial of a non-negative 
    integer entered by the user. It uses an iterative approach 
    (for loop) to compute the factorial by multiplying all 
    integers from 1 to the entered number.

Features:
    - Accepts an unsigned integer as input
    - Uses a loop for factorial computation
    - Displays the final result

Notes:
    - The check `if (num < 0)` is logically unnecessary since 
      `num` is an unsigned integer and cannot be negative.
    - The result is stored in an `unsigned int`, which can 
      overflow for inputs greater than 12. Use `unsigned long long`
      for larger factorials.

Author: [Saurav Soni]
Date: [22/07/2025]
===========================================================
*/

#include <iostream>
using namespace std;

int main() {
    unsigned int num;
    unsigned long long int fact = 1;

    cout << "Enter your number: ";
    cin >> num;

// if statement (for number is not lessthan 0 / negative) 
    if (num < 0){
       cout << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }
// for loop (for factorial condition)
    for (int i = 1; i <= num; i++) 
    {
        fact *= i;
    }
    cout << "Factorial is: " << fact << endl;
    
    return 0;
}
//Maitreyee Gohad
//24070123509
#include <iostream>

using namespace std;

int main() 
{
    int num1, num2;
    int addition, subtraction, multiplication;
    float division;
  
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
  
    addition = num1 + num2;
    subtraction = num1 - num2;
    multiplication = num1 * num2;
    division = num1 / num2;

    cout << "Addition: " << addition << endl;
    cout << "Subtraction: " << subtraction << endl;
    cout << "Multiplication: " << multiplication << endl;
    cout << "Division: " << division << endl;

    return 0;
}

/*OUTPUT:
Enter two integers: 4 2
Addition: 6
Subtraction: 2
Multiplication: 8
Division: 2
  */

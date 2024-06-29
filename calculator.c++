#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Simple Calculator Program\n";

    cout << "Enter the first number: \n";
    cin >> num1;

    cout << "Enter the second number: \n";
    cin >> num2;

    cout << "Choose an operation (+, -, *, /): \n";
    cin >> operation;

    switch (operation) {
        case '+':
            cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation. Please choose +, -, *, or /." << endl;
            break;
    }

    return 0;
}
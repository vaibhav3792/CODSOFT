#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Basic Calculator Program" << endl;
    cout << "------------------------" << endl;


    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    
    cout << "Choose operation (+, -, *, /): ";
    cin >> op;

    double result;

   
    switch (op) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operator. Please choose +, -, *, or /." << endl;
    }

    return 0;
}

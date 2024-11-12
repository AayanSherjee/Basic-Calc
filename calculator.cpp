#include <iostream>
#include <cmath>
using namespace std;
void add(int a, int b);
void subtract(int a, int b);
void multiply(int a, int b);
void divide(int a, int b);
void power(int a, int b);
int main(){
    int a,b;
    char calc;
    cout << "Enter the action you want to perform (+,-,*,/,^): ";
    cin >> calc;
    switch (calc){
        case '+':
        add(a, b);
        break;
    
        case '-':
        subtract(a,  b);
        break;
        
        case '*':
        multiply(a,  b);
        break;

        case '/':
        divide(a,  b);
        break;

        case '^':
        power(a,  b);

        default:
        cout << "Invalid choice." << endl;
    }
    cin.get();
    return 0;
}

void add(int a, int b){
    cout << "Enter the first number: ";
    cin >> a;
    cout << "\nEnter the second number: ";
    cin >> b;
    cout << a << " + " << b << " = " << (a+b) << endl;
    }

void subtract(int a, int b){
    cout << "Enter the first number: ";
    cin >> a;
    cout << "\nEnter the second number: ";
    cin >> b;
    cout << a << " - " << b << " = " << (a-b) << endl;
    }

void multiply(int a, int b){
    cout << "Enter the first number: ";
    cin >> a;
    cout << "\nEnter the second number: ";
    cin >> b;
    cout << a << " * " << b << " = " << (a*b) << endl;
    }

void divide(int a, int b){
    cout << "Enter the dividend: ";
    cin >> a;
    cout << "\nEnter the divisor: ";
    cin >> b;
    if (a || b != 0){
    cout << a << " / " << b << " = " << (a/b) << endl;
    }
    else {
        cout << "You cannot divide by zero!" << endl;
    }
}
void power(int a, int b){
     cout << "Enter the base: ";
    cin >> a;
    cout << "\nEnter the exponent: ";
    cin >> b;
    cout << a << " ^ " << b << " = " << pow(a, b) << endl;
}



#include <iostream>

using namespace std;

int main(){
    
    int x, y;

    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;

    cout << "Average = " << (x + y) / 2.0 << endl;

    char operation;
    cout << "Enter operation +, - , *, /: ";
    cin >> operation;
    cout << "x " << operation << " y = ";
    switch (operation)
    {
    case '+':
        cout << x + y;
        break;
    case '-':
        cout << x - y;
        break;
    case '*':
        cout << x * y;
        break;
    case '/':
        cout << x / y;
        break;
    
    default:
        cout << "UKNOWN";
        break;
    }
    cout << endl;


}
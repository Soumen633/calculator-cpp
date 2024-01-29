#include <iostream>
using namespace std;
int main()
{
    float first_num, second_num;
    int num;
    cout<<"*******************simple calculator**************"<<endl;
    cout << "Enter first number: ";
    cin >> first_num;

    cout << "Enter second number: ";
    cin >> second_num;

    cout << "choose your operator: " << endl;
    cout << "1. +" << endl;
    cout << "2. -" << endl;
    cout << "3. *" << endl;
    cout << "4. /" << endl;
    cin >> num;

    switch (num)
    {
    case 1:
        cout << first_num << "+" << second_num << "=" << (first_num + second_num) << endl;
        break;
    case 2:
        cout << first_num << "-" << second_num << "=" << (first_num - second_num) << endl;
        break;
    case 3:
        cout << first_num << "*" << second_num << "=" << (first_num * second_num) << endl;
        break;
    case 4:
        cout << first_num << "/" << second_num << "=" << (first_num / second_num) << endl;
        break;
    default:
        cout << "invalid operation" << endl;
        break;
    }

    return 0;
}
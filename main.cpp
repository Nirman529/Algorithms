#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    int launch = 0;
    bool flag = true;
    cout << "Algorithms" << endl;
    cout << "Enter the number for algorithm you want to run from the given options" << endl;
    cout << "1. Stack" << endl;
    cout << "Choice: ";
    cin >> launch;

    while (flag)
    {

        switch (launch)
        {
        case 1:
            cout << "called" << endl;
            stack();

            break;

        default:
            cout << "Invalid option closing the file";
            break;
        }
    }
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int x = 1; //while loop variable
    int a;
    int b;
    int ans;
    char op;

    cout << "**********WELCOME TO GENETIC CAL-C**********" << endl;
    cout << "START CALCULATING \n\n";

    while (x == 1)
    {

        cout << "\nEnter Your Calculation" << endl;
        cin >> a >> op >> b;

        if (op == '+')
        {
            ans = a + b;
            cout << "The Sum is " << ans << endl;
        }
        if (op == '-')
        {
            ans = a - b;
            cout << "The Difference is " << ans << endl;
        }
        if (op == '*')
        {
            ans = a * b;
            cout << "The Product is " << ans << endl;
        }
        if (op == '/')
        {
            ans = a / b;
            cout << "The Quotient is " << ans << endl;
        }
        if (op == '%')
        {
            ans = a * b / 100;
            cout << "The Answer is " << ans << endl;
        }
    }
}

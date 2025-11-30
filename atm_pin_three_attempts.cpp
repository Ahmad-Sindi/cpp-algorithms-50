// Algorithm Challenge & Problem Solving
// 50 - ATM PIN (Maximum 3 Attempts)

#include <iostream>
using namespace std;

int main()
{
    int failedCount = 0, pin, balance = 7500;

    // Ask user to enter the PIN for the first time
    cout << "Enter your PIN:\n";
    cin >> pin;

    // Allow up to 3 attempts
    while (pin != 1222)
    {
        if (failedCount == 2)
        {
            // After 3 failed attempts
            cout << "Your card is locked.\n";
            break;
        }
        else
        {
            failedCount++;
            cout << "Incorrect PIN. Try again:\n";
            cin >> pin;
        }
    }

    // If PIN is correct, show balance
    if (pin == 1222)
    {
        cout << "Access Granted. Your balance is: $" << balance << "\n";
    }

    return 0;
}

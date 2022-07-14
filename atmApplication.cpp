#include <iostream>

using namespace std;

void options()
{
    cout << "*******Choose an Option*******" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "*******************" << endl
         << endl;
    cout << "Option: ";
}

int main()
{

    int input;
    double depositAmt, withdrawAmt;
    double balance = 100;
    string name;

    cout << "Welcome to your ATM account" << endl;
    cout << "Please enter your name: ";
    cin >> name;
    cout << "Hello " << name << "!" << endl;

    while (input != 4)
    {

        options();
        cin >> input;
        system("cls");

        switch (input)
        {
        case 1:
            cout << "Dear " << name << " your balance is " << balance << "ETB" << endl;
            break;
        case 2:
            cout << "Enter the amount you want to deposit: ";
            cin >> depositAmt;
            balance += depositAmt;
            cout << "Success!" << endl;
            break;
        case 3:
            cout << "Enter the amount you want to withdraw: ";
            cin >> withdrawAmt;

            if (withdrawAmt <= balance)
            {
                balance -= withdrawAmt;
                cout << "Success!" << endl;
            }
            else
            {
                cout << "Insufficient funds!" << endl;
            }
            break;
        default:
            if (input == 4)
            {
                break;
            }
            else
            {
                cout << "Invalid Option!" << endl;
                break;
            }
        }
    }

    return 0;
}
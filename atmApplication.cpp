#include <iostream>

using namespace std;

void options()
{
    cout << endl
         << "*******MENU*******" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "*******************" << endl
         << endl;
}

int main()
{
    int input;

    options();
    cin >> input;

    return 0;
}
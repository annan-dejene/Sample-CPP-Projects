#include <iostream>

using namespace std;

void optionsUser()
{
    cout << "\n\nDear user, Please choose an option" << endl
         << endl;
    cout << "******OPTIONS*******" << endl;
    cout << "1: List books" << endl;
    cout << "2: Check out book" << endl;
    cout << "3: Check in book" << endl;
    cout << "4: Exit Program" << endl
         << endl;
}

string bookSelected(int id)
{
    string book;

    switch (id)
    {
    case 1:
        book = "Anna Karenina";
        break;
    case 2:
        book = "Madame Bovary";
        break;
    case 3:
        book = "War and Peace";
        break;
    case 4:
        book = "Lolita";
        break;
    case 5:
        book = "The Adventures of Huckleberry Finn";
        break;
    case 6:
        book = "Hamlet";
        break;
    case 7:
        book = "The Great Gatsby";
        break;
    case 8:
        book = "In Search of Lost Time";
        break;
    default:
        book = "NaN";
        break;
    }

    return book;
}

int main()
{
    int input;
    int idCheck;

    cout << "\n\n\t\tWelcome to the Digital Library!" << endl
         << endl;

    while (input != 4)
    {
        optionsUser();
        cout << "Option: ";
        cin >> input;
        system("cls");

        switch (input)
        {
        case 1:
            cout << "\n\nThese are the books we have in stock\n\n"
                 << endl;
            cout << "1. Anna Karenina\n2. Madame Bovary\n3. War and Peace\n4. Lolita\n5. The Adventures of Huckleberry Finn\n6. Hamlet\n7. The Great Gatsby\n8. In Search of Lost Time\n";
            break;
        case 2:
            cout << "\n\nPlease write the ID of the book you want to check out\n\n";
            cout << "1. Anna Karenina\n2. Madame Bovary\n3. War and Peace\n4. Lolita\n5. The Adventures of Huckleberry Finn\n6. Hamlet\n7. The Great Gatsby\n8. In Search of Lost Time\n";
            cout << "\nBOOK ID: ";
            cin >> idCheck;
            if (bookSelected(idCheck) == "NaN")
            {
                cout << "Invalid ID!\n";
            }
            else
            {
                cout << "\n\nYou've succefully selected " << bookSelected(idCheck) << ", Enjoy reading!\n\n";
            }
            break;
        case 3:
            cout << "Please select the ID of the book you want to return\n\n";
            cout << "1. Anna Karenina\n2. Madame Bovary\n3. War and Peace\n4. Lolita\n5. The Adventures of Huckleberry Finn\n6. Hamlet\n7. The Great Gatsby\n8. In Search of Lost Time\n";
            cout << "\n\nBOOK ID: ";
            cin >> idCheck;
            if (bookSelected(idCheck) == "NaN")
            {
                cout << "Invalid ID!\n";
            }
            else
            {
                cout << "\n\nYou've succefully added back " << bookSelected(idCheck) << ", Come again Soon!\n\n";
            }
            break;
        default:
            if (input == 4)
            {
                cout << "Good Bye!\n";
                break;
            }
            else
            {
                cout << "Invalid Option\n";
                break;
            }
        }
    }

    return 0;
}
#include "header.h"
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
int main()
{

    int choice;
    person p;

    while (1)
    {
        cout << "Address book" << endl
             << endl;
        cout << " Press (1) and hit ENTER to add a new contact" << endl
             << "Press (2) and hit ENTER to remove a contact" << endl
             << "Press (3) and hit ENTER to search for contact" << endl
             << endl;
        cout << "Press (4) and hit ENTER to read " << endl;
        cout << "Press (5) and hit ENTER to quit" << endl;
        cin >> choice;
        if (choice == 5)
        {
            break;
        }

        switch (choice)
        {
        case 1:
            p.get_full_details();
            add(p);
            break;
        case 2:
            p.get_details();
            remove(p);
            break;
        case 3:
            p.get_details();

            search(p);
            break;
        case 4:
            read();
            break;

        default:
            cout << "Please enter a valid option." << endl;
        }
    }

    return 0;
}

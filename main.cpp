#include "header.h"
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
    using namespace std;
int main(){


int choice;
person p;

while(1){
cout<<"Address book"<<endl<<endl;
cout<<"\t Press (1) to add a new contact"<<endl
    <<"\tPress (2) to remove a contact"<<endl
    <<"\tPress (3) to search for contact"<<endl<<endl;
cout<<"\tPress (4) to read "<<endl;
cin >>choice;
if (choice==5){
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
        cout<<"Please enter a valid option."<<endl;
}

}







return 0;
}

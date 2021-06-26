#include "header.h"
#include <iostream>
#include<string>
#include<fstream>
using namespace std;


    
    void person::get_details(void)
    {
    cout<< "Enter your first Name:"<<endl;
    cin>>f_name;
    cout<< "Enter your surname:"<<endl;
    cin>>s_name;
    cout<< "Enter your email"<<endl;
    cin>>email;
    cout<< "Enter your Telephone number"<<endl;
    cin>>telno;



    }
    void person::get_full_details(void){

        get_details();    
    cout<< "Enter street"<<endl;
    cin>>street;
    cout<< "Enter town"<<endl;
    cin>>town;
    cout<< "Enter country"<<endl;
    cin>>country;

    }
    



void person::display_details(void)
{
    cout<< "first name:"<<f_name<<endl;
    cout<< "surname:"<<s_name<<endl;
    cout<< "email:"<<email<<endl;
    cout<< "telno:"<<telno<<endl;
    cout<< "street:"<<street<<endl;
    cout<< "town:"<<town<<endl;
    cout<< "country:"<<country<<endl;
    cout<<endl;


}
int compare(person p1,person p2){

    return strcmp(p1.f_name,p2.f_name)==0 && strcmp( p1.s_name,p2.s_name)==0 && strcmp(p1.email,p2.email)==0 && strcmp(p1.telno,p2.telno)==0;



}

void  add(person p){

    
    ofstream fout("book.dat", ios::out | ios::binary|ios::app);
    
    fout.write((char *) &p, sizeof(p));

    fout.close();






}
void read(){

person p;
ifstream fin("book.dat",ios::in | ios::binary);
while(1){

    if( !fin.read((char *)&p,sizeof(p))){
        break;
    }

   

    p.display_details();




}


}

void search(person p){
person p1;
ifstream fin("book.dat",ios::in | ios::binary);

int flag=0;
while(fin.read((char *)&p1,sizeof(p1))){

    

    if (compare(p1,p)==1){
        flag=1;

        p1.display_details();
        break;





    }
}

if (flag==0){


    cout<<"Not found"<<endl;
}
fin.close();

}

void remove(person p){
  person p1;
  int flag=0;
   ofstream fout ("temp.dat",ios::binary | ios::app );
   ifstream fin ("book.dat",ios::binary);
   while(fin.read((char*)&p1,sizeof(p1))){
     if(compare(p,p1)==0){
        fout.write((char*)&p1,sizeof(p1));


     }

     else{


         flag=1;
     }

   }

   if (flag==0){


       cout<<"Not found.";
   }
   fin.close();
   fout.close();
   remove("book.dat");
   rename("temp.dat","book.dat");





}



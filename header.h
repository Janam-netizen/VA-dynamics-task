#ifndef HEADER_H
#define HEADER_H
 
class person
{
     public:
    char f_name[30];
    char s_name[30];
    char email[30];
    char telno[30];
    char street[30];
    char town[30];
    char country[30];

    
    void get_details(void);
    void display_details(void);
    void get_full_details(void);


};

int compare(person p1, person p2);
void read();
void add(person p);

void search(person p);

void remove(person p);
 
#endif
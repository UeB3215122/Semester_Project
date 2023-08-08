#include <iostream>
#include <cstring> // Include this for using strcpy
using namespace std;

class student{
public:
    int rollno;
    char name[50];
    char gender;
    int age;
    int level;
    char programme[50]; 


void getData()
{
    cout << "Enter Student Details\n";
    cout << "Enter Rollno:\n";
    cin >>rollno;
    
    cin.ignore(); 
    
    cout << "Enter Name:\n";
    cin.getline(name, sizeof(name));
    
    cout << "Gender:\n";
    cin >>gender;
    
    cout << "Age:\n";
    cin >>age;
    
    cout << "Level:\n";
    cin >>level;
    
    cout << "Programme:\n";
    cin.ignore(); 
    cin.getline(programme, sizeof(programme));
}



void showData()
{
cout <<"Rollno:"<<rollno<<endl;
cout <<"Name:"<<name<<endl;
cout <<"Gender:"<<gender<<endl;
cout <<"Age:"<<age<<endl;
cout <<"Level:"<<level<<"00\n";
cout <<"Programme:"<<programme<<endl;
}

};

int main()
{
   student s[2];
int i;
for(i=0;i<2;i++)
{
cout <<"Enter the Details for Record No:"<<i+1<<endl;
s[i].getData();
cout <<endl;
}
cout <<endl;
for(i=0;i<2;i++)
{
s[i].showData();
cout <<endl;
}
 

    return 0;
}

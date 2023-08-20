
#include <iostream>
#include <cstring>
using namespace std;

class student {
public:
    int rollno;
    char name[50];
    char gender;
    int age;
    int level;
    char programme[50];

    void getData() {
        cout << "Enter Student Details\n";
        cout << "Enter Rollno:\n";
        cin >> rollno;

        cin.ignore();

        cout << "Enter Name:\n";
        cin.getline(name, sizeof(name));

        cout << "Gender:\n";
        cin >> gender;

        cout << "Age:\n";
        cin >> age;

        cout << "Level:\n";
        cin >> level;

        cout << "Programme:\n";
        cin.ignore();
        cin.getline(programme, sizeof(programme));
    }

    void showData() {
        cout << "Rollno:" << rollno << endl;
        cout << "Name:" << name << endl;
        cout << "Gender:" << gender << endl;
        cout << "Age:" << age << endl;
        cout << "Level:" << level << "\n";
        cout << "Programme:" << programme << endl;
    }
};

void updateData(student s[]) {
    int i;
    for (i = 0; i < 2; i++) {
        cout << "Enter the Details for Record No:" << i + 1 << endl;
        s[i].getData();
        cout << endl;
    }
    cout << endl;
    for (i = 0; i < 2; i++) {
        s[i].showData();
        cout << endl;
    }

    cout << "Student Details Updated Successfully\n";
    cout << endl;
}

void showMenu(student s[]) {
    int option;
    int i;
    cout << "1. Display Student Details\n";
    cout << "2. Update Student Details\n";
    cout << "3. Upload Student Details\n";
    cout << "4. Exit\n";
    cin >> option;

    switch (option) {
        case 1:
            cout << "You chose to display student details.\n";
            for (i = 0; i < 2; i++) {
                s[i].showData();
                cout << endl;
            }
            break;

        case 2:
            cout << "You chose to update student details.\n";
            updateData(s);
            break;

        case 3:
            cout << "You chose to upload student details\n";
            updateData(s);
            break;

        case 4:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid option. Please choose a valid option.\n";
            break;
    }
}

int main() {
    student s[2];
    showMenu(s);
    return 0;
}

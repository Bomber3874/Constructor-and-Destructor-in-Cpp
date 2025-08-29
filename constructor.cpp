/*Sanidhya Singh
24070123140
ENTC B2*/

#include <iostream>
using namespace std;

class Student {
    int rollno;
    char name[50];
    double fee;

    public:
    Student(){
        cout<<"Enter the roll number: ";
        cin>>rollno;
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the fee: ";
        cin>>fee;
    }
};

int main() {
    Student s1; 

    return 0;
}

/*Output
Enter the roll number: 140
Enter the name: Sani
Enter the fee: 2000
*/
/*Sanidhya singh
24070123140
ENTC B2*/

#include <iostream>
using namespace std;

class Subjects{
    string sub1;
    string sub2;
    string sub3;

    public:
    Subjects(string s1, string s2, string s3){
        sub1=s1;
        sub2=s2;
        sub3=s3;
    }
    Subjects(const Subjects &s){
        sub1=s.sub1;
        sub2=s.sub2;
        sub3=s.sub3;
    }
    void display(){
        cout<<"Subject 1: "<<sub1<<endl;
        cout<<"Subject 2: "<<sub2<<endl;
        cout<<"Subject 3: "<<sub3<<endl;
    }
};
int main(){
    Subjects s1("CDS","DSA","TOC");
    Subjects s2=s1;
    cout<<"Details of Subject 1: "<<endl;
    s1.display();
    cout<<"Details of Subject 2: "<<endl;
    s2.display();
    return 0;
}

/*Output
Details of Subject 1: 
Subject 1: CDS
Subject 2: DSA
Subject 3: TOC
Details of Subject 2: 
Subject 1: CDS
Subject 2: DSA
Subject 3: TOC
*/
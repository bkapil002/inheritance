#include<iostream>
using namespace std;

class person{
    public:
    string name;
    int age;

    void setPersonDetails(string n , int a){
        name = n;
        age = a;
    }

    void displayPerson(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

class student : public person{
     public:
     int rollNumber;

     void setStudentDetails(int r , string n, int a){
         setPersonDetails(n , a);
         rollNumber = r;
     }

     void displayStudent(){
        displayPerson();
        cout<<"roll Number: "<< rollNumber << endl;
     }
};
int main(){
    student s;

    s.setStudentDetails(12 , "brahm kapil" , 20);
    cout << "student details: "<<endl;
    s.displayStudent();
    return 0;
}
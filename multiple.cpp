#include<iostream>
using namespace std;

class person{
    public:
    string Name;
    int age;

    void readPersonDetails(){
        cout<<"Enter your name: "<< endl;
        cin>> Name;
        cout<<"Enter your Age: "<< endl;
        cin>> age;
    }

    void displayPersonDetails(){
        cout<<"Name: "<<Name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

class Details{
    public:
    int rollNumber;
    string grade;

    void readDetails(){
        cout<<"Enter your Roll Number: "<< endl;
        cin>> rollNumber;
        cout<<"Enter your Grade: "<< endl;
        cin>> grade;
    }

    void displayDetails(){
        cout<<"Roll Number: "<<rollNumber<<endl;
        cout<<"Grade: "<<grade<<endl;
    }
};

class Student : public person, public Details{
    public:
    
    void readStudentDetails(){
        readPersonDetails();
        readDetails();
    }
    void displayStudentDetails(){
        displayPersonDetails();
        displayDetails();
    }
};


int main(){
    Student student;
    cout<<"Enter Student Details: "<<endl;
    student.readStudentDetails();

    cout<<"Student details"<<endl;
    student.displayStudentDetails();

    return 0;
}
#include<iostream>
using namespace std;

class person{
    public:
    string name;
    int age;

    void readPersonDetails(){
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }
    void dispalyPersonDetails(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Employee : public person{
    public:
    int enployeeID;
    string position;

    void readEmployeeDetails(){
        readPersonDetails();
        cout << "Enter Employee ID: ";
        cin >> enployeeID;
        cout << "Enter Position: ";
        cin >> position;
    }

    void displayEmployeeDetails(){
       dispalyPersonDetails();
       cout << "Employee ID: " << enployeeID << endl;
       cout << "Position: " << position << endl;
    }
};

class Manager : public Employee{
    public:
    string salary;

    void readManagerDetails(){
        readEmployeeDetails();
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayManagerDetails(){
        displayEmployeeDetails();
        cout << "Salary: " << salary << endl;
    }
};
int main() {

    Manager m;

    cout << "Enter Manger Details: "<<endl;
    m.readManagerDetails();

    cout <<"manger details " << endl;
    m.displayManagerDetails();
    return 0 ; 
}
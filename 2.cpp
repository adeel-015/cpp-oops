// 2. Given that an EMPLOYEE class contains following data members: Employee number,Employee name, Basic, DA, IT, Net Salary. 
//    Write a C++ program to read the data of N employees and compute Net salary of each employee 
//    (DA=52% of Basic and Income Tax (IT)=30% of the gross salary).

#include <iostream>
using namespace std;

class employee{
    int Employee_no;
    string Employee_name;
    float basic, DA, tax, gross_salary, net_salary;
    public:
    void readData(){
        cout << "-----Details of employee:----- " << endl;
        cout << "Enter Employee No.:- ";
        cin >> Employee_no;
        cin.ignore();
        cout << "Enter Employee Name:- ";
        getline(cin, Employee_name);
        cout << "Enter Basic:- ";
        cin >> basic;
    }
    int compute(){
        DA = basic * 0.52;
        gross_salary = basic + DA;
        tax = gross_salary * 0.30;
        net_salary = gross_salary - tax;
        return net_salary;
    }
};

int main(){
    int size;
    cout << "Enter no. of employees:- ";
    cin >> size;
    employee arr[size];
    for (int i=0;i<size;i++){
        arr[i].readData();
    }
    for (int i=0;i<size;i++){
        cout << "Net Salary of " << arr->Employee_name << " is " << arr[i].compute();
    }
}

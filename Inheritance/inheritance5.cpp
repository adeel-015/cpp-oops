#include<iostream>
#include<string>

using namespace std;

//implementing Multiple Inheritance

class Mother{
    public:
        string Mname;
};

class Father{
    public:
        string Fname;
};

class Child : public Mother , public Father{ //Mother and Father class inherited in Child class
    public:
        string Cname;

        void displaydetails(){
            cout << "child name: " << Cname << endl;
            cout << "Mother name: " << Mname << endl; //Here Mname attribute is inherited from Mother class
            cout << "Father name: " << Fname << endl; //Here Fname attribute is inherited from Father class
        }
};

int main(){
    Child c; //object of child class
    c.Fname="John"; //inherited attribute from Father class in child class
    c.Mname="Angel"; //inherited attribute from Mother class in child class
    c.Cname="Tom";   //attribute of child class itself
    c.displaydetails(); 
    return 0;
}

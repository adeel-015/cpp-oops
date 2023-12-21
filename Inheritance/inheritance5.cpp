#include<iostream>
#include<string>

using namespace std;

class Animal{
    public:
        int age;
        string color;

        void run(){
            cout<<"Running"<<endl;
        }
};
//Implementing single inheritance
class dog : public Animal{  
     public:
        string type;

        void display(){
        cout<<"age: "<<age<<endl;
        cout<<"color: "<<color<<endl;
        cout<<"type: "<<type<<endl;
      }
};

//Implementing multilevel inheritance
class Puppy: public dog{
    public:
         string petname;
};

//implementing multiple inheritance
class Mother{
    public:
        string Mname;
};
class Father{
    public:
        string Fname;
};

class Child : public Mother,public Father{
    public:
        string Cname;

        void displaydetails(){
            cout<<"child name: "<<Cname<<endl;
            cout<<"Mother name: "<<Mname<<endl;
            cout<<"Father name: "<<Fname<<endl;
        }
};

int main(){
    Puppy p;
    p.age=3;
    p.color="black";
    p.petname="tommy";
    p.run();
    p.type="pug";
    p.display();
    cout<<endl;
    Child c;
    c.Fname="John";
    c.Mname="Angel";
    c.Cname="Tom";
    c.displaydetails();
    return 0;
}
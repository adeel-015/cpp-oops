// 7. Write a program to find greater amomg two numbers using Friend Function. Note: One number is a member of one class and the other one belongs to another class.

#include <iostream>
using namespace std;

class ClassB;

class ClassA {
    int numA;
    public:
        ClassA(int a) : numA(a) {}
        friend int findGreater(const ClassA &a, const ClassB &b);
};

class ClassB {
    int numB;
    public:
        ClassB(int b) : numB(b) {}
        friend int findGreater(const ClassA &a, const ClassB &b);
};

int findGreater(const ClassA &a, const ClassB &b) {
    if (a.numA > b.numB) {
        return a.numA;
    } else {
        return b.numB;
    }
}

int main() {
    ClassA objA(15);
    ClassB objB(25);
    int greaterNumber = findGreater(objA, objB);
    cout << "The greater number is: " << greaterNumber << endl;
    return 0;
}

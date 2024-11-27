#include "TestClass.hpp"
 
int main() {
    TestClass obj1("Hello");
    TestClass obj2("World");
 
    obj2 = obj1; // Assignment operator
    obj2.print();
 
    obj1 = obj1; // Self-assignment test
    obj1.print();
 
    TestClass obj3 = obj1; // Copy constructor
    obj3.print();
 
    return 0;
}
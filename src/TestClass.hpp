#ifndef TESTCLASS_H
#define TESTCLASS_H
 
#include <iostream>
#include <cstring>
 
class TestClass {
private:
    char* data;
    int size;
 
public:
    TestClass(const char* initData = "");
    TestClass(const TestClass& other);
    TestClass& operator=(const TestClass& other);
    ~TestClass();
 
    void print() const;
};
 
#endif
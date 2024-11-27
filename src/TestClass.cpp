#include "TestClass.hpp"
 
TestClass::TestClass(const char* initData) : size(strlen(initData)), data(new char[size + 1]) {
    std::strcpy(data, initData);
    std::cout << "Constructor called: " << data << std::endl;
}
 
TestClass::TestClass(const TestClass& other) : size(other.size), data(new char[other.size + 1]) {
    std::strcpy(data, other.data);
    std::cout << "Copy constructor called: " << data << std::endl;
}
 
TestClass& TestClass::operator=(const TestClass& other) {
    // Item 11: Handle self-assignment
    if (this == &other) {
        std::cout << "Self-assignment detected." << std::endl;
        return *this;
    }
 
    delete[] data;
 
    // Item 12 Copy all parts of an object
    size = other.size;
    data = new char[size + 1];
    std::strcpy(data, other.data);
 
    std::cout << "Assignment operator called: " << data << std::endl;
 
    // Item 10: Return reference to *this
    return *this;
}
 
TestClass::~TestClass() {
    std::cout << "Destructor called: " << data << std::endl;
    delete[] data;
}
 
void TestClass::print() const {
    std::cout << "Data: " << data << ", Size: " << size << std::endl;
}
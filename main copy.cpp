#include <iostream> // headerfile

#include "somefunc.h" // header file for function declarations
// open file copy all lines paste here

// bad error handling
// also slow

// c++ 
// we are trying to stop using #include and #define
// C++20 modules - better way to organize code and manage dependencies, faster compilation times, and improved encapsulation. Modules allow you to define interfaces and implementations separately, which can help reduce compilation times and improve code organization. However, they are not yet widely supported by all compilers, so it's important to check if your compiler supports C++20 modules before using them in your project.
// templates


#define PI 3.14159 // preprocessor directive for defining a constant value of PI







// declaration of functions
void printHelloWorld(); // function prototype for printing "Hello, World!"
std::string getSomeonesName(); // function prototype for getting someone's name


int main(){

    float number = 2.12345;
    std::cout <<  number << std::endl;  // 2.12345




    printHelloWorld(); // call the function
    int tal = add(5, 10); // call the add function and store the result in 'tal'
    std::cout << "The sum of 5 and 10 is: " << tal << std::endl; // output the result

    std::string coolName = getSomeonesName(); // call the function to get a cool name and store it in 'coolName'
    return 0; // error code 0 indicates that the program ended successfully
}

std::string getSomeonesName() { // function definition
    std::string name; // declare a string variable to hold the name
    std::cout << "Please enter your name: "; // prompt the user for their name
    std::getline(std::cin, name); // read the user's input and store it in 'name'
    return name; // return the name
}

void printHelloWorld() { // function definition
    std::cout << "Hello World!" << std::endl; // output
}

 

// CoPilot 


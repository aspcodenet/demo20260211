#include <iostream> // headerfile
#include "somefunc.h" // header file for function declarations



// declaration of functions
void printHelloWorld(); // function prototype for printing "Hello, World!"
std::string getSomeonesName(); // function prototype for getting someone's name


int main(){
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



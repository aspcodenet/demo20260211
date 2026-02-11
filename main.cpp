#include <iostream> // headerfile
#include <iomanip> // Required for setprecision

// function order is important in C++. The function must be declared before it is called.



void printHelloWorld() { // function definition
    std::cout << "Hello World!" << std::endl; // output
}


// composite datatype - user defined
struct Player{ // same as class
    int jerseNumber;
    std::string name;
    int born;
};

// 
// std::     = namespace - "folder" on your computer
   ///               2025\summer.png
   ///               2024\summer.png

// using namespace std;  BAD PRACTICE


// lists 
// players = []
// List<Player>

int main(){

    int loopMax = 5;
    int loopCounter = 0;


    do{ // 1 to ~ times 
        std::cout << "Hello" << std::endl;
        //loopCounter = loopCounter + 1;
        loopCounter++;
        // ++loopCounter;
    }while( loopCounter < loopMax );


    // 0  to ~ times 
    while( loopCounter < loopMax ){
        std::cout << "Hello" << std::endl;
        //loopCounter = loopCounter + 1;
        loopCounter++;
        // ++loopCounter;
    }


    for(int i = 0; i < 10;i++){
        std::cout << "Hello" << std::endl;
    }

    int i = 0;
    while(i < 10){
        std::cout << "Hello" << std::endl;
        i++;
    }

    // for loops =  when we know how many laps - 1972 -> 2026
    // while/do while = when we DONT know how many laps -GAME LOOP while (not exit)

    // foreach loops later!
    




    int age = 12;
    int year = 2026;
    // if( age == 15 || year == 2323)
    int selection;
    std::string name;
    while(true){
        std::cout << "1. Create a player " << std::endl;
        std::cout << "2. Delete a player " << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cout << "Enter action:";
        std::cin >> selection;
        if(selection == 1){
            std::cout << "Creating a new player" << std::endl;
            std::cout << "Enter a name:" ;
            std::getline(std::cin, name); // 
            //std::cin >> name; // Stefan Holmberg -> Stefan
        }else if(selection == 2){
            std::cout << "Delete a new player" << std::endl;
        }else if(selection == 3){
            break;
        }
    }



    // std::cin 

    // 
    // int shoeSize = 0; //4 bytes -2 000 000 000 -> +2 000 000 000
    // unsigned int shoeSize2 = 12; // 0 -> 4 000 000 000
    // short int shoeSize3 = 12; // 2 bytes 2^16 -32000 -> + 32000
    // unsigned short int shoeSize3 = 12; // 2 bytes 2^16 0 -> 65535 C64 K
    // unsigned char shoeSize4 = 0; //1 byte - 8 bits // 0 - 255
    // char shoeSize5 = 0; //1 byte - 8 bits // -127 -> 128

    // char variable = 65;
    // char va = 'A';
    // printf("%c",variable); // 'A'
    // printf("%d",variable); // 65






    // double f = 0.0;  // float 8 bytes , double (float with double precision - 16 bytes )
    // for (int i = 0; i < 10; ++i) {
    //     f = f + 0.1;
    //     //f += 0.1f;
    // }
    // if (f == 1.0) {
    //     std::cout << "It is exactly 1.0" << std::endl;
    // } else {
    //     // This will run! f is actually something like 1.0000001
    //     std::cout << "It is NOT 1.0. It is: " << std::fixed << std::setprecision(20) << f << std::endl;
    // }

    // //printHelloWorld(); // call the function
    // return 0;
}
#include <iostream>
#include <string>

// Specially named function that is the entry point into our program.
int main()
{

     // Allocate an array on the stack.
     // This array cannot be referenced outside the main function.
     int myArray[10];

     // counted-for loop that pre-increments 'i' by one each iteration of the
     for(int i =0; i < 10 ; ++i) {
        // If we are modifying values , then use a regular for-loop
        myArray[i] = i ;
        // cout is also part of the standard library, and prints
        std::cout << i << " ";
     }

     std::string s= "hello";

     // for-each loop.
     for(char c : s) {
        std::cout << c ;
     }

}

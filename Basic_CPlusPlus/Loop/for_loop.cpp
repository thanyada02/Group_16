#include <iostream>
using namespace std;

int main() { // main function starts
    // declare variable A and initialize it to 0
    int A = 0; 
    cout << "Please enter a number to A: " << endl; // prompt user for input
    cin >> A; // input from user

    if (A < 5) { // check if A is less than 5
        cout << "Condition met" << endl; // output if A is less than 5

  	// for loop to print "Hi" 5 times
    for (int i = 0; i < 5; i++) {
      	cout << "Hi => i = " << i << endl;
    }
  
    return 0; // end of the program
}
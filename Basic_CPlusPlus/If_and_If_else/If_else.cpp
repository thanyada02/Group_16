#include<iostream>
using namespace std;

int main() {
    int A = 0;
    cout << "Please enter a number for A: " << endl; // prompt user for input
    cin >> A; //input from user

    if (A == 8) { // check if A is equal to 8
        cout << "A is 8" << endl; // output if A is equal to 8
    } else if (A > 8) { // check if A is greater than 8
        cout << "A is greater than 8" << endl; // output if A is greater than 8
    } else {
        cout << "A is less than 8" << endl; // output if A is less than 8
    }

    return 0; //    end of the program
}
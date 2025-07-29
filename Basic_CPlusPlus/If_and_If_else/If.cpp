#include<iostream>
using namespace std;

int main (){ // main function starts
    int A = 0; // declare variable A and initialize it to 0
    cout<<"Please enter a number to A: "<< endl; // prompt user for input
    cin >> A; // input from user

    if(A<5){ // check if A is less than 5
        cout<<"Condition met"<<endl; // output if A is less than 5
    }
    
    return 0; // end of the program
}
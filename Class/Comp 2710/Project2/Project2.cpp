/**
 * Student ID: 903700162
 * File Name : Project2.exe
 * Ran using PuTTY
 * kzdd0030@tux062:~/Desktop/Project2$ vim Project2.cpp
 * wrote code
 * kzdd0030@tux062:~/Desktop/Project2$ g++ -o Project2 Project2.cpp
 * kzdd0030@tux062:~/Desktop/Project2$ ./Project2
 */

#include <limits>
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

 using namespace std;

/**
 * Checks the input to make it is an integer.
 * Returns the int if it is an integer
 *  0 otherwise.
 */
int validInt(int &change){
    cout<<"\n\tPlease choose an option: ";
    cin>>change;
    if(cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        change = 0;
    }
    else{
       cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return change;
}
int main(){
    int choice = 0;
    do{
        cout<<"==========================================================="<<endl;
        cout<<"| Welcome to the Auburn Branch of Tiger Bank! |"<<endl;
        cout<<"==========================================================="<<endl;
        cout<<"1) Login"<<endl;
        cout<<"2) Quit"<<endl;
        validInt(choice);
    }while(choice != 2);
    return 0;
}
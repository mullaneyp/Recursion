/********************************************************
 ** Author: Patrick Mullaney
 ** Description: Menu implementation file for recursion.
 ** Date: 10/23/16
 *******************************************************/

#include "menu.hpp"
#include <iostream>

using namespace std;

int menu()
{
    int choice;
    // Menu
    cout << "Please make a selection: " << endl;
    cout << "1. Reverse string.\n2. Sum an array.\n3. Calculate triangular number.\n4. Exit" << endl;
    cin >> choice;
    cin.clear();
    cin.ignore();
    
    while((choice < 1) || (choice > 4))
    {
        cout << "Please enter a choice from 1 to 4." << endl;
        cin >> choice;
        cin.clear();
        cin.ignore();
    }
    return choice;
}
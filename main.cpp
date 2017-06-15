/********************************************************
 ** Author: Patrick Mullaney
 ** Description: Main file for recursion, program that 
 ** demonstrates 3 recursive functions to user.
 ** Date: 10/23/16
 *******************************************************/


#include <iostream>
#include <string>
#include "recursion.hpp"
#include "menu.hpp"
#include <sstream>

const string SENTINEL = "x";

using namespace std;

int main(int argc, const char * argv[]) {

    cout << "Welcome to recursion. ";
    // Menu
    int choice = menu();
    
    while(choice !=4)
    {
        if(choice == 1)  // Reverse string
        {
            string word;
            cout << "You chose 1: Reverse string." << endl;
            cout << "Please enter a word." << endl;
            getline(cin,word);
            cout << "Word: " << word << endl;
            
            word = reverse(word);
            cout << "Reversed word: " << word << endl;
            // Return to menu
            choice = menu();
        }
        else if(choice == 2) //arraySum
        {
            int num, sum;
            sum = 0;
            string x;
            int count = 0;
            int array[100];
            
            cout << "You chose 2: Sum an array." << endl;
            cout << "Please enter numbers. Enter 'x' when done" << endl;
            
            // Allow users to enter input until "x" is entered.  Convert to integer and add to array.
            while(x != SENTINEL)
                {
                    getline(cin, x);
                      if(x != "x")
                      {
                          stringstream convert(x);
                          convert >> num;
                          array[count] = num;
                          count++;
                      }
                }
            if(count == 0)
            {
                cout << "Array is empty, nothing to sum." << endl;
            }
            else
            {
                // Sum array and display to user.
                sum = arraySum (array, sum, count);
                cout << "Sum: " << sum << endl;
            }
            // Return to menu
            choice = menu();
        }
        else if(choice == 3)  // Calculate triangular number.
        {
            cout << "You chose 3: Calculate triangular number." << endl;
            int sum, num, tri;
            sum = 0;
            cout << "Enter number " << endl;
            cin >> num;
            cin.clear();
            cin.ignore();
            while(num < 1)
            {
                cout << "Please enter a number greater than 0. " << endl;
                cin >> num;
                cin.clear();
                cin.ignore();
            }
            tri = triangular(sum, num);
            cout << "Triangular number: " << tri << endl;
            // Return to menu
            choice = menu();
        }
    }
    if(choice == 4) // Exit
    {
        cout << "Goodbye!" << endl;
    }
    return 0;
}


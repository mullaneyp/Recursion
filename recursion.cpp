/**************************************************************
 ** Author: Patrick Mullaney
 ** Description: Implementation file for 3 recursive functions.
 ** Date: 10/23/16
 **************************************************************/

#include "recursion.hpp"
#include <iostream>

using namespace std;

/*********************************************************************
** reverse takes as a parameter and returns it in reverse recursively.
**********************************************************************/
string reverse(string n)
{
    string word = n;
    
    if(word.length() <= 1) //base case
    {
        return word;
    }
    else
    {
        string wordCopy = word;
        return reverse(wordCopy.substr(1,wordCopy.length())) + wordCopy.at(0);
    }
    return word;
}
/******************************************************************
** arraySum recursively calculates the sum of an array of integers.
*******************************************************************/
int arraySum(int array[], int s, int e)
{
    int element = e-1;
    int sum = s;
   
    int num;
    
    if(element == 0) //base case
    {
        sum += array[element];
      //  cout << "base sum: " << sum << endl;      ***for testing

        return sum;
    }
    else
    {
       // cout << "element: " << element << " is " << array[element] << endl;  *** for testing
        num = array[element];
     //   cout << "num: " << num << endl;
        sum += num;
        return arraySum(array, sum, element);
    }
}
/************************************************************************************
** triangular recursively calculates and returns the triangular number of an integer.
*************************************************************************************/
int triangular(int s, int n)
{
    int num = n;
    int sum = s;
    
    if(num == 0)// base case
    {
        return sum;
    }
    else
    {
        sum += num;
        num--;
        return triangular(sum, num);
    }
}
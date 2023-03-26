// Problem_Solving_164.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    short Number;
    cout << "Enter Number for looping Numbrers" << endl;
    cin >> Number;


    for (int Start = 1; Start <= Number; Start += 2)
    {
        cout << "The Number is ------> " << Start << endl;
    }
}

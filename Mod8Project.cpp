/*Author: Francisco Bumanglag
Project: Sales Bar Chart
Assignment: Module 8 Project 6
Course: C++ Santa Ana College
Class: CMPR120 Dr. Tahir Aziz
Submitted: April 7, 2024*/


#include <iostream>

using namespace std;

int main() 

{
    int sales[5]; //declare variable as array -- sales for five stores

    //output to user & user inputs sales for each store
    for (int a = 0; a < 5; a++) {
        cout << "Enter today's sales for store " << (a + 1) << ": ";
        cin >> sales[a];
    }
    
    //display header for store sales
    cout << "\nSALES BAR CHART\n(Each * = $100)\n\n";

    //display output sales bar chart for each store
    for (int a = 0; a < 5; a++) {
        cout << "Store " << (a + 1) << ": ";

        //display '*' for each $100 in sales
        for (int b = 0; b < sales[a] / 100; b++) {
            cout << "*";
        }

        cout << endl;  //insert new line
    }

    return 0;
}



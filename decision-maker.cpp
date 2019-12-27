#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

//HW3 by Morgan Mundell
//point plotter

int main()
{
    char again;
    do {
    cin.clear();
    cin.sync();
    system("cls");

    int choices;
    string maindecision;
    //declaring variables

    cout << "what the decision you are making? ";
    getline(cin,maindecision);

    cout << "\nhow many choices do you have for " << maindecision << "? ";
    cin >> choices;

    string item[choices];
    int i=0;
    string numbered;
    string st;
    //variables
    cout << "\n\nin no particular order,\n";

    for (int j=0;j<choices;j++){
        cin.clear();
        cin.sync();

        i = i+1;

            if (i==1) {numbered = "st";}
            else if (i==2) {numbered = "nd";}
            else if (i==3) {numbered = "rd";}
            else {numbered = "th";}

        cout << "\n\nWhat is the " << i << numbered << " choice? ";
        getline(cin,st);
        item[j]= st;
}

    int value;
    srand(time(0));
    value = rand() % choices + 1;

cout << endl << "you should pick "<<item[value] << "\n\n";
//generates random number and determines choice

cout << "\nWould you like help with another choice?(y/n) ";
    cin >> again;
    }
    while(again=='y'||again=='Y');

    system("pause");
    //hold screen before termination
    return 0;
}

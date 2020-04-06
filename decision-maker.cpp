#include <iostream>
#include <windows.h>
#include <time.h>
#include <string>
using std::string;
#include <vector>
using std::vector;


//decision maker updated
//by Morgan Mundell

int main()
{
    char again;
    do {
    std::cin.clear();
    std::cin.sync();
    system("cls");

    string choices;
    string maindecision;
    vector<string> objects;
    //declaring variables

    std::cout << "What the decision you are making? ";
    getline(std::cin,maindecision);

    std::cout << "\nWhat are your choices? (separated by commas)\n";
    getline(std::cin,choices);


    for(int i = 0, j = 0; i < choices.size(); i++)
    {
        if(choices.at(i) == ',' || choices.at(i) == '\0'){
            objects.push_back(choices.substr(j,i-j));
            j=i+1;
        }
    }       //push back into a vector, separating by commas


    int value;
    srand(time(0));
    value = rand() % objects.size() + 1;

    std::cout << std::endl << "You should pick "<< objects.at(value) << "\n\n";
        //generates random number and determines choice

    std::cout << "\nWould you like help with another choice?(y/n) ";
    std::cin >> again;
    }
    while(again=='y'||again=='Y');

    system("pause");
        //hold screen before termination
    return 0;
}

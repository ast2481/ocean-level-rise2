// ocean level rise2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    double risePerYear = 1.5;

    int Levelyear5 = 5;
    int levelyear7 = 7;
    int levelyear10 = 10;
        
    double rise5 = risePerYear * Levelyear5;
    double rise7 = risePerYear * levelyear7;
    double rise10 = risePerYear * levelyear10;

    cout << "Rise in 5 years:"  << rise5 << endl;
    cout << "Rise in 7 years:"  << rise7 << endl;
    cout << "Rise in 10 years:" << rise10 << endl;

    return 0;
}


/*
file name: chapter5ex23.cpp
programmer: Perrin
write a program that uses a loop to display two patterns.
Make it repeatable 

File does run. Can't include screnshots.
*/
#include <iostream>
using namespace std;

void patterna()
{
    for (int i = 1; i < 11; i++)
    {
        int b = 0;
        do
        {
            cout << "+";
            b++;
        } while (b < i);
        cout << endl;
    }
}

void patternb()
{
    for (int i = 10; i > 0; i--)
    {
        int b = 0;
        do
        {
            cout << "+";
            b++;
        } while (b < i);
        cout << endl;
    }
}



int main()
{
    bool cont = 1;
    do
    {
        cout << "Pattern A" << endl;
        patterna();
        cout << "Pattern B" << endl;
        patternb();
        cout << "Type 0 to quit. 1 to cont. " << endl;
        cin >> cont;
    } while (cont == 1);
}


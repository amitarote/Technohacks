#include <iostream>
#include <cstdlib>
using namespace std;

const char input[] = "abcdefghijklmnopqrstuvwxyz"
                     "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                     "0123456789"
                     "!@#%^&*/*-+_?|\"";

int main()
{
    int n;
    cout << "Enter the length of the password: ";
    cin >> n;
    cout << "The password generated is: ";
    
    for(int i = 0; i < n; i++)
    {
        cout << input[rand() % 100];
    }
    
    return 0;
}


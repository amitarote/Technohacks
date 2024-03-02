#include<iostream>
using namespace std;

//convert Fahrenheit to Celsius
double FTC(double fahra)
{
	return(fahra-32)*0.556;
}
//
double CTF(double cels)
{
	return(cels*0.556)+32;
}
int main()
{
	char ch;
	double temp;
	
	cout << "Enter 'F' to convert Fahrenheit to Celsius, or 'C' to convert Celsius to Fahrenheit: ";
    cin >> ch;
    if (ch == '0') {
        cout << "Enter the temperature in Fahrenheit: ";
        cin >> temp;
        cout << "Temperature in Celsius: " <<FTC(temp) << endl;
    } else if (ch== '1') {
        cout << "Enter the temperature in Celsius: ";
        cin >> temp;
        cout << "Temperature in Fahrenheit: " << CTF(temp) << endl;
    } else {
        cout << "Invalid choice. Please enter '0' or '1'." << endl;
    }

    return 0;
}

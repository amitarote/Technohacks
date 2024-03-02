#include <iostream>
#include <cmath>

using namespace std;
int BTD(int bNum) {
    int dNum = 0;
    int base = 1;
    int temp = bNum;
    
    while (temp) {
        int lastDigit = temp % 10;
        temp = temp / 10;
        
        dNum += lastDigit * base;
        
        base = base * 2;
    }
    
    return dNum;
}

int main() {
    int bNum;
    
    cout << "Enter a binary number: ";
    cin >> bNum;
    
    int dNum = BTD(bNum);
    
    cout << "Decimal equivalent: " << dNum << endl;
    
    return 0;
}

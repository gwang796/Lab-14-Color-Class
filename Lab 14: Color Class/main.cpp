//
//  main.cpp
//  COMSC-210 | Lab 14: Color Class | Guo An Wang
//  IDE used: Xcode
//  Created by Guo An Wang on 9/27/25.
//

#include <iostream>
using namespace std;
class Color
{
private:
    int red;
    int blue;
    int green;
public:
    int setRed(int r) {red = r; return r;}
    int setBlue(int b) {blue = b; return b;}
    int setGreen(int g) {green = g; return g;}
    int getRed() {return red;}
    int getBlue() {return blue;}
    int getGreen() {return green;}
    void print();
};

int main(int argc, const char * argv[]) {
    
}

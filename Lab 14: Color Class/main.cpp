//
//  main.cpp
//  COMSC-210 | Lab 14: Color Class | Guo An Wang
//  IDE used: Xcode
//  Created by Guo An Wang on 9/27/25.
//

#include <iostream>
#include <iomanip>
using namespace std;

int WIDTH = 15; //declare before class

class Color
{
private:
    int red;
    int blue;
    int green;
public:
    int setRed(int r) {red = r; return r;}
    int setGreen(int g) {green = g; return g;}
    int setBlue(int b) {blue = b; return b;}
    int getRed() {return red;}
    int getGreen() {return green;}
    int getBlue() {return blue;}
    void print(){
        cout << setw(WIDTH) << "Red: " << red << endl;
        cout << setw(WIDTH) << "Green: " << green << endl;
        cout << setw(WIDTH) << "Blue: " << blue << endl;
    }
};

void print(Color);

int main(int argc, const char * argv[]) {
    Color one;
    one.setRed(155);
    one.setBlue(200);
    one.setGreen(100);
    one.print();
    //print(one);
    
    Color two;
    two.setRed(25);
    two.setBlue(230);
    two.setGreen(180);
    two.print();
    //print(two);

    Color three;
    three.setRed(255);
    three.setBlue(10);
    three.setGreen(80);
    three.print();
    //print(three);

    Color four;
    four.setRed(60);
    four.setBlue(70);
    four.setGreen(195);
    four.print();
    //print(four);
    
    Color five;
    five.setRed(145);
    five.setBlue(225);
    five.setGreen(250);
    five.print();
    //print(five);


}

void print(Color c){
    cout << c.getRed() << c.getGreen() << c.getBlue() << endl;
}

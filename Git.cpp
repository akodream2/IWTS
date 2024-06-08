// Git.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
class point {
    int x, y;
public:
    point(){}
    point(int x, int y) {
        this->x = x;
        this->y = y;
    }
    int GetX() {
        return x;
    }
    int GetY() {
        return y;
    }
    void PrintXandY() {
        cout << "X:" << x << "|| Y:" << y;
    }

};








int main()
{
    std::cout << "Hello World!\n";
}


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
    void SetPoint() {
        cout << "X:";
        cin >> x;
        cout << "Y:";
        cin >> y;
    }
};

class Triangle {
    vector<point> Tria;
public:
    Triangle(){}
    Triangle(point a, point b, point c) {
        Tria.push_back(a);
        Tria.push_back(b);
        Tria.push_back(c);
    }
    void SetTriangle() {
        Tria.clear();
        point tmp;
        for (int i = 0; i < 4; i++)
        {
            tmp.SetPoint();
            Tria.push_back(tmp);
        }
    }
    void PrintTriangle() {
        for (int i = 0; i < 3; i++)
        {
            cout << i + 1 << " point:\n";
            Tria[i].PrintXandY();
            cout << "\n";
        }
    }
};





class Fourangle {
    vector<point> Tria;
public:
    Fourangle() {}
    Fourangle(point a, point b, point c, point d) {
        Tria.push_back(a);
        Tria.push_back(b);
        Tria.push_back(c);
        Tria.push_back(d);
    }
    void SetTriangle() {
        Tria.clear();
        point tmp;
        for (int i = 0; i < 4; i++)
        {
            tmp.SetPoint();
            Tria.push_back(tmp);
        }
    }
    void PrintTriangle() {
        for (int i = 0; i < 4; i++)
        {
            cout << i + 1 << " point:\n";
            Tria[i].PrintXandY();
            cout << "\n";
        }
    }
};


class Fiveangle {
    vector<point> Tria;
public:
    Fiveangle() {}
    Fiveangle(point a, point b, point c, point d, point s) {
        Tria.push_back(a);
        Tria.push_back(b);
        Tria.push_back(c);
        Tria.push_back(d);
        Tria.push_back(s);
    }
    void SetTriangle() {
        Tria.clear();
        point tmp;
        for (int i = 0; i < 5; i++)
        {
            tmp.SetPoint();
            Tria.push_back(tmp);
        }
    }
    void PrintTriangle() {
        for (int i = 0; i < 5; i++)
        {
            cout << i + 1 << " point:\n";
            Tria[i].PrintXandY();
            cout << "\n";
        }
    }
};



















int main()
{
    


    //XD
    //XD
    //XD
    //XD
    //XD
    //XD
}


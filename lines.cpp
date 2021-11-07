#include <iostream>
#include "geom.hpp"
using namespace std;

int main () {
    char input;
    double x, y, A, B ,C;
    Point p1,p2;
    Line l1,l2;
    cin>> input;
    switch(input) {
    case 'c': // construct
        cin>> input;
        switch(input) {
        case 'l': // line from two points
            cin>> x>> y;
            p1 = Point(x,y);
            cin>> x>> y;
            p2 = Point(x,y);
            cout<< Line(p1, p2);
            break;
        case 'c': // collinear line from line and a point
            cin>> A>> B>> C;
            l1 = Line(A,B,C);
            cin>> x>> y;
            p1 = Point(x,y);
            cout<< l1.parallel(p1);
            break;
        case 'o': // orthogonal/perpendicular line from a line and a point
            cin>> A>> B>> C;
            l1 = Line(A,B,C);
            cin>> x>> y;
            p1 = Point(x,y);
            cout<< l1.perpendicular(p1);
            break;
        }
        break;
    case 'v': // verify
        cin>> input;
        switch(input) {
        case 'c': // if two lines are parallel
            cin>> A>> B>> C;
            l1 = Line(A,B,C);
            cin>> A>> B>> C;
            l2 = Line(A,B,C);
            cout<< l1.parallel(l2);
            break;
        case 'p': // if two lines are perpendicular
            cin>> A>> B>> C;
            l1 = Line(A,B,C);
            cin>> A>> B>> C;
            l2 = Line(A,B,C);
            cout<< l1.perpendicular(l2);
            break;
        }
        break;
    }

    return 0;
}

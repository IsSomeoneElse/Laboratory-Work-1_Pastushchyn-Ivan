#include "geometrical_progression.h"

#include <cmath>
#include <iostream>
#include <stdexcept>
using namespace std;

void GeometricalProgression::init(int f, int s, int n) {
    a0 = f;
    r = s;
    j = n;
}

double GeometricalProgression::elementj() {
    return a0 * pow(r, j);
}

void GeometricalProgression::read() {
    cout << "Input First:" << endl;
    cin >> a0;
    cout << "Input Second:" << endl;
    cin >> r;
    cout << "Input number of the element:" << endl;
    cin >> j;
}

void GeometricalProgression::display() {
    cout << elementj() << endl;
}
#include "geometrical_progression.h"

#include <iostream>
using namespace std;

int main() {
    GeometricalProgression prog1, prog2;
    prog1.init(10, 4, 2);
    cout << "Result with Init method:" << endl;
    prog1.display();
    cout << endl;

    prog2.read();
    cout << "Result with Read method:" << endl;
    prog2.display();

    system("PAUSE");
}
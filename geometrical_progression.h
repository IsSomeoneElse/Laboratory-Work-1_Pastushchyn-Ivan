#pragma once
#ifndef GP_H
#define GP_H

struct GeometricalProgression {
    double elementj();
    void read();
    void init(int f, int s, int n);
    void display();

    double a0;
    double r;
    int j;
};

#endif
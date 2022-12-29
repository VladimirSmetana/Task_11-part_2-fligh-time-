#include "pch.h"
#include <iostream>
#include <math.h>
using namespace System;
using namespace std;

int main()
{
    // Ускорение свободного падения и число pi
    const double PI = 3.141592653589793, g = 9.81;
    // Рабочие параметры
    double V, a, v, u, t=0, x = 0, y = 0, H;
    int n = 0;
    // Шаг дискретности по времени
    double dt = 0.0001;
    // Ввод параметров задачи
    cout << "Input V, m/s" << endl << "V = ";  cin >> V;
    cout << "Input Angle, grad" << endl << "a = ";  cin >> a;
    // Перевод градусов в радианы
    a = a * PI / 180;
    // Начальная скорость (проекции) :
    v = V * cos(a);
    u = V * sin(a);
    // Максимальная высота
    H = pow(u, 2) / (2 * g);
    // Вычисление координат тела
    do {
        n++;
        t += dt;
        y += u * dt;
        x += v * dt;
        u -= g * dt;
    } while (y > 0);
    // Вывод результатов
    cout << "flight time " << "t= " << t << endl;
    cout << "flight range " << "x= " << x << endl;
    cout << "flight hight " << "H= " << H << endl;

    return 0;
}

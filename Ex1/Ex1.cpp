#include <iostream>
#include <cmath>
using namespace std;

void vich() {
    double a;
    double b;
    cout << "Введите два числа:\n";
    cin >> a;
    cin >> b;

    cout << a << "+" << b << "=" << a + b << '\n';
    cout << a << "-" << b << "=" << a - b << '\n';
    cout << a << "*" << b << "=" << a * b << '\n';
    if (b != 0) {
        cout << a << "/" << b << "=" << a / b << '\n';
    }
}

void lur() {
    double b;
    double c;
    cout << "Введите два числа b и c:\n";
    cin >> b;
    cin >> c;
    if (b == 0) {
        if (c == 0) {
            cout << "Все возможные решения";
        }
        else {
            cout << "Нет решений";
        }
    }
    else {
        cout << b << "x+" << c << "=0\n";
        cout << "x=" << -c / b << '\n'; \
    }
}

void kur() {
    double a;
    double b;
    double c;
    cout << "Введите три числа a, b и c:\n";
    cin >> a;
    cin >> b;
    cin >> c;
    if (a == 1) {
        cout << "x^2";
    }
    else {
        cout << a << "x^2";
    }
    if (b > 0) {
        if (b == 1) {
            cout << "x";
        }
        else {
            cout << "+" << b << "x";
        }
    }
    else if (b < 0) {
        cout << b << "x";
    }
    if (c > 0) {
        cout << "+" << c << "=0\n";
    }
    else if (c < 0) {
        cout << c << "=0\n";
    }
    else {
        cout << "=0\n";
    }
    int D = b * b - 4 * a * c;
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "Все решения";
            }
            else {
                cout << "Нет решений";
            }
        }
        else {
            cout << "x=" << -c / b;
        }
    }
    else {
        if (D > 0) {
            double x1 = (-b + sqrt(D)) / (2 * a);
            double x2 = (-b - sqrt(D)) / (2 * a);
            cout << "x1=" << x1;
            cout << "x2=" << x2;
        }
        else if (D == 0) {
            double x = -b / (2 * a);
            cout << "x=" << x;
        }
        else {
            cout << "Нет решений";
        }
    }
}

void lampa() {
    int lamp;
    int shtora;
    int den;
    cout << "Включена ли лампа?\n";
    cin >> lamp;
    cout << "Шторы раскрыты?\n";
    cin >> shtora;
    cout << "На улице светло?\n";
    cin >> den;
    if (lamp == 1 || (shtora == 1 && den == 1)) {
        cout << "Светло\n";
    }
    else {
        cout << "Темно\n";
    }

}

int main()
{
    system("chcp 1251");
    lur();
    return 0;
}
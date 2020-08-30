// Calculadora.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

#include <iostream>
#include "Calculadora.h"

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "CALCULADORA EN APLICACION DE CONSOLA" << endl << endl;
    cout << "Introduce la operacion a realizar. Formato: a+b | a-b | a*b | a/b"
        << endl;

    Calculadora c;
    while (true)
    {
        //cin >> x >> oper >> y;
        //result = c.Calculate(x, oper, y);
        //cout << "El resultado es: " << result << endl;

        cin >> x >> oper >> y;
        if (oper == '/' && y == 0)
        {
            cout << "Division por 0 excepcion" << endl;
            continue;
        }
        else
        {
            result = c.Calculate(x, oper, y);
        }
        cout << "El resultado es: " << result << endl;
    }

    return 0;
}

double Calculadora::Calculate(double x, char oper, double y)
{
    switch (oper)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    default:
        return 0.0;
    }
}
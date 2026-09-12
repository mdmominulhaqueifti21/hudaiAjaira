#ifndef CALCULATE_H
#define CALCULATE_H

double calculate(double a, double b, char op)
{
    if (op == '+') {
        return a + b;
    }
    else if (op == '-') {
        return a - b;
    }
    else if (op == '*') {
        return a * b;
    }
    else if (op == '/') {
        return a / b;
    }

    return 0;
}

#endif
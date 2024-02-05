#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.1415926535897
#define E 2.718281828459
class arithmetic
{
    float a, b;

public:
    void getval()
    {
        cin >> a >> b;
    }
    void result()
    {
        cout << "Enter First Number: ";
        cin >> a;
        cout << "Enter Second Number: ";
        cin >> b;
    }
    float add()
    {
        return a + b;
    }
    float sub()
    {
        return a - b;
    }
    float mult()
    {
        return a * b;
    }
    float div()
    {
        return a / b;
    }
    double power()
    {
        return pow(a, b);
    }
};
class adv : public arithmetic
{
    double a;

public:
    void solution()
    {
        cout << "Enter the no.";
        cin >> a;
    }

    double exponent()
    {
        return exp(a);
    }
    float squareroot()
    {
        return sqrt(a);
    }
    float sine()
    {
        float r = a * PI / 180;
        return sin(r);
    }
    float cosine()
    {
        float r = a * PI / 180;
        return cos(r);
    }
    float tangent()
    {
        float r = a * PI / 180;
        return tan(r);
    }
    float invsine()
    {
        return asin(a) * 180.0 / PI;
    }
    float invcosine()
    {
        return acos(a) * 180.0 / PI;
    }
    float invtangent()
    {
        return atan(a) * 180.0 / PI;
    }
    double logarithm()
    {
        return log10(a);
    }
    float cuberoot()
    {
        return cbrt(a);
    }
    float factorial()
    {
        int i;
        long fact = 1;
        for (i = 1; i <= a; i++)
        {
            fact *= i;
        }
        return fact;
    }
};
int main()
{
    int ch;
    adv c;
    cout << endl;
    cout << "----------------------------------" << endl;
    cout << "|  scientific calculator          |" << endl;
    cout << "----------------------------------" << endl;
    cout << "|1.add     | 2.sub   | 3. X       |" << endl;
    cout << "|4.div.    | 5.x^n   | 6.sqrt     |" << endl;
    cout << "|7.e^x     | 8.sin   | 9.cos      |" << endl;
    cout << "|10.tan    |11.sin^-1|12.cos^-1   | " << endl;
    cout << "|13.tan^-1 |14.log   |15.cube root|" << endl;
    cout << "|16.facto.!|         |            |   " << endl;
    cout << "----------------------------------" << endl;
    cout << endl;

    do
    {
        cout << "\nEnter Choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            c.result();
            cout << "Result: " << c.add() << endl;
            break;
        case 2:
            c.result();
            cout << "Result: " << c.sub() << endl;
            break;
        case 3:
            c.result();
            cout << "Result: " << c.mult() << endl;
            break;
        case 4:
            c.result();
            cout << "Result: " << c.div() << endl;
            break;
        case 5:
            c.result();
            cout << "Result: " << c.power() << endl;
            break;
        case 6:
            c.solution();
            cout << "Result: " << c.squareroot() << endl;
            break;
        case 7:
            c.solution();
            cout << "Exponent = " << c.exponent() << endl;
            break;
        case 8:
            c.solution();
            cout << "Sin = " << c.sine() << endl;
            break;
        case 9:
            c.solution();
            cout << "Cos = " << c.cosine() << endl;
            break;
        case 10:
            c.solution();
            cout << "Tan(a)= " << c.tangent() << endl;
            break;
        case 11:
            c.solution();
            cout << "Inverse of Sin = " << c.invsine() << endl;
            break;
        case 12:
            c.solution();
            cout << "Inverse of Cos = " << c.cosine() << endl;
            break;
        case 13:
            c.solution();
            cout << "Inverse of tan = " << c.invtangent() << endl;
            break;
        case 14:
            c.solution();
            cout << "Log = " << c.logarithm() << endl;
            break;
        case 15:
            c.solution();
            cout << "Cube root=" << c.cuberoot() << endl;
            break;
        case 16:
            c.solution();
            cout << "Factorial=" << c.factorial();
            break;
        default:
            cout << "Please Enter valid option";
        }
    } while (ch >= 1 && ch <= 17);
    return 0;
}z
#include <iostream>
#include <math.h>
using namespace std;

//1
//template <typename T>
//double H(T * x, T y)
//{
//    double sum = 0;
//    for (int i = 0; i < y; i++)
//    {
//        sum += x[i];
//    }
//    return sum / y;
//}
//
//int main()
//{
//    const int k = 5;
//    int l[k] = {10, 12, 53, 24, 59};
//    cout << H(l, k);
//}


//2
//void Solve(double a, double b)
//{
//    double x = -b / a;
//    cout << "решение уравнения: " << a << " * x + " << b << " = 0\n";
//    cout << "x = " << x << "\n";
//}
//
//void Solve(double a, double b, double c)
//{
//    cout << "решение уравнения: " << a << " * x * x + " << b << " * x + " << c << " = 0" << "\n";
//    double d = b * b - 4 * a * c;
//    if (d < 0)
//    {
//        cout << "Нет решения";
//    }
//    else if(d == 0)
//    {
//        cout << "x = " << -b / (2 * a) << "\n";
//    }
//    else
//    {
//        double x1 = (-b + sqrt(d)) / (2 * a);
//        double x2 = (-b - sqrt(d)) / (2 * a);
//        cout << "x1 = " << x1 << "\n";
//        cout << "x2 = " << x2 << "\n";
//    }
//}
//
//int main()
//{
//    setlocale(LC_ALL, "");
//    Solve(5, 8);
//    Solve(3, -14, -5);
//}

//3
double round(double x, int n)
{
	int y = pow(10, n);
	x = x * y;
	int r = x;
	return r * 1.0 / y;
	
}
int main() 
{
	cout << round(5.6457347, 4);
}


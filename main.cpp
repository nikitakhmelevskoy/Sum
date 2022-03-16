#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int n = 0;
    double sum = 0;
    double sumE = 0;
    double absSum = pow(M_PI,2)/12;

    do {
        sum += sumE;
        sumE = pow(-1, n) / pow(n + 1,2);
        n++;

    } while (abs(sumE) > pow(10, -6));

    cout << "Sum:= " << sum << endl;
    cout << "Necessary sum: " << absSum<< endl;
}
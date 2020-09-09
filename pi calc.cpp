#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int y;
    int x=1000000;
    cin >> y;
    double sum = 0;
    while (y < 1 || y>x) {
        cin >> y;
    }

    for (double x = 1; x < y; x += 1) {
        double a = 0;
        a = pow(x, 2);
        a = 1 / a;
        //cout << " " << a << " ";
        //cout << "x=" << x << endl;
        sum += a;
    }
    cout << "\n";
    sum *= 6;
    sum = sqrt(sum);
    cout << setprecision(20) << sum;
}
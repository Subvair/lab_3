#include <iostream>
#include <iomanip> 
#include <cmath>

using namespace std;

int main() {
    const double g = 9.81;
    double d = 0.191;
    double v[] = {1, 2, 5, 10, 20, 50};

    cout << fixed << setprecision(3);

    for (int i = 0; i < 6; ++i) {
        double fr = (pow(v[i], 2)/(g*d));
        double f;

        if (fr < 50) {
            f = 0.05 * pow(fr, 0.2);
        } 
        else {
            f = 0.35 * pow(fr, 0.1);
        }

        cout << "f = " << f << "\tfr = " << fr << endl;
    }
}
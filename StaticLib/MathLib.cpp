#include "MathLib.h"
#include <cmath>

using namespace std;

namespace MathLib {
    void complex_add(double r1, double i1, double r2, double i2, double& resR, double& resI) {
        resR = r1 + r2;
        resI = i1 + i2;
    }

    void complex_sub(double r1, double i1, double r2, double i2, double& resR, double& resI) {
        resR = r1 - r2;
        resI = i1 - i2;
    }

    void complex_mul(double r1, double i1, double r2, double i2, double& resR, double& resI) {
        resR = r1 * r2 - i1 * i2;
        resI = r1 * i2 + r2 * i1;
    }

    double complex_mod(double r, double i) {
        return sqrt(r * r + i * i);
    }
}


#include <iostream>
#include <complex>
#include <cmath>

int main() {
    std::complex<double> z(2.0, 3.0); // 2 + 3i
    int n = 4; // степень

    std::complex<double> result = std::pow(z, n);

    std::cout << "z^" << n << " = " << result << "\n";
    return 0;
}

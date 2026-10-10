#include <iostream>

double fahrenheitACelsius(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}

int main() {
    std::cout << "100 F a C: " << fahrenheitACelsius(100) << std::endl;
    std::cout << "Modulo de signos vitales" << std::endl;
    return 0;
}
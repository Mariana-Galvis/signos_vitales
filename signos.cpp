#include <iostream>
#include <string>

double fahrenheitACelsius(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}

std::string clasificarFrecuencia(int lpm) {
    if (lpm < 60) {
        return "bradicardia";
    } else if (lpm <= 100) {
        return "normal";
    }
    return "taquicardia";
}

int main() {
    std::cout << "100 F a C: " << fahrenheitACelsius(100) << std::endl;
    std::cout << "Modulo de signos vitales" << std::endl;
    return 0;
}
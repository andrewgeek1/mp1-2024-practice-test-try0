#include <stdio.h>

double max_of_two_numbers(double a, double b) {
    return (a > b) ? a : b;
}

int main() {
    double num1 = 5.3, num2 = 4.7;
    printf("Максимум из %.2f и %.2f равен %.2f\n", num1, num2, max_of_two_numbers(num1, num2));
    return 0;
}

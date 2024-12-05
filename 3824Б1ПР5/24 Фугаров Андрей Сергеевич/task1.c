#include <limits.h>

int sum_of_two_numbers(int a, int b) {
    // Проверяем на переполнение при сложении
    if ((b > 0 && a > INT_MAX - b) || (b < 0 && a < INT_MIN - b)) {
        // Если переполнение, возвращаем соответствующее значение
        if (b > 0) {
            return INT_MAX; // Сумма превысила INT_MAX
        } else {
            return INT_MIN; // Сумма ниже INT_MIN
        }
    }
    // Если нет переполнения, возвращаем сумму
    return a + b;
}

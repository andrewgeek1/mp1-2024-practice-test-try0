#include <limits.h>  // Для UINT_MAX
#include <limits.h>
#include <iostream>
using namespace std;
unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
    // Проверяем случай, когда a равно 0 или b равно 0
    // Возможно, согласно вашему условию, a и b должны быть натуральными числами,
    // но если мы это игнорируем, и все же хотим обработать 0.
    if (a == 0 || b == 0) {
        return 0; // Или вызовите ошибку, если нужно
    }

    // Если a или b больше 0, нужно убедиться, что a * b не превысит UINT_MAX
    if (a > UINT_MAX / b) {
        return UINT_MAX; // Возвращаем UINT_MAX, если будет переполнение
    }

    return a * b; // Если безопасно, возвращаем произведение
}

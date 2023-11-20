// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}
//include <iostream>
//include <cmath>

int main() {
    double alpha_degrees;
    std::cout << "Введіть значення кута alpha в градусах: ";
    std::cin >> alpha_degrees;

    double alpha_radians = alpha_degrees / 180.0;

    // Обчислення за першою формулою
    double z1 = (sin(alpha_radians) * sin(alpha_radians) + sin(5 * alpha_radians) - sin(3 * alpha_radians)) / (cos(alpha_radians) - cos(3 * alpha_radians) + cos(5 * alpha_radians));

    // Обчислення за другою формулою
    double z2 = tan(3 * alpha_radians);

    std::cout << "Результат за першою формулою: " << z1 << std::endl;
    std::cout << "Результат за другою формулою: " << z2 << std::endl;

    return 0;
}
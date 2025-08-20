#include <stdio.h>
#include <math.h>

const float EPS = 1e-9f;

int main(void) {
    float a, b, c, d;

    printf("Введите коэффициенты квадратного уравнения: ");
    scanf("%f %f %f", &a, &b, &c);
    d = b*b - 4*a*c;

    if (d < 0) {
        printf("Решений нет\n");
        return 0;
    }

    if (abs(d) <= EPS) {
        float x = -(b / 2 / a);
        printf("Уравнение имеет 1 корень: %f\n", x);
        return 0;
    }

    float x1, x2;
    x1 = (-b + sqrt(d)) / 2 / a;
    x2 = (-b - sqrt(d)) / 2 / a;

    printf("Корни уравнения %f и %f\n", x1, x2);
    return 0;


}

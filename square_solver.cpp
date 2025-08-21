#include <stdio.h>
#include <math.h>

const float EPS = 1e-9f;

int main(void) {
    float a = 0;
    float b = 0;
    float c = 0;
    float d = 0;

    printf("Enter the coefficients of the quadratic equation: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a != 0) 
    {
        d = b*b - 4*a*c;

        if (d < 0) {
            printf("There are no solutions.\n");
            return 0;
        }

        if (abs(d) <= EPS) {
            float x = -(b / 2 / a);
            printf("there are one solutin: %f\n", x);
            return 0;
        }

        float x1 = (-b + sqrt(d)) / 2 / a;
        float x2 = (-b - sqrt(d)) / 2 / a;

        printf("There are two solutions: %f and %f\n", x1, x2);
        return 0;
    } 
    else if (b != 0)
    {
        printf("This is not a quadratic equation, but a linear one.\n");
        printf("There are one solution: %f", (-c)/b);
        return 0;
    }
    else
    {
        printf("There is It's not an equation.\nThere are no solutions");
        return 0;
    }
}


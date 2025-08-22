#include <stdio.h>
#include <math.h>

const float EPS = 1e-17f;

int main(void) {
    float a = 0;
    float b = 0;
    float c = 0;
    float d = 0;

    printf("Enter the coefficients of the quadratic equation: ");
    scanf("%f %f %f", &a, &b, &c);

    if (abs(a) < EPS) 
    {
        if (abs(b) > EPS)
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
    else
    {
        if (abs(b) > EPS)
        {
            if (abs(c) < EPS)
            {
                printf("There are two solutions: 0 and %f", -b/a);
                return 0;
            }
            else
            {
                d = b*b - 4*a*c;
                if (d < 0)
                {
                    printf("There are no solutions.\n");
                    return 0;
                }
                else if (abs(d) < 0)
                {
                    printf("There are one solution: %f", -(b/2/a));
                    return 0;
                }
                else
                {
                    float x1 = (-b + sqrt(d)) / 2 / a;
                    float x2 = (-b - sqrt(d)) / 2 / a;
                    printf("There are two solutions: %f and %f", x1, x2);
                    return 0;
                }
            }
        }
        else
        {
            if (c < 0)
            {
                float lxl = sqrt(-c);
                printf("There are two solutions: %f and %f", lxl, -lxl);
                return 0;   
            }
            else if (c > 0)
            {
                printf("There are no solutions.\n");
                return 0;
            }
            else
            {
                printf("The equation has an infinite number of roots");
                return 0;
            }
        }
    }
}

#include <stdio.h>

int main(void)
{
    double x = 0.0;
    double y = 0.0;

    printf("Enter x: ");
    scanf("%lf", &x);

    if ((x > -10 && x <= -5) || (x > 5 && x <= 15)) {
        y = x * x * x - 6;
        printf("y = %.4f\n", y);
    } else {
        if (x >= 25) {
            y = 2 * x * x * x - 3 * x + 2;
            printf("y = %.4f\n", y);
        } else {
            printf("x does not exist\n");
        }
    }

    return 0;
}
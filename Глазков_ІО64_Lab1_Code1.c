#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");
    return 0;
}
intf("Enter x: ");
    scanf("%lf", &x);

    if (x <= 15) {
        if (x > 5) {
            y = x * x * x - 6;
            printf("y = %.4f\n", y);
        } else {
            if (x > -10) {
                if (x <= -5) {
                    y = x * x * x - 6;
                    printf("y = %.4f\n", y);
                } else {
                    printf("x does not exist\n");
                }
            } else {
                printf("x does not exist\n");
            }
        }
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
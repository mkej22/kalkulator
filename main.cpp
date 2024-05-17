#include <iostream>
#include <stdio.h>
#include <cmath> // dodana biblioteka dla funkcji sqrt i pow

int main(int argc, char const *argv[]) {
    float a = 0, b = 1;
    char option = 0;

    printf("Calculator v0.004\n");
    printf(" 1 - addition a + b\n");
    printf(" 2 - division a / b\n");
    printf(" 3 - subtraction a - b\n");
    printf(" 4 - multiplication a * b\n");
    printf(" 5 - square root of a\n");
    printf(" 6 - a raised to the power of b\n");
    printf(" Your choice? ");
    scanf(" %c", &option);

    if (option == '5') {
        printf(" Enter a: ");
        while (scanf("%f", &a) != 1) {
            printf("Error: please enter a number.\n");
            while (getchar() != '\n');
            printf(" Enter a: ");
        }
    } else {
        printf(" Enter a: ");
        while (scanf("%f", &a) != 1) {
            printf("Error: please enter a number.\n");
            while (getchar() != '\n');
            printf(" Enter a: ");
        }

        printf(" Enter b: ");
        while (scanf("%f", &b) != 1) {
            printf("Error: please enter a number.\n");
            while (getchar() != '\n');
            printf(" Enter b: ");
        }
    }

    switch (option) {
        case '1':
            printf(" Result of a + b = %f\n", a + b);
            break;

        case '2':
            if (b == 0) {
                printf(" Result of a / b is undefined\n");
            } else {
                printf(" Result of a / b = %f\n", a / b);
            }
            break;

        case '3':
            printf(" Result of a - b = %f\n", a - b);
            break;

        case '4':
            printf(" Result of a * b = %f\n", a * b);
            break;

        case '5':
            if (a < 0) {
                printf(" Result of sqrt(a) is undefined for negative a\n");
            } else {
                printf(" Result of sqrt(a) = %f\n", sqrt(a));
            }
            break;

        case '6':
            printf(" Result of a ^ b = %f\n", pow(a, b));
            break;

        default:
            printf(" You chose an invalid option\n");
            break;
    }

    return 0;
}

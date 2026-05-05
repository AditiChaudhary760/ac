#include <stdio.h>
int GCD(int num1, int num2) {
    if (num2 == 0)
        return num1;
    return GCD(num2, num1 % num2);
}

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a == 0 && b == 0) {
        printf("GCD is not defined for (0, 0).\n");
        return 0;
    }
}
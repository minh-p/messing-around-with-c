/* Doing some math in C */

#include <stdio.h>

int addTwoNumbers(int num1, int num2) {
    int result = num1 + num2;
    return result;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    int result = addTwoNumbers(num1, num2);

    printf("%d", result);
}

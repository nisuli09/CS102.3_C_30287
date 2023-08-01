#include <stdio.h>
int main ()
{
 int num1 = 0, num2 = 1, nextNum;

    printf("Fibonacci Sequence: ");
    for (int i = 1; i <= 10; ++i) {
        printf("%d ", num1);
        nextNum = num1 + num2;
        num1 = num2;
        num2 = nextNum;
    }
    return 0;
}


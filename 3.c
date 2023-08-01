#include <stdio.h>
int main()
{
    int intvalue;
    float floatvalue;
    double doublevalue;
    char charvalue;

    printf("Enter an integer value: ");
    scanf("%d",&intvalue);

    printf("Enter a float value: ");
    scanf("%f",&floatvalue);

    printf("Enter a character: ");
    scanf("%c",&charvalue);

    printf("Enter a double value: ");
    scanf("%lf",&doublevalue);

    printf("\n");
    printf("integer value: %d\n", intvalue);
    printf("float value: %.2f\n", floatvalue);
    printf("double value: %lf\n", doublevalue);
    printf("character: %c\n", charvalue);


}

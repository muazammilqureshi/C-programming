#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter a :");
    scanf("%d", &a);

    printf("Enter b :");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter Swapping a = %d", a);
    printf("\nAfter Swapping b = %d", b);

    return 0;
}
#include <stdio.h>

void calculator(int *a, int *b);

int main()
{

    int a, b;
    printf("Enter the value of a \n");
    scanf("%d", &a);

    printf("Enter the value of b \n");
    scanf("%d", &b);

    calculator(&a, &b);
    return 0;
}
void calculator(int *a, int *b)
{

    int c = *a + *b;
    int d = (*a) / (*b);
    int e = (*a) * (*b);
    int f = *a - *b;

    printf("Add = %d Divison = %d  Multiply =%d Subtract =%d",c,d,e,f);
}

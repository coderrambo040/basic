#include <stdio.h>
int main()
{
    float x, y;
    scanf("%f", &x);
    y = (x - 32) * 5 / 9;
    printf("%.2f fahrenheit = %.2f celsius", x, y);
    return 0;
}

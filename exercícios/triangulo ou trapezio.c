/* triangulo ou trapezio
a, b, c*/
#include <stdio.h>
#include <math.h>
int main (void)
{
     double a,b,c;
     
    scanf("%lf %lf %lf",&a,&b,&c);

    if (a < b + c && b < a + c && c < a + b)
    {
        printf("Perimetro = %.1f\n", a + b + c);
    }
    else
    {
        printf("Area = %.1f\n", c * (a + b) / 2);
    }
    return 0;

}
   
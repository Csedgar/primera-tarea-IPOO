#include <stdio.h>


int main()
{
    float fahr,celsius;
    int lower,upper,step;

    lower = 300;
    upper = 0;
    step = 20;
    printf ("CONVERSOR DE FAHR -> CELSIUS\n\n");
    printf("Fahr\tCelsius\n\n");
    fahr = lower;
    while(fahr>=upper){
        celsius = (5.0/9.0)*(fahr-32.0);
        printf("%3.0f\t%6.1f\n",fahr,celsius);
        fahr = fahr - step;
    }
}

#include <stdio.h>

int main() {
    float celcius, fahrenheit;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    fahrenheit = lower;

    printf("%s\t\t%s\n", "Celcius", "Fahrenheit");
    while(fahrenheit <= upper) {
        celcius = (5.0/9.0) * (fahrenheit - 32.0);
        printf("%2.2f\t\t%2.2f\n", celcius, fahrenheit);
        fahrenheit = fahrenheit + step;
    }
}

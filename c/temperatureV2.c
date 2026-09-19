#include <stdio.h>

int main() {
    int celcius, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    char lableCelcius[] = "Celcius";
    char lableFahr[] = "Fahrenheit";

    printf("%s\t\t%s\n", lableCelcius, lableFahr);

    while(fahr <= upper) {
        celcius = 5 * (fahr - 32) / 9;
        printf("%d\t\t%d\n", celcius, fahr);
        fahr = fahr + step;
    }
}

#include <stdio.h>

#define     LOWER       0       /* Lower limit */
#define     UPPER       300     /* Upper limit */
#define     STEP        20      /* Step amount */

#define     LCELCIUS    "CELCIUS"
#define     LFAHR       "FAHRENHEIT"

int main() {
   float celcius, fahr;

   fahr = LOWER;

   printf("%s\t\t%s\n", LCELCIUS, LFAHR);

   for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
       celcius = (5.0 / 9.0) * (fahr - 32.0);
       printf("%.2f\t\t%.2f\n", celcius, fahr);
   }
}

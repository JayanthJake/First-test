#include<stdio.h>
#define UPPER 300
#define LOWER 0
#define STEP 20
main()
{
   float fahr;
   printf("Conversion to celsius\n");
   for(fahr=LOWER;fahr<=UPPER;fahr=fahr+STEP)
       printf("%.0f\t%3.2f\n",fahr, (5.0/9.0)*(fahr-32));
   return 0;
}

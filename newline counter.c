/*built by JayanthJake. feel free to modify*/
#include<stdio.h>
main()
{
   int a,p;
   printf("Program to count the newline characters until EOF is reached");
   while((a=getchar())!=EOF){
   if(a=='\n')
   {++p;
   printf("%d\n", p);}
}
}

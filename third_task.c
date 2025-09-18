#include <stdio.h>
#include <math.h> //Why do we need this library?

int main()
{

    float a;
    float b;
    float c;
    float x1;
    float x2;

    printf("give me a number for abc:\n");
    scanf("%f %f %f",&a,&b,&c);
if((b*b-4*a*c)<0)
    printf("no solution");
else if ((b*b-4*a*c) == 0)
printf("there is only one solution: %f\n",x1);
else{
    x1 = (-b +sqrt(b*b-4*a*c))/(2*a);
    x2 = (-b -sqrt(b*b-4*a*c))/(2*a);
}
    printf("The x1=:%f \n",x1);
    printf("The x2=:%f \n",x2);

    // declare variables

    // get user input

    /* calculate the discriminant   <-- this is a comment for multiple lines
     the discriminant is: b² - 4ac
    */

    // according to the value of the discriminant, calculate the roots and print the results

    return 0;
}
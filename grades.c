#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float m1, m2, m3,total,average;
    char G;

    printf("enter the 3 marks: ");
    scanf("%f%f%f",&m1,&m2,&m3);

    total=m1+m2+m3;
    average=total/3;

    printf("the total averagemarks is %2f \n",total);
    printf("the average marks is %2fS \n",average);

    if (average>=90)
        G='A';

   else if (average>=80)
        G='B';

   else if (average>=70)
        G='C';

   else if (average>=60)
        G='D';

   else if (average>=50)
        G='E';

   else
        G='F';

        if (average>=50 && m1>=50 && m2>=50 && m3>=50)
            printf("pass");

        else
            printf("fail");

    return 0;
}

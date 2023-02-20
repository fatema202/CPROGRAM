#include<stdio.h>
 main()
{
    int year;
    printf("Enter the name of year:");
    scanf("%d",&year);
    if (((year % 4==0)&& (year % 100!=0))|| (year %400==0))
    printf("leap year ",& year);


    else
    {
            printf("not leap year",&year);
    }

    return 0;

}

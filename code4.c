#include<stdio.h>
main()
{
    int num1,num2;
     printf("Enter the number of:");
    scanf("%d",&num1);
     num2=num1%2;
        if(num2==0)
            printf("%d is the number of even\n",num1);
        else
            printf("%d is the number of odd",num1);

    return 0;

}

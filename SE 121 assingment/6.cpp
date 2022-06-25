#include <stdio.h>
int main()
{
    int num,sum =0,temp,r;
    printf("Enter the value for sum :");
    scanf("%d",&num);
    
    
    temp=num;
    
    while(temp != 0)
	{   
	   r=temp % 10;
	   sum = sum *10 + r;
	   temp = temp / 10;
    }
    printf("Digit of sum: %d\n", sum);
}

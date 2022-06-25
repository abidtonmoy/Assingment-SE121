#include<stdio.h>
int main(){
    int n,i,sum=0;
    float average;
    for(i=1;i<=10;i++){
        scanf("%d",&n);
        sum += n;
    }
    average = sum/10.0;
    printf("Sum = %d\n",sum);
    printf("Average = %.2f\n",average);

    return 0;
}

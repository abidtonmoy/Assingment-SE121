#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2 != 0){
        printf("%d ",i);
        sum += i;
        }
    }
    printf("\nSum of odd numbers = %d\n",sum);

    return 0;

}

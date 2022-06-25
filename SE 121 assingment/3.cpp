#include<stdio.h>
int main(){
    int i,j,k,row,n,t=1;
    printf("Input number of row:");
    scanf("%d",&row);
    n=row-1;
    for(i=1;i<=row;i++){
        for(j=n;j>=1;j--){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%d ",t++);
        }
            printf("\n");
            n--;
        
    }
    return 0;
}

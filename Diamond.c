#include<stdio.h>
int main(){
int i,j,k,row;
printf("Enter the value for row: ");
scanf("%d",&row);
for(i=1;i<=row;i++){
    for (j = 1; j <= row-i; j++)
    {
        printf(" ");
    }
    for (k = 1; k <=(2*i)-1 ; k++)
    {
        printf("*");

    }
    printf("\n");
}
for(i=row-1;i>0;i--)
 {
 for(j=1;j<=row-i;j++)
 {
 printf(" ");
 }
 for(k=1;k<=i*2-1;k++)
 {
 printf("*");
 }
 printf("\n");
}

}


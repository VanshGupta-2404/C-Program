#include <stdio.h>
int main()
{
    int total,f,h,l,i,g;
    printf("Enter the amounnt :");
    scanf("%d", &total);

    if (f=total / 500){
        
        printf("Total Notes of 500 %d \n",f);
    }
        int a= total-(f*500);
        
    printf("Remaining amount %d \n",a);
    
  if( h=a/100){
        printf("Total 100 ruppee notes %d \n",h);
    }
    int k=a-(h*100);
    printf("Remaining amount %d \n",k);
    
if(l=k/50){
    printf("Total 50 ruppee notes %d \n",l);
}
    int m=k-(l*50);
    printf("Remaining amount %d \n",m);
    
if(i=m/20){
    printf("Total 20 ruppee notes %d \n",i);
}
    int q=m-(i*20);
    printf("Remaining amount %d \n",q);
    
if(g=q/10){
    printf("Total 10 ruppee notes %d \n",g);
}
    int c=q-(g*10);
    printf("Remaining amount %d \n",c);        
        
    return 0;
}
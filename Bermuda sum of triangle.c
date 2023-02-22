#include<stdio.h>
#include<math.h>
int main(){
    // To find or proof a^2+b^2=c^2
    int a,b,c;
    printf("Enter the Number: ",a );
    scanf ("%d",&a);
    printf("Enter the Number: ",b );
    scanf ("%d",&b);
    printf("Enter the Number: ",c );
    scanf ("%d",&c);

    a=pow(a,2);
    b=pow(b,2);
    c=pow(c,2); 
    if(a+b==c)
    {

        printf("you get it right");
        }
    else
        {
        printf("You are wrong");
        
        }    
    
}

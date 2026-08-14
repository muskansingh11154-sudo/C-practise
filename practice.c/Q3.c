#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbres:");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)
    {
        printf("%d is the greatest number\n",a);
    }
    else if (b>a && b>c)
    {
        printf("%d is the greatest number\n",b);
    }
    else{

        printf("%d is the greatest number\n",c);
    }

    //WAP TO FIND TO FIND GREATEST NUMBER AMONG THREE NUMBERS 
    
    
return 0;
}

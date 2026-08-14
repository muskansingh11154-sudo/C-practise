#include<stdio.h>
int main(){

int a,b,c,d;
printf("Enter value of a:");
scanf("%d",&a);
printf("Enter value of b:");
scanf("%d",&b);
printf("Enter value of c:");
scanf("%d",&c);
printf("Enter value of d:");
scanf("%d",&d);

if(a>b && a>c && a>d){
    printf("The greatest of all is %d", a);
}
else if(b>a && b>c && b>d){
    printf("The greatest of all is %d", b);
}
else if(c>b && c>a && c>d){
    printf("The greatest of all is %d", c);
}

else if(d>b && d>c && d>a){
    printf("The greatest of all is %d", d);
}



return 0;
}

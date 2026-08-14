#include<stdio.h>
int main (){
    int radius,height;
    printf("enter radius of circle:");
    scanf("%d",&radius);
    printf("The Area of circle with radius %d is %f\n" , radius , 3.14*radius*radius);
   
    printf("enter radius of cyclinder:");
    scanf("%d",&radius);
     printf("enter height of cyclinder:");
    scanf("%d",&height);


    printf("The volume of cyclinder with radius %d and height %d is %f", radius , height, 3.14*radius*radius*height);

return 0;
}

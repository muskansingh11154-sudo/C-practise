#include<stdio.h>
int main(){
    int skip = 5;
    int i =0;
    while (i < 20){
        i++;
        continue;//skips the rest for loop body for i == 5

    }
      printf("%d\n",i);
      i++;
return 0;
}

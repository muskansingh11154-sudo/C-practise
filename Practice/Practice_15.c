#include<stdio.h>
int main (){
int grade;


int marks=30;


if(marks<=100 && marks>=90){

    grade ='A';
}

if(marks<=90 && marks>=80){
    
    grade ='B';
}

if(marks<=80 && marks>=70){
    
    grade ='C';
}

if(marks<=70 && marks>=60){
    
    grade ='D';
}

if(marks<=60 && marks>=50){
    
    grade ='E';
}
else{
  grade='F';  
}
return 0;
}







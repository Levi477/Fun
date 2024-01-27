//Write a program to find nth element of fibonacci series.
//0,1,1,2,3,5,8,13.....
#include<stdio.h>
int fibonacci (int x);
int main (){

    int n,i;
    char t;
    printf("Do you want Fibonacci series printed upto n elements ?(Y/N)\n");
    scanf("%s",&t);

    if(t == 'y' || t == 'Y'){

    printf("enter the value of n \n");
    scanf("%d",&n);
    printf("Fibonacci series upto %d elements is as follows \n",n);   
    for(i=1;i<=n;i++){
        printf("%d",fibonacci(i));
        if(i==n){
            printf(".");
                }
        else{
            printf(",");
            }
    }
     
    }
else{
    printf("To print nth element in fibonacci series \n");
    printf("enter the value of n \n");
    scanf("%d",&n);
    if(n==1 || n==21 || n==31 ){
    printf("%dst element is %d \n",n,fibonacci(n));
    }
    else if(n==2 || n==22){
    printf("%dnd element is %d \n",n,fibonacci(n));
    }
    else if(n==3){
    printf("3rd element is %d \n", fibonacci(n));
    }
    else{
        printf("%dth element is %d \n",n, fibonacci(n));
    }
}
}
int fibonacci(int x){
    if(x==1){
        return 0;
    }
    if(x==2){
        return 1;
    }
    else{ 
          return fibonacci(x-2) + fibonacci(x-1);
          }
} 
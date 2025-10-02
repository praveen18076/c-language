#include<stdio.h>
int main(){
    float celcius , faranhite;
    
    
    printf("enter temperature in celcius :  ");
    scanf("%f" , &celcius);
    
    
    faranhite=(celcius*9/5)+32;

    printf("faranhite = %0.2f \n" , faranhite);

    return 0;
}
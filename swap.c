#include <stdio.h>

int main(){
    int firstnum,secondnum ,thirdnum;

    printf("enter two numbers: ");
    scanf(" %d %d", &firstnum, &secondnum);

    printf("before swap: firstnum= %d , secondnum=%d \n" , firstnum,secondnum);


    thirdnum=firstnum;
    firstnum=secondnum;
    secondnum=thirdnum;


    printf("After swap : firstnum=%d , seconfnum= %d \n" ,firstnum,secondnum);

    return 0;
}
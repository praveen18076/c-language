#include <stdio.h>
int main(){
    float m1 , m2 , m3 , m4 , m5 , sum , per;
    printf("enter the marks of five subjects: \n");
    scanf("%f %f %f %f %f" , &m1, &m2 , &m3 , &m4 , &m5);
    sum=m1+m2+m3+m4+m5;
    per=sum/5;
    printf("sum=%0.2f\n percentage = %f0.2\n" , sum , per);
    return 0;
}
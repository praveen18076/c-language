#include <stdio.h>
#include <math.h>
int main(){
    float p,r,t,si; //p=principal,r=rate,t=time,si=simple intrest
    printf("enter principal,rate,and time : \n ");
    scanf("%f %f %f " , &p , &r , &t);
    si=(p*r*t)/100;
    printf("simple intrest=%0.2f\n" ,si );
    return 0;
}
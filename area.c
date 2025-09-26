#include <stdio.h>
int main(){
    float radius,area,circumference;


    printf("enter radius: ");
    scanf("%f" ,&radius);

    area=3.14*radius*radius;
    circumference=2*3.14*radius;


    printf("Area =%0.2f\n circumference=%0.2f\n" ,area , circumference);

    return 0;
}
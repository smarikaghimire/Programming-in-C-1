#include <stdio.h>

int main()
{

    int height, len, area;
    printf("Enter height:");
    scanf("%d", &height);
    printf("Enter length:");
    scanf("%d", &len);
    area = height * len;
    printf("Area is %d", area);
    printf("Hello world!\n");

    int first, _2nd;
    int add, sub;

    // getting user input
    printf("Enter 1st number: \n");
    scanf("%d", &first);
    printf("Enter 2nd number: \n");
    scanf("%d", &_2nd);

    add = first + _2nd;
    sub = first - _2nd;
    printf("sum is %d \nsub is %d", add, sub);

    float Radius, area;
    printf("Enter radius: ");
    scanf("%f", &Radius);
    area = PI * Radius * Radius;
    printf("area is %.2f cm", area);

    return 0;
}

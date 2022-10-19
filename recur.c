// sum of 3 numbers using function

// #include <stdio.h>
// void sum(float x, float y, float z){
// float sum;
// sum = x + y + z;  
// printf ("sum is %f", sum);
// return;
// }

// void main(){
// float a, b, d;
// printf("Enter 3 numbers: ");
// scanf ("%f %f %f", &a, &b, &d);
// sum (a, b, d);
// }

// write a recursive program to find sum of 10 natural numbers

// #include <stdio.h>
// int sum(int n){
//     if(n == 1){
//         return(1);
//     }else{
//         return(n + sum(n-1));
//     }
// }

// void main(){
//     int a,b;
//     printf("enter a number: ");
//     scanf("%d", &a);
//     b= sum(a);
//     printf("%d", b);
// }

// Recurive function assignment

// 2 + 4 + 6 + ...... + n

// #include <stdio.h>
// int sum(int n){
//     if(n==2){
//         return(2);
//     }else{
//         return(n + sum(n-2));
//     }
// }

// void main(){
//     int a,b,c;
//     printf("Enter a number: ");
//     scanf("%d", &a);
//     if(a%2 != 0){
//         printf("Please, enter a even number : ");
//         scanf("%d", &c);
//         a =c;
//     }
//     b= sum(a);
//     printf("%d", b);
// }

// 1 + 3 + 5 + .... + n

// #include <stdio.h>
// int sum(int n){
//     if(n==1){
//         return(1);
//     }else{
//         return(n + sum(n-2));
//     }
// }

// void main(){
//     int a,b,c;
//     printf("Enter a number: ");
//     scanf("%d", &a);
//     if(a%2 == 0){
//         printf("Please, enter a odd number : ");
//         scanf("%d", &c);
//         a =c;
//     }
//     b= sum(a);
//     printf("%d", b);
// }

// 1 + 5 + 9 + ..... + n

// #include <stdio.h>
// int sum(int n){
//     if(n==1){
//         return(1);
//     }else{
//         return(n + sum(n-4));
//     }
// }

// void main(){
//     int a,b,c;
//     printf("Enter a number: ");
//     scanf("%d", &a);
//     if(a%2 == 0){
//         printf("Please, enter a odd number : ");
//         scanf("%d", &c);
//         a =c;
//     }
//     b= sum(a);
//     printf("%d", b);
// }

// x + x^2 + x^3 + ..... + x^n

// #include <stdio.h>
// int sum(int n){
//     if(n==1){
//         return(1);
//     }else{
//         return(n + sum(n-1));
//     }
// }

// void main(){
//     int a,b,c;
//     printf("Enter a number: ");
//     scanf("%d", &a);
//     b= sum(a);
//     printf("x^%d", b);
// }

// 3 + 3^2 + 3^3 + ..... + 3^n

// #include <stdio.h>
// int sum(int n){
//     if(n==1){
//         return(1);
//     }else{
//         return(n + sum(n-1));
//     }
// }

// void main(){
//     int a,b,c;
//     printf("Enter a number: ");
//     scanf("%d", &a);
//     b= sum(a);
//     printf("3^%d", b);
// }

// x/2 + x/4 + x/6 + ... + x/n

// #include <stdio.h>
// int sum(int n){
//     if(n==2){
//         return(2);
//     }else{
//         return(n + sum(n-2));
//     }
// }

// void main(){
//     int a,b,c;
//     printf("Enter a number: ");
//     scanf("%d", &a);
//     if(a%2 != 0){
//         printf("Please, enter a even number : ");
//         scanf("%d", &c);
//         a =c;
//     }
//     b= sum(a);
//     printf("x/%d", b);
// }
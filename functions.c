// #include <stdio.h>
// int sum( int a, int b);
// void main(){
//     int c;
//     c= sum(23, 2);
//     printf("%d", c);
// }
// int sum( int a, int b){
//     return a+b;
// }

// #include <stdio.h>
// int calculator(int x){
//     if( x==1){
//         return 0;
//     }
//     if( x==2){
//         return 1;
//     }else{
//         return (calculator(x-2)+ calculator(x-1));
//     }
// }
// void main(){
//     int num, fibo;
//     printf("Fibonacci Series\n");
//     printf("Number of terms:");
//     scanf("%d", &num);
//     for(int i=1; i<= num; i++){
//         fibo = calculator(i);
//         printf("%d ", fibo);
//     }
    
// }

// #include <stdio.h>
// void main(){
//     int a=4;
//     printf("%d %d %d", a, ++a, a++);
//     //output is?
//     // left to write execution occurs in gcc compiler
//     // a++ (post increment operator) so itself is same a
//     // ++a (pre increment operator) coming value is post incremented and it is again incremented (so +2)
//     // a is the aftermath value , will be what was in 2nd
//     // output is 6 6 4
// }

// // recursive function to print sum of first n natural numbers
// #include <stdio.h>
// int check(int x){
//     if(x == 0){
//         return 0;
//     }else{
//         return(x + check(x-1));
//     }
// }
// void main(){
//     int num, sum;
//     printf("SUM OF NATURAL NUMBERS upto?\nEnter any number: ");
//     scanf("%d", &num);
//     sum = check(num);
//     printf("Sum is %d", sum);
// }


// wap to print following pattern using functions
/*
#
###
#####
#######
*/
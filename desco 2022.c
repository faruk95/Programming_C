#include<stdio.h>
int main(){
int a=10,b=25;

b=++b + ++a;
a=b++ + a++;
printf("%d, b= %d",b,a);


return 0;
}

#include<stdio.h>
int sum(int val){
static int myresult=0;
myresult+=val;
return myresult;

}


void main(){
int i,value;
for(i=1;i<10;i++){value=sum(i);
printf("%d\n",value);}



}

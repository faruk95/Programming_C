#include<stdio.h>
int main()
{
int b=20,c=55,l,n=25,i,j;
int a[n];
char aa[25]="this is 1 faruk 50 ul";
for(i=0;i<n;i++){if(aa[i]=='0' ||aa[i]=='1' ||aa[i]=='2'
                     ||aa[i]=='3' ||aa[i]=='4' ||aa[i]=='5'
                     ||aa[i]=='7' ||aa[i]=='8' ||aa[i]=='9')printf("%c ",aa[i]);}

//scanf("%c",&aa[i]);

//for(i=0;i<n;i++)
//printf("%c",aa[3]);

return 0;
}

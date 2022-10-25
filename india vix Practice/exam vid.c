#include<stdio.h>
void main()
{
      char s[]="man";
      int i;
      for(i=0; s[i]<6; i++)
            printf("%c%c%c%c ", s[i], *(s+i), *(i+s), i[s]);
}

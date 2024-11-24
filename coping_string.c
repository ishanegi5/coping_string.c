#include<stdio.h>
#include<string.h>
void main()
{ char ch[9]="isha negi";
  char *str[9];
  int i;
  for(i=0;i<10;i++)
 { str[i]=&ch[i];
 
 printf("%c",*str[i]);
}
}

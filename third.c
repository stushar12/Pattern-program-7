#include <stdio.h>
int main()
{


for(int i=1;i<=5;i++)
{
  char ch='A';
  for(int j=5-i;j>0;j--)
  {
  printf(" ");
  }
for(int k=1;k<=i;k++)
  {
    printf("%c",ch);
    ch++;
  }
   char ch1=--ch;
for(int z=i-1;z>=1;z--)
{
  ch1=ch1-1;
  printf("%c",ch1);

}
  printf("\n");
}

}

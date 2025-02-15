#include <stdio.h>	 
int main()
{
    char ch;
  int i;
  i='a';
  printf("character %c has the ASCII value %d\n", i,i);
  ch = 65;
  printf("character %c has the ASCII value %d\n", ch,ch);
  ch=ch+1;
  printf("character %c has the ASCII value %d\n", ch,ch);
  ch++;
  printf("character %c has the ASCII value %d\n", ch,ch);

  return 0;
}

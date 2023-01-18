#include <stdio.h>
#include <string.h>
#include <conio.h>


void add_symbol()
{
  char r;
  char str[100];
  printf("Vvedite stroku: ");
  gets(str);
  printf("Vvedite symbol: ");
  r = getch();
  printf("%c\n",r);
  str[0] = r;
  str[strlen(str)-1] = r;
  printf("Result: ");
  puts(str);
}

void remove_space()
{
  char str[100];
  char str2[100];
  printf("Vvedite stroku dlya udalenyja probela: ");
  gets(str);
  int start = 0, end = strlen(str);
  for (int i = 0; i < strlen(str); i++)
  {
    if (str[i] != ' ')
    {
      break;
    }
    else
    {
      start++;
    }
  }

  for (int x = (strlen(str))-1; x > 0; x--)
  { 
    if (str[x] != ' ')
    {
      break;
    }
    else
    {
      end--;
    }
  }
  int j = 0;
  for (int i = start; i < end; i++)
  {
    str2[j] = str[i];
    j++;
  }
  str2[j] = str[strlen(str)];
  printf("Result: ");
  puts(str2);
}

int main()
{
  add_symbol();
  remove_space();  
  return 1;
}

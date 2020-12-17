#include <stdio.h>
#include <malloc.h>

struct even_odd
{
  int number;
  char *even;
};

int main()
{
  int size;
  scanf("%d", &size);
  struct even_odd *dynamic_array;
  dynamic_array = (struct even_odd*)malloc(size * sizeof(struct even_odd));
  
  for (int q = 0; q < size; q++)
  {
    scanf("%d", &dynamic_array[q].number);
    if ((dynamic_array[q].number) % 2 == 0) 
    {
      dynamic_array[q].even = "Четное";
    }
    else 
    {
      dynamic_array[q].even = "Нечетное";
    }
  }  
  for (int q = 0; q < size; q++)
  {
    printf("%d %s\n", dynamic_array[q].number, dynamic_array[q].even);
  }
  free(dynamic_array);

  return 0;
}

#include <stdio.h>
#include <malloc.h>

int main()
{
  int *a;  
  int size;
  printf("Введите размер массива: ");
  scanf("%d", &size);
  a = (int*) malloc (size * sizeof(int));
  for (int i = 0; i < size; i++)
  {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < size; i++)
  {
    printf("%d ", a[i]);
  }
  free(a);
  
  return 0;
}

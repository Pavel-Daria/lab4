#include <stdio.h>
#include <malloc.h>

int* get_simples(int);

int main()
{
  int count;
  scanf("%d", &count);
  int *prime_numbers;
  prime_numbers = get_simples(count);
  
  for (int q = 0; q < count; q++)
  {
    if (prime_numbers[q] == 1)
    {
      printf("%d ", q);
    }
  }
  free(prime_numbers);

  return 0;
}

int* get_simples(int count)
{
  int *prime_numbers = malloc((count) * sizeof(int));
  
  for (int q = 2; q < count; q++)
  {
    prime_numbers[q] = 1;
  }
  
  for (int q = 2; q * q < count; q++)
  {
    if (prime_numbers[q] == 1)
    {
      for (int w = q * q; w < count; w += q)
      {
        prime_numbers[w] = 0;
      }
    }
  }

  return prime_numbers;
}

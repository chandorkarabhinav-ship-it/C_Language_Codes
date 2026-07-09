// Even_Odd
// Abhinav .B Chandorkar
//PRN - 2503033111372L013
//Branch - Electronics and Telecommunication(R)

#include <stdio.h>

int main(){
  int n, i;
  printf("Enter size: ");
  scanf("%d", &n);

  int arr[n];
  for(i = 0; i < n; i++ ) scanf("%d", &arr[i]);

  printf("Even: ");
  for(i = 0; i < n; i++)
      if(arr[i] % 2 == 0 ) printf("%d ", arr[i]);
  printf("\nOdd: ");
  for(i = 0; i<n; i++)
      if(arr[i]%2 != 0) printf("%d ", arr[i]);

  return 0;
}

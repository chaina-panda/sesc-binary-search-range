#include <stdio.h>

int main(void) {
  int N, K;
  scanf("%d%d", &N, &K);
  int arr[N];
  int a, x = -1,  y = -1, i1 = 0, i2;
  for (i2 = 0; i2 < N; (i2)++ ){
  scanf("%d", &arr[i2]);
}
  i2--;
  while(i1<=i2){
    a=(i1+i2)/2;
  if (arr[a]==K) {x = a;}
  if (arr[a] < K) {i1 = a+1;}
  else {i2=a;}
  if (i1==i2) break;
  }
  i1 = 0;
  i2 = N;
   while(i1<=i2){
    a=(i1+i2)/2;
  if (arr[a]==K) {y = a;}
  if (arr[a] <= K) {i1 = a+1;}
  else {i2=a;}
  if (i1==i2) break;
  }
printf("%d %d", x, y);
  return 0;
}
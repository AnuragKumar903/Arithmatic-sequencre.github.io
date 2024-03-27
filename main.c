#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  int curr = 0;
  int prev = 0;
  int curr_diff = 0;
  int prev_diff = 0;
  int i = 0;
  if(n % 10 == 0) {
    printf("Arithmatic");
    return 0;
  };
  while(n != 0){
    int digit = n % 10;
    if(i == 0){
      curr = digit;
      prev = digit;
    }
    else{
      prev = curr;
      curr = digit;
    }
    if(i == 1){
      curr_diff = curr - prev;
      
    }
    if(i > 1){
      prev_diff = curr_diff;
      curr_diff = curr - prev;
      if(curr_diff != prev_diff){
        printf("Not Arithmetic");
        return 0;
      } 
    }
    n = n / 10;
    i++;
    
  }
  printf("Arithmetic");
  return 0;
}
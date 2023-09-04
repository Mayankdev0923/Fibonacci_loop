#include<stdio.h>
#include<math.h>

  int main() {
    int n = 15;
    int fib[15];
    fib[0]=0;
    fib[1]=1;
    
    for (int i=2 ; i<n ;i++) {
      fib[i] = fib[i-1] + fib[i-2];
    }
    
    for (int i=0 ; i<n ; i++) {
      printf("%d ,\t",fib[i]);
      
    }
    printf("\n");
    
    return 0;
  }
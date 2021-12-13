#include <stdio.h>

int main()
{
  int i, j;
 
  printf("Processing...\n");
  /* 素数かどうかを判定 */
  for( i=2;i<=100000;++i ) {
    for( j=2;j<i;++j ){
      if( i%j==0 ) {
        break;
      }
    }
  }
  printf("Processing completed\n");
  return 0;
}
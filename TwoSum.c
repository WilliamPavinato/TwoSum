#include <stdlib.h>
#include <stdio.h>

int* twosum (int* nums, int numsSize, int target) {

int *result = (int *)malloc(sizeof(int));

if( result == NULL ){
    printf("Memory location fail");
    return NULL;
}

for( int i = 0; i < numsSize; i++ ){
  for(int j = 0; j < numsSize ; j++){

      if( nums[i] + nums[j] == target){
        result[0] = i;
        result[1] = j;
        return result;
      }
      
    }
}

  return NULL;
}

int main() {
  int nums[7] = {0,1,1,1,1,1,3};
  int* indices = twosum(nums, 7, 5);
  if (!indices) {
    printf("no indices found.\n");
    exit(1);
  }
  printf("The indices are: ");
  int i;
  for (i = 0; i < 2; i++){
    printf("%i ", indices[i]);
  }
  printf("\n");
}

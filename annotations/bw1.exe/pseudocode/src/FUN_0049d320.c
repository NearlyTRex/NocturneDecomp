// Name: FUN_0049d320
// Address: 0049d320
// Address Range: [[0049d320, 0049d34a]]
// Convention: unknown
// Signature: void FUN_0049d320(int *param_1)

#include "nocturne.h"

void FUN_0049d320(int *param_1)

{
  if (param_1[1] - param_1[2] < *param_1) {
    *param_1 = param_1[1] - param_1[2];
    if (-1 < *param_1) {
      return;
    }
  }
  else if (-1 < *param_1) {
    return;
  }
  *param_1 = 0;
  return;
}

// Name: FUN_0040d540
// Address: 0040d540
// Address Range: [[0040d540, 0040d593]]
// Convention: unknown
// Signature: void FUN_0040d540(int *param_1)

#include "nocturne.h"

void FUN_0040d540(int *param_1)

{
  if (*param_1 != 0) {
    FUN_005b86a0(*param_1);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    FUN_005b86a0(param_1[1]);
    param_1[1] = 0;
  }
  if (param_1[2] == 0) {
    return;
  }
  FUN_005b86a0(param_1[2]);
  param_1[2] = 0;
  return;
}

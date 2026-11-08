// Name: FUN_005386a0
// Address: 005386a0
// Address Range: [[005386a0, 005386d7]]
// Convention: unknown
// Signature: void FUN_005386a0(undefined4 *param_1)

#include "nocturne.h"

void FUN_005386a0(uint *param_1)

{
  if (param_1[9] == 0) {
    param_1[1] = 0;
    *param_1 = param_1[1];
    return;
  }
  FUN_005b86a0(param_1[9]);
  param_1[9] = 0;
  param_1[1] = 0;
  *param_1 = param_1[1];
  return;
}

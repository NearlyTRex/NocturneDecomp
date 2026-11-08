// Name: FUN_00434290
// Address: 00434290
// Address Range: [[00434290, 004342c7]]
// Convention: unknown
// Signature: void FUN_00434290(undefined4 *param_1)

#include "nocturne.h"

void FUN_00434290(uint *param_1)

{
  if (param_1[4] == 0) {
    param_1[3] = 0;
    *param_1 = param_1[3];
    return;
  }
  FUN_005b86a0(param_1[4]);
  param_1[4] = 0;
  param_1[3] = 0;
  *param_1 = param_1[3];
  return;
}

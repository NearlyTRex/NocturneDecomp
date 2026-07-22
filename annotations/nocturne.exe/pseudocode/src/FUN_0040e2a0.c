// Name: FUN_0040e2a0
// Address: 0040e2a0
// Address Range: [[0040e2a0, 0040e2c6]]
// Convention: unknown
// Signature: void FUN_0040e2a0(undefined4 *param_1,undefined4 *param_2)

#include "nocturne.h"

void FUN_0040e2a0(uint *param_1,uint *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}

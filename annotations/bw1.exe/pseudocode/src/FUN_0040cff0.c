// Name: FUN_0040cff0
// Address: 0040cff0
// Address Range: [[0040cff0, 0040d00d]]
// Convention: unknown
// Signature: void FUN_0040cff0(undefined4 *param_1,undefined4 *param_2)

#include "nocturne.h"

void FUN_0040cff0(uint *param_1,uint *param_2)

{
  if (param_1 == param_2) {
    return;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}

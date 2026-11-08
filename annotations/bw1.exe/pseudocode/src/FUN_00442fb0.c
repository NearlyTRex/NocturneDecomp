// Name: FUN_00442fb0
// Address: 00442fb0
// Address Range: [[00442fb0, 00442fe7]]
// Convention: unknown
// Signature: void FUN_00442fb0(undefined4 *param_1)

#include "nocturne.h"

void FUN_00442fb0(uint *param_1)

{
  if (param_1[4] == 0) {
    param_1[3] = 0;
    *param_1 = param_1[3];
    return;
  }
  FUN_005c09f0(param_1[4]);
  param_1[4] = 0;
  param_1[3] = 0;
  *param_1 = param_1[3];
  return;
}

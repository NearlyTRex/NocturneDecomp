// Name: FUN_004a1e60
// Address: 004a1e60
// Address Range: [[004a1e60, 004a1e8b]]
// Convention: unknown
// Signature: void FUN_004a1e60(undefined4 *param_1)

#include "nocturne.h"

void FUN_004a1e60(uint *param_1)

{
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[5] = &PTR_FUN_005f6ec4;
  param_1[2] = param_1[3];
  *param_1 = param_1[1];
  return;
}

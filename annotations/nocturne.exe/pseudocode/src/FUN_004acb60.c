// Name: FUN_004acb60
// Address: 004acb60
// Address Range: [[004acb60, 004acbb3]]
// Convention: unknown
// Signature: void FUN_004acb60(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004acb60(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x150);
  fVar2 = (float)_DAT_00584fb8;
  param_2[1] = -0.1;
  *param_2 = -fVar1 * fVar2;
  param_2[2] = -*(float *)(param_1 + 0x158) * fVar2;
  param_2[3] = *(float *)(param_1 + 0x150) * fVar2;
  param_2[4] = *(float *)(param_1 + 0x154) + (float)_DAT_00584fc0;
  param_2[5] = fVar2 * *(float *)(param_1 + 0x158);
  return;
}

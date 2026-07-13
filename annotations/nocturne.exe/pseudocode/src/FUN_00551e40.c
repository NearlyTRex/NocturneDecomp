// Name: FUN_00551e40
// Address: 00551e40
// Address Range: [[00551e40, 00551e93]]
// Convention: unknown
// Signature: void FUN_00551e40(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00551e40(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x150);
  fVar2 = (float)_DAT_0059765f;
  param_2[1] = -0.1;
  *param_2 = -fVar1 * fVar2;
  param_2[2] = -*(float *)(param_1 + 0x158) * fVar2;
  param_2[3] = *(float *)(param_1 + 0x150) * fVar2;
  param_2[4] = *(float *)(param_1 + 0x154) + (float)_DAT_00597667;
  param_2[5] = fVar2 * *(float *)(param_1 + 0x158);
  return;
}

// Name: FUN_00548110
// Address: 00548110
// Address Range: [[00548110, 00548163]]
// Convention: unknown
// Signature: void FUN_00548110(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00548110(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x158);
  fVar2 = (float)_DAT_005969b7;
  param_2[1] = -0.1;
  *param_2 = -fVar1 * fVar2;
  param_2[2] = -*(float *)(param_1 + 0x160) * fVar2;
  param_2[3] = *(float *)(param_1 + 0x158) * fVar2;
  param_2[4] = *(float *)(param_1 + 0x15c) + (float)_DAT_005969bf;
  param_2[5] = fVar2 * *(float *)(param_1 + 0x160);
  return;
}

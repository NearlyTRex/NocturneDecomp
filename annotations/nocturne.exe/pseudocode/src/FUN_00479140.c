// Name: FUN_00479140
// Address: 00479140
// Address Range: [[00479140, 00479193]]
// Convention: unknown
// Signature: void FUN_00479140(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00479140(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x154);
  fVar2 = (float)_DAT_0057f1f4;
  param_2[1] = -0.1;
  *param_2 = -fVar1 * fVar2;
  param_2[2] = -*(float *)(param_1 + 0x15c) * fVar2;
  param_2[3] = *(float *)(param_1 + 0x154) * fVar2;
  param_2[4] = *(float *)(param_1 + 0x158) + (float)_DAT_0057f1fc;
  param_2[5] = fVar2 * *(float *)(param_1 + 0x15c);
  return;
}

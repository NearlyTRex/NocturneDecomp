// Name: FUN_0043f650
// Address: 0043f650
// Address Range: [[0043f650, 0043f6a3]]
// Convention: unknown
// Signature: void FUN_0043f650(int param_1,float *param_2)

#include "nocturne.h"

void FUN_0043f650(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x150);
  fVar2 = (float)0.5;
  param_2[1] = -0.1;
  *param_2 = -fVar1 * fVar2;
  param_2[2] = -*(float *)(param_1 + 0x158) * fVar2;
  param_2[3] = *(float *)(param_1 + 0x150) * fVar2;
  param_2[4] = *(float *)(param_1 + 0x154) + (float)0.10000000000000001;
  param_2[5] = fVar2 * *(float *)(param_1 + 0x158);
  return;
}

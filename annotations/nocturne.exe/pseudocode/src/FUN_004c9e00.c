// Name: FUN_004c9e00
// Address: 004c9e00
// Address Range: [[004c9e00, 004c9e3f]]
// Convention: unknown
// Signature: void FUN_004c9e00(int param_1,float *param_2)

#include "nocturne.h"

void FUN_004c9e00(int param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x1500);
  param_2[1] = 0.0;
  *param_2 = -fVar1;
  param_2[2] = -*(float *)(param_1 + 0x1500);
  param_2[3] = *(float *)(param_1 + 0x1500);
  param_2[4] = *(float *)(param_1 + 0x1508);
  param_2[5] = *(float *)(param_1 + 0x1500);
  return;
}

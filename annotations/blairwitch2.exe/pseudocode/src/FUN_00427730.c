// Name: FUN_00427730
// Address: 00427730
// Address Range: [[00427730, 0042776d]]
// Convention: unknown
// Signature: void FUN_00427730(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00427730(int param_1,int param_2)

{
  float fVar1;
  
  FUN_00409830(param_1,param_2);
  if (*(int *)(param_1 + 0x2814) == 0) {
    return;
  }
  *(uint *)(param_2 + 0x50) = 0;
  fVar1 = (float)_DAT_005ccdce;
  *(uint *)(param_2 + 0x48) = 0x3f666666;
  *(float *)(param_2 + 0x4c) = *(float *)(param_2 + 0x44) * fVar1;
  return;
}

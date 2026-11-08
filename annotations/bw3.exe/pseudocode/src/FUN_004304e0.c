// Name: FUN_004304e0
// Address: 004304e0
// Address Range: [[004304e0, 0043051d]]
// Convention: unknown
// Signature: void FUN_004304e0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004304e0(int param_1,int param_2)

{
  float fVar1;
  
  FUN_004096c0(param_1,param_2);
  if (*(int *)(param_1 + 0x27a8) == 0) {
    return;
  }
  *(uint *)(param_2 + 0x50) = 0;
  fVar1 = (float)_DAT_005b83a6;
  *(uint *)(param_2 + 0x48) = 0x3f666666;
  *(float *)(param_2 + 0x4c) = *(float *)(param_2 + 0x44) * fVar1;
  return;
}

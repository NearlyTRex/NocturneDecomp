// Name: FUN_00431160
// Address: 00431160
// Address Range: [[00431160, 0043119d]]
// Convention: unknown
// Signature: void FUN_00431160(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00431160(int param_1,int param_2)

{
  float fVar1;
  
  FUN_00409680(param_1,param_2);
  if (*(int *)(param_1 + 0x27a8) == 0) {
    return;
  }
  *(uint *)(param_2 + 0x50) = 0;
  fVar1 = (float)_DAT_005d5a5f;
  *(uint *)(param_2 + 0x48) = 0x3f666666;
  *(float *)(param_2 + 0x4c) = *(float *)(param_2 + 0x44) * fVar1;
  return;
}

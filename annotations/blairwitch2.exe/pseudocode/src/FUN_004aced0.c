// Name: FUN_004aced0
// Address: 004aced0
// Address Range: [[004aced0, 004acf56]]
// Convention: unknown
// Signature: void FUN_004aced0(int param_1,float param_2,float param_3)

#include "nocturne.h"

void FUN_004aced0(int param_1,float param_2,float param_3)

{
  float fVar1;
  int iVar2;
  
  iVar2 = FUN_0044fd20(param_1 + 0x2e0);
  iVar2 = *(int *)(iVar2 + 0x100);
  fVar1 = ((float)iVar2 * (*(float *)(param_1 + 0x2b8) - param_2)) / (param_3 - param_2);
  *(float *)(param_1 + 0x2dc) = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)(param_1 + 0x2dc) = 0;
  }
  fVar1 = (float)(iVar2 + -1);
  if (*(float *)(param_1 + 0x2dc) <= fVar1) {
    return;
  }
  *(float *)(param_1 + 0x2dc) = fVar1;
  return;
}

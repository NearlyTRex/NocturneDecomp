// Name: FUN_004c5e80
// Address: 004c5e80
// Address Range: [[004c5e80, 004c5f06]]
// Convention: unknown
// Signature: void FUN_004c5e80(int param_1,float param_2,float param_3)

#include "nocturne.h"

void FUN_004c5e80(int param_1,float param_2,float param_3)

{
  float fVar1;
  int iVar2;
  
  iVar2 = FUN_00468900(param_1 + 0x184);
  iVar2 = *(int *)(iVar2 + 0x100);
  fVar1 = ((float)iVar2 * (*(float *)(param_1 + 0x15c) - param_2)) / (param_3 - param_2);
  *(float *)(param_1 + 0x180) = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)(param_1 + 0x180) = 0;
  }
  fVar1 = (float)(iVar2 + -1);
  if (*(float *)(param_1 + 0x180) <= fVar1) {
    return;
  }
  *(float *)(param_1 + 0x180) = fVar1;
  return;
}

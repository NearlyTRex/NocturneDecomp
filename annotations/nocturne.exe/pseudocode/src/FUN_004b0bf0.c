// Name: FUN_004b0bf0
// Address: 004b0bf0
// Address Range: [[004b0bf0, 004b0cac]]
// Convention: unknown
// Signature: void FUN_004b0bf0(int param_1,float param_2)

#include "nocturne.h"

void FUN_004b0bf0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x2d4) == 0) {
    if (*(int *)(param_1 + 0x2d8) == 0) {
      iVar3 = FUN_0047dc30(0x01C03A10,param_1 + 0x2e0);
      if (iVar3 != 0) {
        FUN_004b0dc0(param_1);
      }
    }
    if (*(int *)(param_1 + 0x2d8) == 1) {
      iVar3 = FUN_00454530(param_1 + 0x150);
      fVar2 = (float)(*(int *)(iVar3 + 0x100) + -1);
      fVar1 = *(float *)(param_1 + 0x2d0) * param_2 + *(float *)(param_1 + 0x2cc);
      *(float *)(param_1 + 0x2cc) = fVar1;
      if (fVar2 <= fVar1) {
        *(uint *)(param_1 + 0x2d8) = 2;
        *(float *)(param_1 + 0x2cc) = fVar2;
        return;
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x104) = 1;
  }
  return;
}

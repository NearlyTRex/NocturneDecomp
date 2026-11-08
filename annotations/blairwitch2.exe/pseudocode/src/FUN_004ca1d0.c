// Name: FUN_004ca1d0
// Address: 004ca1d0
// Address Range: [[004ca1d0, 004ca28c]]
// Convention: unknown
// Signature: void FUN_004ca1d0(int param_1,float param_2)

#include "nocturne.h"

void FUN_004ca1d0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x438) == 0) {
    if (*(int *)(param_1 + 0x43c) == 0) {
      iVar3 = FUN_0048e340(0x01C38BC0,param_1 + 0x444);
      if (iVar3 != 0) {
        FUN_004ca3e0(param_1);
      }
    }
    if (*(int *)(param_1 + 0x43c) == 1) {
      iVar3 = FUN_0044fd20(param_1 + 0x2b4);
      fVar2 = (float)(*(int *)(iVar3 + 0x100) + -1);
      fVar1 = *(float *)(param_1 + 0x434) * param_2 + *(float *)(param_1 + 0x430);
      *(float *)(param_1 + 0x430) = fVar1;
      if (fVar2 <= fVar1) {
        *(uint *)(param_1 + 0x43c) = 2;
        *(float *)(param_1 + 0x430) = fVar2;
        return;
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x104) = 1;
  }
  return;
}

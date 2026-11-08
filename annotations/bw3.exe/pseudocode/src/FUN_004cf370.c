// Name: FUN_004cf370
// Address: 004cf370
// Address Range: [[004cf370, 004cf42c]]
// Convention: unknown
// Signature: void FUN_004cf370(int param_1,float param_2)

#include "nocturne.h"

void FUN_004cf370(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x2dc) == 0) {
    if (*(int *)(param_1 + 0x2e0) == 0) {
      iVar3 = FUN_00491aa0(0x01C6E360,param_1 + 0x2e8);
      if (iVar3 != 0) {
        FUN_004cf580(param_1);
      }
    }
    if (*(int *)(param_1 + 0x2e0) == 1) {
      iVar3 = FUN_004625a0(param_1 + 0x158);
      fVar2 = (float)(*(int *)(iVar3 + 0x100) + -1);
      fVar1 = *(float *)(param_1 + 0x2d8) * param_2 + *(float *)(param_1 + 0x2d4);
      *(float *)(param_1 + 0x2d4) = fVar1;
      if (fVar2 <= fVar1) {
        *(uint *)(param_1 + 0x2e0) = 2;
        *(float *)(param_1 + 0x2d4) = fVar2;
        return;
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x104) = 1;
  }
  return;
}

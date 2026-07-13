// Name: FUN_004b4000
// Address: 004b4000
// Address Range: [[004b4000, 004b411e]]
// Convention: unknown
// Signature: void FUN_004b4000(int param_1,int param_2)

#include "nocturne.h"

void FUN_004b4000(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  
  if ((*(uint *)(param_1 + 0xbc8c) & 0x7fffffff) != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)(0x01C775EC + 0x1d0) != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)(0x01C775EC + 0x22c) == 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  *(uint *)(param_1 + 0xbc8c) = 0x3F000000;
  fVar2 = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
  iVar1 = param_1 + 0x150;
  *(float *)(param_1 + 0x2434) = fVar2;
  if (fVar2 <= 0.0) {
    *(uint *)(param_1 + 0x2434) = 0;
    iVar3 = FUN_004e1660(iVar1);
    if (*(int *)(iVar3 + 0x24) != 9) {
      iVar3 = FUN_004e1660(iVar1);
      if (*(int *)(iVar3 + 0x24) != 8) {
        *(uint *)(param_1 + 0x2590) = 0;
        FUN_004e16b0(iVar1,8,1);
        FUN_004b0670(0x01C78C7C,param_1,0x32,0x42480000,0);
        FUN_00428510(param_1,param_2);
        return;
      }
    }
  }
  else if (0.0 < *(float *)(param_2 + 4)) {
    if (*(int *)(param_1 + 0x1fa3c) == 0) {
      uVar4 = 4;
    }
    else {
      uVar4 = 0xb;
    }
    FUN_004e16b0(iVar1,uVar4,1);
  }
  FUN_00428510(param_1,param_2);
  return;
}

// Name: FUN_004cd880
// Address: 004cd880
// Address Range: [[004cd880, 004cd99e]]
// Convention: unknown
// Signature: void FUN_004cd880(int param_1,int param_2)

#include "nocturne.h"

void FUN_004cd880(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  
  if ((*(uint *)(param_1 + 0x10a60) & 0x7fffffff) != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)(0x01CB6900 + 0x1ec) != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)(0x01CB6900 + 0x248) == 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  *(uint *)(param_1 + 0x10a60) = 0x3F000000;
  fVar2 = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4);
  iVar1 = param_1 + 0x2b4;
  *(float *)(param_1 + 0x25a8) = fVar2;
  if (fVar2 <= 0.0) {
    *(uint *)(param_1 + 0x25a8) = 0;
    iVar3 = FUN_005035c0(iVar1);
    if (*(int *)(iVar3 + 0x24) != 9) {
      iVar3 = FUN_005035c0(iVar1);
      if (*(int *)(iVar3 + 0x24) != 8) {
        *(uint *)(param_1 + 0x276c) = 0;
        FUN_00503620(iVar1,8,1);
        FUN_004c9cc0(0x01CB8284,param_1,0x32,0x42480000,0);
        FUN_00427fb0(param_1,param_2);
        return;
      }
    }
  }
  else if (0.0 < *(float *)(param_2 + 4)) {
    if (*(int *)(param_1 + 0x25640) == 0) {
      uVar4 = 4;
    }
    else {
      uVar4 = 0xb;
    }
    FUN_00503620(iVar1,uVar4,1);
  }
  FUN_00427fb0(param_1,param_2);
  return;
}

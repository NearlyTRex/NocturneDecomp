// Name: FUN_0051fb40
// Address: 0051fb40
// Address Range: [[0051fb40, 0051fc8f]]
// Convention: unknown
// Signature: void FUN_0051fb40(int param_1,int param_2)

#include "nocturne.h"

void FUN_0051fb40(int param_1,int param_2)

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
  if (0.0 < fVar2) {
    if (*(float *)(param_2 + 4) <= 0.0) {
      FUN_00427fb0(param_1,param_2);
      return;
    }
    iVar3 = FUN_0051fcb0(param_1);
    if (iVar3 == 0) {
      uVar4 = 0xc;
    }
    else {
      uVar4 = 0xd;
    }
    FUN_00503620(iVar1,uVar4,1);
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"scat-hurt-?.wav");
    FUN_00427fb0(param_1,param_2);
    return;
  }
  *(uint *)(param_1 + 0x25a8) = 0;
  iVar3 = FUN_005035c0(iVar1);
  if (*(int *)(iVar3 + 0x24) != 5) {
    iVar3 = FUN_005035c0(iVar1);
    if (*(int *)(iVar3 + 0x24) != 4) {
      *(uint *)(param_1 + 0x276c) = 0;
      FUN_00503620(iVar1,4,1);
      FUN_004c9cc0(0x01CB8284,param_1,0x32,0x42480000,0);
    }
  }
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"?scat-die-?.wav" + 1);
  FUN_00427fb0(param_1,param_2);
  return;
}

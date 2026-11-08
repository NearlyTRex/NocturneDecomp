// Name: FUN_00571870
// Address: 00571870
// Address Range: [[00571870, 005719fa]]
// Convention: unknown
// Signature: void FUN_00571870(int param_1,int param_2)

#include "nocturne.h"

void FUN_00571870(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
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
  *(uint *)(param_1 + 0x10a60) = 0x40400000;
  fVar1 = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4);
  iVar2 = param_1 + 0x2b4;
  *(float *)(param_1 + 0x25a8) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x25a8) = 0;
    iVar3 = FUN_005035c0(iVar2);
    if (*(int *)(iVar3 + 0x24) != 9) {
      iVar3 = FUN_005035c0(iVar2);
      if (*(int *)(iVar3 + 0x24) != 8) {
        *(uint *)(param_1 + 0x276c) = 0;
        FUN_00503620(iVar2,8,1);
        FUN_004c9cc0(0x01CB8284,param_1,0x32,0x42480000,0);
        FUN_00551050(*(uint *)(param_1 + 0x9aca8));
        uVar4 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"svet-die.wav");
        *(uint *)(param_1 + 0x9aca8) = uVar4;
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
    FUN_00503620(iVar2,uVar4,1);
    iVar2 = FUN_00550b70(*(uint *)(param_1 + 0x9aca8));
    if (iVar2 == 0) {
      uVar4 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"svet-hurt?.wav");
      *(uint *)(param_1 + 0x9aca8) = uVar4;
      FUN_00427fb0(param_1,param_2);
      return;
    }
  }
  FUN_00427fb0(param_1,param_2);
  return;
}

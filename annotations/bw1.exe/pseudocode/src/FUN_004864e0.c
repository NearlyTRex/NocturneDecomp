// Name: FUN_004864e0
// Address: 004864e0
// Address Range: [[004864e0, 00486647]]
// Convention: unknown
// Signature: void FUN_004864e0(int param_1,int param_2)

#include "nocturne.h"

void FUN_004864e0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  FUN_00573a80(*(uint *)(param_1 + 0xc27c));
  FUN_00573a80(*(uint *)(param_1 + 0xc278));
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x2538) = fVar1;
  if (0.0 < fVar1) {
    FUN_00573a80(*(uint *)(param_1 + 0xc278));
    iVar2 = FUN_005735a0(*(uint *)(param_1 + 0xc274));
    if (iVar2 == 0) {
      uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"drone-hurt?.wav");
      *(uint *)(param_1 + 0xc274) = uVar3;
    }
    iVar2 = FUN_0040cc60(0,2);
    if (iVar2 == 0) {
      FUN_005247c0(param_1 + 0x158,3,1);
    }
    if (iVar2 == 1) {
      FUN_005247c0(param_1 + 0x158,4,1);
    }
    if (iVar2 == 2) {
      FUN_005247c0(param_1 + 0x158,5,1);
      FUN_004a0f00(param_1,param_2);
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0x2538) = 0;
    iVar2 = FUN_00524770(param_1 + 0x158);
    if ((*(int *)(iVar2 + 0x24) != 8) && (*(int *)(iVar2 + 0x24) != 7)) {
      FUN_005247c0(param_1 + 0x158,7,1);
    }
    FUN_00573a80(*(uint *)(param_1 + 0xc274));
    FUN_00573a80(*(uint *)(param_1 + 0xc278));
    uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"drone-die?.wav");
    *(uint *)(param_1 + 0xc274) = uVar3;
  }
  FUN_004a0f00(param_1,param_2);
  return;
}

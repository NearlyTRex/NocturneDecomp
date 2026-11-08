// Name: FUN_00541c70
// Address: 00541c70
// Address Range: [[00541c70, 00541dbf]]
// Convention: unknown
// Signature: void FUN_00541c70(int param_1,int param_2)

#include "nocturne.h"

void FUN_00541c70(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  
  if ((*(uint *)(param_1 + 0xc1d0) & 0x7fffffff) != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)(0x01CCF390 + 0x1ec) != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)(0x01CCF390 + 0x248) == 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  *(uint *)(param_1 + 0xc1d0) = 0x3F000000;
  fVar2 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  iVar1 = param_1 + 0x158;
  *(float *)(param_1 + 0x2538) = fVar2;
  if (0.0 < fVar2) {
    if (*(float *)(param_2 + 4) <= 0.0) {
      FUN_004319e0(param_1,param_2);
      return;
    }
    iVar3 = FUN_00541de0(param_1);
    if (iVar3 == 0) {
      uVar4 = 0xc;
    }
    else {
      uVar4 = 0xd;
    }
    FUN_005247c0(iVar1,uVar4,1);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"scat-hurt-?.wav");
    FUN_004319e0(param_1,param_2);
    return;
  }
  *(uint *)(param_1 + 0x2538) = 0;
  iVar3 = FUN_00524770(iVar1);
  if (*(int *)(iVar3 + 0x24) != 5) {
    iVar3 = FUN_00524770(iVar1);
    if (*(int *)(iVar3 + 0x24) != 4) {
      *(uint *)(param_1 + 0x26fc) = 0;
      FUN_005247c0(iVar1,4,1);
      FUN_004e64d0(0x01CD0E3C,param_1,0x32,0x42480000,0);
    }
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"?scat-die-?.wav" + 1);
  FUN_004319e0(param_1,param_2);
  return;
}

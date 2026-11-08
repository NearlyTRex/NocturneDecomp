// Name: FUN_004634d0
// Address: 004634d0
// Address Range: [[004634d0, 004635d6]]
// Convention: unknown
// Signature: void FUN_004634d0(int param_1,int param_2)

#include "nocturne.h"

void FUN_004634d0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x2538) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2538) = 0;
    iVar2 = FUN_004fc070(param_1 + 0x158);
    if (0xf < *(int *)(iVar2 + 0x24)) goto LAB_0046352b;
    iVar2 = FUN_0040cea0(0,100);
    if (iVar2 < 0x21) {
      uVar3 = 0x10;
    }
    else if (iVar2 < 0x42) {
      uVar3 = 0x11;
    }
    else {
      uVar3 = 0x12;
    }
  }
  else {
    iVar2 = FUN_0048a1b0(param_1,*(uint *)(param_2 + 4));
    if (iVar2 == 0) goto LAB_0046352b;
    iVar2 = FUN_0040cea0(0,100);
    if (iVar2 < 0x21) {
      uVar3 = 0xd;
    }
    else if (iVar2 < 0x42) {
      uVar3 = 0xe;
    }
    else {
      uVar3 = 0xf;
    }
  }
  FUN_004fc0d0(param_1 + 0x158,uVar3,1);
LAB_0046352b:
  iVar2 = FUN_00560af0(0x02CF5680,*(uint *)(param_1 + 0xd05c));
  if (iVar2 != 0) {
    FUN_00489b80(param_1,param_2);
    return;
  }
  uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"dog2.wav");
  *(uint *)(param_1 + 0xd05c) = uVar3;
  FUN_00489b80(param_1,param_2);
  return;
}

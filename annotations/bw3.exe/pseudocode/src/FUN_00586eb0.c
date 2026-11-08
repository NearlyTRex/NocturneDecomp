// Name: FUN_00586eb0
// Address: 00586eb0
// Address Range: [[00586eb0, 00586f8d]]
// Convention: unknown
// Signature: void FUN_00586eb0(int param_1,int param_2)

#include "nocturne.h"

void FUN_00586eb0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x2538) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2538) = 0;
    iVar2 = FUN_004fc070(param_1 + 0x158);
    iVar2 = *(int *)(iVar2 + 0x24);
    if ((((iVar2 == 0x13) || (iVar2 == 0x10)) || (iVar2 == 0x14)) ||
       (((iVar2 == 0x11 || (iVar2 == 0x15)) || (iVar2 == 0x12)))) goto LAB_00586ef3;
    iVar2 = FUN_0040cea0(0,2,1);
    iVar2 = iVar2 + 0x10;
  }
  else {
    iVar2 = FUN_0040cea0(0,2,1);
    iVar2 = iVar2 + 0xd;
  }
  FUN_004fc0d0(param_1 + 0x158,iVar2);
LAB_00586ef3:
  iVar2 = FUN_00560af0(0x02CF5680,*(uint *)(param_1 + 0xd070));
  if (iVar2 != 0) {
    FUN_00489b80(param_1,param_2);
    return;
  }
  uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"dog2.wav");
  *(uint *)(param_1 + 0xd070) = uVar3;
  FUN_00489b80(param_1,param_2);
  return;
}

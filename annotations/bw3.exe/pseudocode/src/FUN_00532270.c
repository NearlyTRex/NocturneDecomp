// Name: FUN_00532270
// Address: 00532270
// Address Range: [[00532270, 00532369]]
// Convention: unknown
// Signature: void FUN_00532270(int param_1,int param_2)

#include "nocturne.h"

void FUN_00532270(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  iVar4 = param_1 + 0x158;
  *(float *)(param_1 + 0x2538) = fVar1;
  if (0.0 < fVar1) {
    iVar2 = FUN_0040cea0(0,2);
    if (iVar2 == 0) {
      FUN_004fc0d0(iVar4,5,1);
    }
    if (iVar2 == 1) {
      FUN_004fc0d0(param_1 + 0x158,6,1);
    }
    if (iVar2 == 2) {
      FUN_004fc0d0(param_1 + 0x158,7,1);
    }
    iVar4 = FUN_00556700(*(uint *)(param_1 + 0xd054));
    if (iVar4 != 0) goto LAB_005322ed;
    pcVar5 = "sentinel-hurt?.wav";
  }
  else {
    *(uint *)(param_1 + 0x2538) = 0;
    iVar2 = FUN_004fc070(iVar4);
    if ((*(int *)(iVar2 + 0x24) == 8) || (*(int *)(iVar2 + 0x24) == 9)) goto LAB_005322ed;
    FUN_004fc0d0(iVar4,8,1);
    FUN_00556be0(*(uint *)(param_1 + 0xd054));
    pcVar5 = "sentinel-die.wav";
  }
  uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,pcVar5);
  *(uint *)(param_1 + 0xd054) = uVar3;
LAB_005322ed:
  FUN_00489b80(param_1,param_2);
  return;
}

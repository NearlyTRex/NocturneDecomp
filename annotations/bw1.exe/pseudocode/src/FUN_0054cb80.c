// Name: FUN_0054cb80
// Address: 0054cb80
// Address Range: [[0054cb80, 0054cc79]]
// Convention: unknown
// Signature: void FUN_0054cb80(int param_1,int param_2)

#include "nocturne.h"

void FUN_0054cb80(int param_1,int param_2)

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
    iVar2 = FUN_0040cc60(0,2);
    if (iVar2 == 0) {
      FUN_005247c0(iVar4,5,1);
    }
    if (iVar2 == 1) {
      FUN_005247c0(param_1 + 0x158,6,1);
    }
    if (iVar2 == 2) {
      FUN_005247c0(param_1 + 0x158,7,1);
    }
    iVar4 = FUN_005735a0(*(uint *)(param_1 + 0xc268));
    if (iVar4 != 0) goto LAB_0054cbfd;
    pcVar5 = "sentinel-hurt?.wav";
  }
  else {
    *(uint *)(param_1 + 0x2538) = 0;
    iVar2 = FUN_00524770(iVar4);
    if ((*(int *)(iVar2 + 0x24) == 8) || (*(int *)(iVar2 + 0x24) == 9)) goto LAB_0054cbfd;
    FUN_005247c0(iVar4,8,1);
    FUN_00573a80(*(uint *)(param_1 + 0xc268));
    pcVar5 = "sentinel-die.wav";
  }
  uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,pcVar5);
  *(uint *)(param_1 + 0xc268) = uVar3;
LAB_0054cbfd:
  FUN_004a0f00(param_1,param_2);
  return;
}

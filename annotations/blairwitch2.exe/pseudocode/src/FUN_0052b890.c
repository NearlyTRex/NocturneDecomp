// Name: FUN_0052b890
// Address: 0052b890
// Address Range: [[0052b890, 0052b989]]
// Convention: unknown
// Signature: void FUN_0052b890(int param_1,int param_2)

#include "nocturne.h"

void FUN_0052b890(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  
  fVar1 = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4);
  iVar4 = param_1 + 0x2b4;
  *(float *)(param_1 + 0x25a8) = fVar1;
  if (0.0 < fVar1) {
    iVar2 = FUN_0040cfc0(0,2);
    if (iVar2 == 0) {
      FUN_00503620(iVar4,5,1);
    }
    if (iVar2 == 1) {
      FUN_00503620(param_1 + 0x2b4,6,1);
    }
    if (iVar2 == 2) {
      FUN_00503620(param_1 + 0x2b4,7,1);
    }
    iVar4 = FUN_00550b70(*(uint *)(param_1 + 0x10af8));
    if (iVar4 != 0) goto LAB_0052b90d;
    pcVar5 = "sentinel-hurt?.wav";
  }
  else {
    *(uint *)(param_1 + 0x25a8) = 0;
    iVar2 = FUN_005035c0(iVar4);
    if ((*(int *)(iVar2 + 0x24) == 8) || (*(int *)(iVar2 + 0x24) == 9)) goto LAB_0052b90d;
    FUN_00503620(iVar4,8,1);
    FUN_00551050(*(uint *)(param_1 + 0x10af8));
    pcVar5 = "sentinel-die.wav";
  }
  uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,pcVar5);
  *(uint *)(param_1 + 0x10af8) = uVar3;
LAB_0052b90d:
  FUN_00488890(param_1,param_2);
  return;
}

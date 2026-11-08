// Name: FUN_0042b0e0
// Address: 0042b0e0
// Address Range: [[0042b0e0, 0042b3fd]]
// Convention: unknown
// Signature: void FUN_0042b0e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042b0e0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  FUN_00408890(param_1);
  *(uint *)(param_1 + 0x2504) = _DAT_005dd234;
  *(uint *)(param_1 + 0x3284) = 0;
  FUN_004625f0(&DAT_007e2b34,"stake_b.kfm");
  FUN_00462580(&DAT_007e2b34);
  iVar5 = param_1;
  do {
    iVar3 = *(int *)(iVar5 + 0x25b0);
    if (iVar3 != 0) {
      iVar4 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x94))(iVar3);
      if (iVar4 == 0) {
        (**(code **)(*(int *)(iVar3 + 0x154) + 0x88))(iVar3,param_1);
      }
      else if (iVar4 != param_1) {
        _DAT_01d71de0 = "..\\core\\charactr.cpp";
        _DAT_01d71de4 = 0x145;
        FUN_004e4330("%s is carrying %s, but %s thinks it is being carried by %s",param_1,iVar3,iVar3,iVar4);
      }
    }
    iVar5 = iVar5 + 0x78;
  } while (iVar5 != param_1 + 0xf0);
  if (*(char *)(param_1 + 0x24a8) != '\0') {
    *(uint *)(param_1 + 0x1ac) = *(uint *)(param_1 + 0x27b8);
    FUN_0054e6b0(param_1 + 0x158);
    uVar2 = FUN_0054eac0(param_1 + 0x158,"bip01 head",0);
    uVar2 = FUN_00548090(uVar2);
    *(uint *)(param_1 + 0x2774) = uVar2;
  }
  FUN_004322a0(param_1);
  if (*(int *)(param_1 + 0x27a4) != 0) {
    iVar3 = FUN_0054eac0(param_1 + 0x158);
    iVar5 = 0;
    *(uint *)(param_1 + 0x33a4) = 4;
    iVar4 = FUN_005a3260(param_1 + 0x24a8,"shadow.dfm");
    if (iVar4 == 0) {
      iVar5 = 0x10;
    }
    if (iVar5 < *(int *)(iVar3 + 0x1de78)) {
      do {
        iVar4 = iVar5 + 1;
        FUN_0042e4b0(param_1,iVar3,iVar5);
        iVar5 = iVar4;
      } while (iVar4 < *(int *)(iVar3 + 0x1de78));
    }
    iVar4 = 0;
    iVar5 = param_1;
    iVar3 = param_1;
    if (0 < *(int *)(param_1 + 0x33a0)) {
      do {
        *(uint *)(iVar5 + 0x3a04) = 4;
        *(uint *)(iVar3 + 0x33c0) = 0x40000000;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x2a4;
        iVar3 = iVar3 + 0x18;
      } while (iVar4 < *(int *)(param_1 + 0x33a0));
    }
  }
  iVar3 = param_1 + 0x2f08;
  FUN_0043f920(iVar3);
  iVar5 = param_1 + 0x158;
  FUN_0043fbc0(iVar3,param_1 + 0x20,param_1 + 0x30,iVar5,iVar5);
  FUN_0043fc00(iVar3,param_1 + 0x20,param_1 + 0x30,0x3d4ccccd,*(uint *)(param_1 + 0x2504),
               iVar5);
  FUN_00433880(param_1);
  if (*(char *)(param_1 + 0x2544) == '\0') {
    iVar5 = FUN_00408870(param_1);
    pcVar6 = (char *)(iVar5 + 1);
    pcVar7 = (char *)(param_1 + 0x2544);
    do {
      cVar1 = *pcVar6;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
  }
  *(uint *)(param_1 + 0xbc64) = 0;
  if (*(int *)(param_1 + 0xcdc4) != 0) {
    *(uint *)(param_1 + 0xf8) = 0;
    *(uint *)(param_1 + 0xfc) = 1;
  }
  *(uint *)(param_1 + 0x2764) = 0;
  *(uint *)(param_1 + 0x273c) = 0;
  *(uint *)(param_1 + 0x2760) = 0;
  uVar2 = FUN_0040ce40(0x3f000000,0x3f800000);
  *(uint *)(param_1 + 0x30c4) = uVar2;
  uVar2 = FUN_0040ce40(0x3f000000,0x3f800000);
  *(uint *)(param_1 + 0x30c8) = uVar2;
  *(uint *)(param_1 + 0x30cc) = 0;
  return;
}

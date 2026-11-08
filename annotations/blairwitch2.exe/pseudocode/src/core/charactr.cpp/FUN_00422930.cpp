// Name: FUN_00422930
// Address: 00422930
// Address Range: [[00422930, 00422bd6]]
// Convention: unknown
// Signature: void FUN_00422930(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00422930(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  FUN_00408a80(param_1);
  *(uint *)(param_1 + 0x2574) = _DAT_005f4084;
  *(uint *)(param_1 + 0x3448) = 0;
  FUN_0044fd70(&DAT_007bdadc,"stake_b.kfm");
  FUN_0044fd00(&DAT_007bdadc);
  iVar5 = param_1;
  do {
    iVar3 = *(int *)(iVar5 + 0x2620);
    if (iVar3 != 0) {
      iVar4 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x9c))(iVar3);
      if (iVar4 == 0) {
        (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x90))(iVar3,param_1);
      }
      else if (iVar4 != param_1) {
        _DAT_01d046a0 = "..\\core\\charactr.cpp";
        _DAT_01d046a4 = 0x151;
        FUN_004e4500("%s is carrying %s, but %s thinks it is being carried by %s",param_1,iVar3,iVar3,iVar4);
      }
    }
    iVar5 = iVar5 + 0x78;
  } while (iVar5 != param_1 + 0xf0);
  if (*(char *)(param_1 + 0x2514) != '\0') {
    *(uint *)(param_1 + 0x308) = *(uint *)(param_1 + 0x2824);
    FUN_00547480(param_1 + 0x2b4);
    uVar2 = FUN_00547890(param_1 + 0x2b4,"bip01 head",0);
    uVar2 = FUN_00540e80(uVar2);
    *(uint *)(param_1 + 0x27e0) = uVar2;
  }
  FUN_00429390(param_1);
  if (*(int *)(param_1 + 0x2810) != 0) {
    iVar3 = FUN_00547890(param_1 + 0x2b4);
    iVar5 = 0;
    *(uint *)(param_1 + 0x3568) = 4;
    iVar4 = FUN_005b8130(param_1 + 0x2514,"shadow.dfm");
    if (iVar4 == 0) {
      iVar5 = 0x10;
    }
    if (iVar5 < *(int *)(iVar3 + 0x1d1f8)) {
      do {
        iVar4 = iVar5 + 1;
        FUN_00425bb0(param_1,iVar3,iVar5);
        iVar5 = iVar4;
      } while (iVar4 < *(int *)(iVar3 + 0x1d1f8));
    }
    iVar4 = 0;
    iVar5 = param_1;
    iVar3 = param_1;
    if (0 < *(int *)(param_1 + 0x3564)) {
      do {
        *(uint *)(iVar5 + 0x3d24) = 4;
        *(uint *)(iVar3 + 0x3584) = 0x40000000;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x400;
        iVar3 = iVar3 + 0x18;
      } while (iVar4 < *(int *)(param_1 + 0x3564));
    }
  }
  iVar3 = param_1 + 0x2d0c;
  FUN_005b14a0(iVar3);
  iVar5 = param_1 + 0x2b4;
  FUN_005b1740(iVar3,param_1 + 0x20,param_1 + 0x30,iVar5,iVar5);
  FUN_005b1780(iVar3,param_1 + 0x20,param_1 + 0x30,0x41200000,*(uint *)(param_1 + 0x2574),
               iVar5);
  FUN_0042a3d0(param_1);
  if (*(char *)(param_1 + 0x25b4) != '\0') {
    *(uint *)(param_1 + 0x10220) = 0;
    return;
  }
  iVar5 = FUN_00408a50(param_1);
  pcVar6 = (char *)(iVar5 + 1);
  pcVar7 = (char *)(param_1 + 0x25b4);
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  *(uint *)(param_1 + 0x10220) = 0;
  return;
}

// Name: FUN_005740b0
// Address: 005740b0
// Address Range: [[005740b0, 00574260]]
// Convention: unknown
// Signature: undefined4 FUN_005740b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005740b0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = 2;
  iVar7 = 2;
  iVar1 = FUN_00574540(param_1,0x3d,2,2);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (iVar1 == param_1) {
      return 0xffffffff;
    }
    iVar4 = (iVar1 - param_1 >> 1) * 2;
    iVar3 = malloc(iVar4 + 2);
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    iVar8 = iVar3;
    FUN_00571410(iVar3,param_1,iVar4,iVar6,iVar7,iVar3);
    *(ushort *)(iVar3 + iVar4) = 0;
    iVar4 = FUN_005713e0(iVar1 + 2);
    if (iVar4 == 0) {
      iVar5 = 0;
    }
    else {
      iVar4 = iVar4 * 2;
      iVar5 = malloc(iVar4 + 2);
      if (iVar5 == 0) {
        FUN_005638d0(iVar3);
        return 0xffffffff;
      }
      FUN_00571410(iVar5,iVar1 + 2,iVar4);
      *(ushort *)(iVar5 + iVar4) = 0;
    }
    iVar1 = FUN_00574570(iVar8,iVar5);
    FUN_005638d0(iVar8);
    FUN_005638d0(iVar5);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    if (_DAT_02de54a8 == 0) {
      FUN_00574680();
    }
    iVar1 = FUN_00574264(param_1);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    iVar1 = FUN_005713e0(param_1);
    iVar6 = malloc(iVar6 * (iVar1 + 1));
    if (iVar6 == 0) {
      FUN_0056c6d0(5);
      return 0xffffffff;
    }
    iVar1 = FUN_00570bd0(iVar6,param_1,(iVar1 + 1) * iVar7);
    if (iVar1 == -1) {
      FUN_005638d0(iVar6);
      return 0xffffffff;
    }
    uVar2 = FUN_00573afc(iVar6);
  }
  return uVar2;
}

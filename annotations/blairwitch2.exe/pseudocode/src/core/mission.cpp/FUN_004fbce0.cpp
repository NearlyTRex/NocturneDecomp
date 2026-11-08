// Name: FUN_004fbce0
// Address: 004fbce0
// Address Range: [[004fbce0, 004fc03f]]
// Convention: unknown
// Signature: void FUN_004fbce0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fbce0(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  *(uint *)(param_1 + 0x100c) = 7;
  FUN_005b8010(param_2,"// mission version, actor version\n");
  FUN_005b8010(param_2,"%d,%d\n",*(uint *)(param_1 + 0x100c),4);
  FUN_005b8010(param_2,"// Root name of mission\n");
  FUN_005b8010(param_2,&DAT_005de4b4,param_1 + 0x1014);
  FUN_005b8010(param_2,"// setList\n");
  iVar4 = 0;
  FUN_005b8010(param_2,&DAT_005de4c4,*(uint *)(param_1 + 4));
  if (0 < *(int *)(param_1 + 4)) {
    iVar5 = param_1 + 8;
    do {
      iVar4 = iVar4 + 1;
      FUN_005b8010(param_2,&DAT_005de4c8,iVar5);
      iVar5 = iVar5 + 0x100;
    } while (iVar4 < *(int *)(param_1 + 4));
  }
  FUN_005b8010(param_2,"// actorTypeList\n");
  FUN_005b8010(param_2,&DAT_005de4de,DAT_007bc044);
  FUN_0040c920();
  iVar4 = 0;
  if (0 < DAT_007bc044) {
    iVar5 = 0;
    do {
      piVar1 = (int *)((int)&DAT_007bc048 + iVar5);
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 1;
      FUN_005b8010(param_2,"%s %d\n",*piVar1,*(uint *)(*piVar1 + 0x34));
    } while (iVar4 < DAT_007bc044);
  }
  FUN_005b8010(param_2,"// actor count\n");
  uVar2 = FUN_004fc320(param_1);
  FUN_005b8010(param_2,&DAT_005de4f9,uVar2);
  iVar5 = 0;
  FUN_005b8010(param_2,"// inventory actor count\n");
  for (iVar4 = *(int *)(param_1 + 0x1114); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x14c)) {
    iVar3 = FUN_0040c8f0(iVar4,_DAT_01cedf50);
    if (iVar3 != 0) {
      iVar5 = iVar5 + *(int *)(iVar3 + 0x2438c);
    }
  }
  FUN_005b8010(param_2,&DAT_005de517,iVar5);
  FUN_005b8010(param_2,"// actor name list\n");
  iVar4 = *(int *)(param_1 + 0x1114);
  *(uint *)(param_1 + 0x1458) = 0;
  for (; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x14c)) {
    uVar2 = FUN_00408a50(iVar4,iVar4);
    FUN_005b8010(param_2,"%s \"%s\"\n",uVar2);
    if (2999 < *(int *)(param_1 + 0x1458)) {
      _DAT_01d046a0 = "..\\core\\mission.cpp";
      _DAT_01d046a4 = 0x1ed;
      FUN_004e4500("Too many actors");
    }
    *(int *)(param_1 + 0x145c + *(int *)(param_1 + 0x1458) * 4) = iVar4;
    *(int *)(param_1 + 0x1458) = *(int *)(param_1 + 0x1458) + 1;
  }
  for (iVar4 = *(int *)(param_1 + 0x1114); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x14c)) {
    iVar5 = FUN_0040c8f0(iVar4,_DAT_01cedf50);
    if (iVar5 != 0) {
      iVar3 = iVar5 + 0x2437c;
      for (iVar6 = 0; iVar6 < *(int *)(iVar5 + 0x2438c); iVar6 = iVar6 + 1) {
        if (2999 < *(int *)(param_1 + 0x1458)) {
          _DAT_01d046a0 = "..\\core\\mission.cpp";
          _DAT_01d046a4 = 0x1f8;
          FUN_004e4500("Too many actors");
        }
        *(uint *)(param_1 + 0x145c + *(int *)(param_1 + 0x1458) * 4) =
             *(uint *)(iVar3 + 0x14);
        iVar3 = iVar3 + 4;
        *(int *)(param_1 + 0x1458) = *(int *)(param_1 + 0x1458) + 1;
      }
      FUN_004dc460(iVar5 + 0x2437c,param_2);
    }
  }
  FUN_005b8010(param_2,"// actor data list\n");
  for (iVar4 = *(int *)(param_1 + 0x1114); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x14c)) {
    FUN_0040b0a0(iVar4,param_2);
  }
  FUN_004c9f20(0x01CB8284,param_2);
  *(uint *)(param_1 + 0x1458) = 0;
  return;
}

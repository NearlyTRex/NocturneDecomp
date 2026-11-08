// Name: FUN_0051ac40
// Address: 0051ac40
// Address Range: [[0051ac40, 0051af9f]]
// Convention: unknown
// Signature: void FUN_0051ac40(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051ac40(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  *(uint *)(param_1 + 0x100c) = 7;
  FUN_005c03c0(param_2,"// mission version, actor version\n");
  FUN_005c03c0(param_2,"%d,%d\n",*(uint *)(param_1 + 0x100c),4);
  FUN_005c03c0(param_2,"// Root name of mission\n");
  FUN_005c03c0(param_2,&DAT_005e94f7,param_1 + 0x1018);
  FUN_005c03c0(param_2,"// setList\n");
  iVar4 = 0;
  FUN_005c03c0(param_2,&DAT_005e9507,*(uint *)(param_1 + 4));
  if (0 < *(int *)(param_1 + 4)) {
    iVar5 = param_1 + 8;
    do {
      iVar4 = iVar4 + 1;
      FUN_005c03c0(param_2,&DAT_005e950b,iVar5);
      iVar5 = iVar5 + 0x100;
    } while (iVar4 < *(int *)(param_1 + 4));
  }
  FUN_005c03c0(param_2,"// actorTypeList\n");
  FUN_005c03c0(param_2,&DAT_005e9521,DAT_007c3044);
  FUN_0040c630();
  iVar4 = 0;
  if (0 < DAT_007c3044) {
    iVar5 = 0;
    do {
      piVar1 = (int *)((int)&DAT_007c3048 + iVar5);
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 1;
      FUN_005c03c0(param_2,"%s %d\n",*piVar1,*(uint *)(*piVar1 + 0x34));
    } while (iVar4 < DAT_007c3044);
  }
  FUN_005c03c0(param_2,"// actor count\n");
  uVar2 = FUN_0051b280(param_1);
  FUN_005c03c0(param_2,&DAT_005e953c,uVar2);
  iVar5 = 0;
  FUN_005c03c0(param_2,"// inventory actor count\n");
  for (iVar4 = *(int *)(param_1 + 0x1118); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x14c)) {
    iVar3 = FUN_0040c600(iVar4,_DAT_01d06b10);
    if (iVar3 != 0) {
      iVar5 = iVar5 + *(int *)(iVar3 + 0x1faf8);
    }
  }
  FUN_005c03c0(param_2,&DAT_005e955a,iVar5);
  FUN_005c03c0(param_2,"// actor name list\n");
  iVar4 = *(int *)(param_1 + 0x1118);
  *(uint *)(param_1 + 0x145c) = 0;
  for (; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x14c)) {
    uVar2 = FUN_00408830(iVar4,iVar4);
    FUN_005c03c0(param_2,"%s \"%s\"\n",uVar2);
    if (5999 < *(int *)(param_1 + 0x145c)) {
      _DAT_01d1d400 = "..\\core\\mission.cpp";
      _DAT_01d1d404 = 0x1f0;
      FUN_005030e0("Too many actors");
    }
    *(int *)(param_1 + 0x1460 + *(int *)(param_1 + 0x145c) * 4) = iVar4;
    *(int *)(param_1 + 0x145c) = *(int *)(param_1 + 0x145c) + 1;
  }
  for (iVar4 = *(int *)(param_1 + 0x1118); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x14c)) {
    iVar5 = FUN_0040c600(iVar4,_DAT_01d06b10);
    if (iVar5 != 0) {
      iVar3 = iVar5 + 0x1fae8;
      for (iVar6 = 0; iVar6 < *(int *)(iVar5 + 0x1faf8); iVar6 = iVar6 + 1) {
        if (5999 < *(int *)(param_1 + 0x145c)) {
          _DAT_01d1d400 = "..\\core\\mission.cpp";
          _DAT_01d1d404 = 0x1fb;
          FUN_005030e0("Too many actors");
        }
        *(uint *)(param_1 + 0x1460 + *(int *)(param_1 + 0x145c) * 4) =
             *(uint *)(iVar3 + 0x14);
        iVar3 = iVar3 + 4;
        *(int *)(param_1 + 0x145c) = *(int *)(param_1 + 0x145c) + 1;
      }
      FUN_004f9750(iVar5 + 0x1fae8,param_2);
    }
  }
  FUN_005c03c0(param_2,"// actor data list\n");
  for (iVar4 = *(int *)(param_1 + 0x1118); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x14c)) {
    FUN_0040adb0(iVar4,param_2);
  }
  FUN_004e6730(0x01CD0E3C,param_2);
  *(uint *)(param_1 + 0x145c) = 0;
  return;
}

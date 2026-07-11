// Name: FUN_004c1580
// Address: 004c1580
// Address Range: [[004c1580, 004c182a]]
// Convention: unknown
// Signature: undefined4 FUN_004c1580(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004c1580(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  char local_114 [256];
  int local_14;
  
  bVar6 = 0;
  iVar2 = FUN_0040d7e0(param_2,"CAmmo");
  if (iVar2 == 0) {
    iVar2 = FUN_0040d7e0(param_2,"CWeapon");
    if (iVar2 != 0) {
      FUN_004c0850(param_1,param_2,5,1);
      return 0;
    }
    iVar2 = FUN_0040d7e0(param_2,"CHealthItem");
    if (iVar2 == 0) {
      iVar2 = FUN_0040d7e0(param_2,"CGasMask");
      if (iVar2 != 0) {
        iVar2 = FUN_0040d890(param_2,_DAT_01c78bbc);
        *(uint *)(iVar2 + 0x2cc) = (uint)(*(int *)(iVar2 + 0x2cc) == 0);
        *(int *)(param_1 + 0x454) = iVar2;
        return 0;
      }
      iVar2 = FUN_0040d7e0(param_2,"CBoxActor");
      if (iVar2 != 0) {
        iVar2 = FUN_0040d890(param_2,DAT_00764838);
        FUN_0047ab70(0x01C03A10,iVar2 + 0x5f8);
        return 0;
      }
    }
    else {
      local_14 = FUN_0040d890(param_2,_DAT_01cae0d0);
      if (local_14 == 0) {
        _DAT_01cc4800 = "..\\core\\inv.cpp";
        _DAT_01cc4804 = 0x5c9;
        FUN_004c8440("CInventory::select - Catch 22");
      }
      if ((float)_DAT_00587401 < *(float *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x2434)) {
        return 1;
      }
      pcVar3 = (char *)FUN_004ee370("You have used : ");
      pcVar4 = local_114;
      do {
        cVar1 = *pcVar3;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_004beca0(param_2);
      iVar2 = -1;
      pcVar3 = local_114;
      do {
        pcVar5 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar5 = pcVar3 + (uint)bVar6 * -2 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar5;
      } while (cVar1 != '\0');
      pcVar5 = pcVar5 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_004ee370(&DAT_005873e7);
      iVar2 = -1;
      pcVar3 = local_114;
      do {
        pcVar5 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar5 = pcVar3 + (uint)bVar6 * -2 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar5;
      } while (cVar1 != '\0');
      pcVar5 = pcVar5 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
      FUN_0049aa30(0x01C775EC,local_114,0x40a00000);
      iVar2 = FUN_004b43f0(local_14,*(uint *)(_DAT_01cae0e8 * 4 + 0x1cae0d8));
      if (iVar2 < 1) {
        FUN_004c07b0(param_1,param_2,1);
        return 1;
      }
    }
  }
  else {
    iVar2 = FUN_0040d890(param_2,DAT_007641f4);
    if (iVar2 == 0) {
      _DAT_01cc4800 = "..\\core\\inv.cpp";
      _DAT_01cc4804 = 0x5c3;
      FUN_004c8440("CInventory::select - Catch 22");
    }
    FUN_004c1b90(param_1,*(uint *)(iVar2 + 0x310));
  }
  return 0;
}

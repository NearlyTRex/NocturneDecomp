// Name: FUN_004dcb40
// Address: 004dcb40
// Address Range: [[004dcb40, 004dcd9c]]
// Convention: unknown
// Signature: undefined4 FUN_004dcb40(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004dcb40(uint param_1,uint param_2)

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
  iVar2 = FUN_0040c790(param_2,"CAmmo");
  if (iVar2 == 0) {
    iVar2 = FUN_0040c790(param_2,"CWeapon");
    if (iVar2 != 0) {
      FUN_004dbb40(param_1,param_2,5,1);
      return 0;
    }
    iVar2 = FUN_0040c790(param_2,"CHealthItem");
    if (iVar2 == 0) {
      iVar2 = FUN_0040c790(param_2,"CBoxActor");
      if (iVar2 != 0) {
        iVar2 = FUN_0040c840(param_2,DAT_007e17b4);
        FUN_0048c150(0x01C6E360,iVar2 + 0x600);
        return 0;
      }
    }
    else {
      local_14 = FUN_0040c840(param_2,_DAT_01d5b9b4);
      if (local_14 == 0) {
        _DAT_01d71de0 = "..\\core\\inv.cpp";
        _DAT_01d71de4 = 0x7c2;
        FUN_004e4330("CInventory::select - Catch 22");
      }
      if ((float)_DAT_005c65d7 < *(float *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2538)) {
        return 1;
      }
      pcVar3 = (char *)FUN_00508960("You have used : ");
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
      pcVar4 = (char *)FUN_004d9e40(param_2);
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
      pcVar4 = (char *)FUN_00508960(&DAT_005c65c5);
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
      FUN_004b46b0(0x01D2130C,local_114,0x40a00000);
      iVar2 = FUN_004d20c0(local_14,*(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04));
      if (iVar2 < 1) {
        FUN_004dbaa0(param_1,param_2,1);
        return 1;
      }
    }
  }
  else {
    iVar2 = FUN_0040c840(param_2,DAT_007dfd24);
    if (iVar2 == 0) {
      _DAT_01d71de0 = "..\\core\\inv.cpp";
      _DAT_01d71de4 = 0x7bc;
      FUN_004e4330("CInventory::select - Catch 22");
    }
    FUN_004dd2d0(param_1,*(uint *)(iVar2 + 0x318));
  }
  return 0;
}

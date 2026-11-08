// Name: FUN_004f9bd0
// Address: 004f9bd0
// Address Range: [[004f9bd0, 004f9ec5]]
// Convention: unknown
// Signature: undefined4 FUN_004f9bd0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004f9bd0(int param_1,uint param_2)

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
  iVar2 = FUN_0040c550(param_2,"CAmmo");
  if (iVar2 == 0) {
    iVar2 = FUN_0040c550(param_2,"CWeapon");
    if (iVar2 != 0) {
      FUN_004f8dc0(param_1,param_2,5,1);
      return 0;
    }
    iVar2 = FUN_0040c550(param_2,"CHealthItem");
    if (iVar2 == 0) {
      iVar2 = FUN_0040c550(param_2,"CGasMask");
      if (iVar2 != 0) {
        iVar2 = FUN_0040c600(param_2,_DAT_01cd0d40);
        *(uint *)(iVar2 + 0x2d4) = (uint)(*(int *)(iVar2 + 0x2d4) == 0);
        *(int *)(param_1 + 0x45c) = iVar2;
        return 0;
      }
      iVar2 = FUN_0040c550(param_2,"CGoggles");
      if (iVar2 != 0) {
        iVar2 = FUN_0040c600(param_2,_DAT_01cd0e38);
        *(uint *)(iVar2 + 0x2d4) = (uint)(*(int *)(iVar2 + 0x2d4) == 0);
        *(int *)(param_1 + 0x460) = iVar2;
        return 0;
      }
      iVar2 = FUN_0040c550(param_2,"CBoxActor");
      if (iVar2 != 0) {
        iVar2 = FUN_0040c600(param_2,DAT_007c5094);
        FUN_004a1b70(0x01C51D80,iVar2 + 0x600);
        return 0;
      }
    }
    else {
      local_14 = FUN_0040c600(param_2,_DAT_01d06a90);
      if (local_14 == 0) {
        _DAT_01d1d400 = "..\\core\\inv.cpp";
        _DAT_01d1d404 = 0x726;
        FUN_005030e0("CInventory::select - Catch 22");
      }
      if ((float)_DAT_005e67f0 < *(float *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x2538)) {
        return 1;
      }
      pcVar3 = (char *)FUN_00531090("You have used : ");
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
      pcVar4 = (char *)FUN_004f62e0(param_2);
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
      pcVar4 = (char *)FUN_00531090(&DAT_005e67ce);
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
      FUN_004cc190(0x01CCF390,local_114,0x40a00000);
      iVar2 = FUN_004ea530(local_14,*(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4));
      if (iVar2 < 1) {
        FUN_004f8d00(param_1,param_2,1);
        return 1;
      }
    }
  }
  else {
    iVar2 = FUN_0040c600(param_2,DAT_007c33a4);
    if (iVar2 == 0) {
      _DAT_01d1d400 = "..\\core\\inv.cpp";
      _DAT_01d1d404 = 0x720;
      FUN_005030e0("CInventory::select - Catch 22");
    }
    FUN_004fa4e0(param_1,*(uint *)(iVar2 + 0x318));
  }
  return 0;
}

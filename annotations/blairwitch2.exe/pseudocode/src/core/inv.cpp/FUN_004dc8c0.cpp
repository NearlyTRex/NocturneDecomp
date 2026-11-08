// Name: FUN_004dc8c0
// Address: 004dc8c0
// Address Range: [[004dc8c0, 004dcca3]]
// Convention: unknown
// Signature: undefined4 FUN_004dc8c0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004dc8c0(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  char local_218 [256];
  char local_118 [256];
  int local_18;
  int local_14;
  
  bVar7 = 0;
  iVar2 = FUN_0040c840(param_2,"CAmmo");
  if (iVar2 == 0) {
    iVar2 = FUN_0040c840(param_2,"CWeapon");
    if (iVar2 != 0) {
      FUN_004db9d0(param_1,param_2,5,1);
      return 0;
    }
    iVar2 = FUN_0040c840(param_2,"CHealthItem");
    if (iVar2 == 0) {
      iVar2 = FUN_0040c840(param_2,"CGasMask");
      if (iVar2 != 0) {
        iVar2 = FUN_0040c8f0(param_2,_DAT_01cb81c4);
        *(uint *)(iVar2 + 0x430) = (uint)(*(int *)(iVar2 + 0x430) == 0);
        *(int *)(param_1 + 0x458) = iVar2;
        return 0;
      }
      iVar2 = FUN_0040c840(param_2,"CBoxActor");
      if (iVar2 != 0) {
        iVar2 = FUN_0040c8f0(param_2,DAT_007bc9e8);
        FUN_00490f80(0x01C38BC0,iVar2 + 0x75c,1);
        return 0;
      }
    }
    else {
      local_18 = FUN_0040c8f0(param_2,_DAT_01ceded8);
      if (local_18 == 0) {
        _DAT_01d046a0 = "..\\core\\inv.cpp";
        _DAT_01d046a4 = 0x6c2;
        FUN_004e4500("CInventory::select - Catch 22");
      }
      if ((float)_DAT_005db9e2 < *(float *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x25a8)) {
        return 1;
      }
      pcVar3 = (char *)FUN_0050fe80("You have used : ");
      pcVar5 = local_118;
      do {
        cVar1 = *pcVar3;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
      pcVar3 = (char *)FUN_004d9f10(param_2);
      iVar2 = -1;
      pcVar5 = local_118;
      do {
        pcVar6 = pcVar5;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar6 = pcVar5 + (uint)bVar7 * -2 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar6;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + -1;
      do {
        cVar1 = *pcVar3;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      pcVar3 = (char *)FUN_0050fe80(&DAT_005db9ca);
      iVar2 = -1;
      pcVar5 = local_118;
      do {
        pcVar6 = pcVar5;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar6 = pcVar5 + (uint)bVar7 * -2 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar6;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + -1;
      do {
        cVar1 = *pcVar3;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      FUN_004b31a0(0x01CB6900,local_118,0x40a00000);
      iVar2 = FUN_004cdf90(local_18,*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4));
      if (iVar2 < 1) {
        FUN_004db8e0(param_1,param_2,1);
        return 1;
      }
    }
    return 0;
  }
  local_14 = FUN_0040c8f0(param_2,DAT_007bc3a4);
  if (local_14 == 0) {
    _DAT_01d046a0 = "..\\core\\inv.cpp";
    _DAT_01d046a4 = 0x6a3;
    FUN_004e4500("CInventory::select - Catch 22");
  }
  iVar2 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  iVar2 = (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x154))(iVar2);
  if (((iVar2 == 0) ||
      (iVar2 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4),
      iVar2 = *(int *)(iVar2 + 0x2498c + *(int *)(iVar2 + 0x247e4) * 4), iVar2 == 0)) ||
     (iVar2 = FUN_0040c840(iVar2,&DAT_005db95d), iVar2 == 0)) {
    return 0;
  }
  iVar2 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  if (5 < *(int *)(*(int *)(iVar2 + 0x2498c + *(int *)(iVar2 + 0x247e4) * 4) + 0x6c4)) {
    return 0;
  }
  pcVar3 = (char *)FUN_0050fe80("Reloading Revolver..");
  pcVar5 = local_218;
  do {
    cVar1 = *pcVar3;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  FUN_004b31a0(0x01CB6900,local_218,0x40a00000);
  iVar4 = FUN_0040e450(local_14,*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4));
  iVar2 = _DAT_01cedef4;
  if (iVar4 != 1) {
    return 0;
  }
  iVar4 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  *(uint *)(*(int *)(iVar4 + 0x2498c + *(int *)(iVar4 + 0x247e4) * 4) + 0x6c4) = 6;
  iVar2 = FUN_0040c8f0(*(uint *)(iVar2 * 4 + 0x1cedee4),_DAT_01b4d2ec);
  if (iVar2 != 0) {
    FUN_0045d260(iVar2);
  }
  if (*(int *)(local_14 + 0x470) != 0) {
    return 0;
  }
  FUN_004db8e0(param_1,param_2,1);
  return 1;
}

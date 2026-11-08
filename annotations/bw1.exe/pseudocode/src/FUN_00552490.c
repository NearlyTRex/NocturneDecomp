// Name: FUN_00552490
// Address: 00552490
// Address Range: [[00552490, 00552707]]
// Convention: unknown
// Signature: int FUN_00552490(int param_1,undefined4 param_2,int *param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00552490(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int aiStackY_1030 [1012];
  byte *puVar6;
  byte *puVar7;
  byte *puVar8;
  byte *puVar9;
  uint uVar10;
  byte *puVar11;
  uint *puVar12;
  uint local_48;
  uint local_3c;
  uint local_30;
  uint local_24;
  int local_18;
  int local_14;
  
  bVar5 = 0;
  if (_DAT_0202a840 != 0) {
    if (_DAT_0202a840 == 1) {
      puVar11 = (byte *)0x0;
      puVar9 = (byte *)0x0;
      puVar8 = (byte *)0x0;
      puVar7 = (byte *)0x0;
      puVar6 = (byte *)0x0;
    }
    else {
      puVar11 = &DAT_0202a874;
      puVar9 = &DAT_0202a868;
      puVar8 = &DAT_0202a85c;
      puVar7 = &DAT_0202a850;
      puVar6 = &DAT_0202a844;
    }
    FUN_00551d50(param_1,puVar6,puVar7,puVar8,puVar9,puVar11);
    _DAT_0202a840 = 0;
  }
  iVar3 = 0;
  iVar2 = 0;
  if (0 < _DAT_0202a374) {
    iVar4 = 0;
    do {
      puVar12 = (uint *)(&DAT_0202a378 + iVar4);
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
      iVar1 = FUN_0044f9c0(0x1fe37ec,param_2,*puVar12,param_3);
      iVar2 = iVar2 + iVar1;
    } while (iVar3 < _DAT_0202a374);
  }
  iVar3 = 0;
  if (0 < _DAT_0202a1f0) {
    iVar4 = 0;
    do {
      puVar12 = (uint *)(&DAT_0202a1f4 + iVar4);
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
      iVar1 = FUN_0044f9c0(0x1fe37ec,param_2,*puVar12,param_3);
      iVar2 = iVar2 + iVar1;
    } while (iVar3 < _DAT_0202a1f0);
  }
  iVar3 = 0;
  if (0 < _DAT_0202a388) {
    iVar4 = 0;
    do {
      puVar12 = (uint *)(&DAT_0202a38c + iVar4);
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
      iVar1 = FUN_0045ef00(*puVar12,param_2,param_3);
      iVar2 = iVar2 + iVar1;
    } while (iVar3 < _DAT_0202a388);
  }
  if ((((*(uint *)(param_1 + 0x14d160) & 0x7fffffff) != 0) && (param_3 != (int *)0x0)) &&
     (iVar3 = ((uint)((longlong)_DAT_02026354 * (longlong)param_3[2]) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_02026354 * (longlong)param_3[2]) >> 0x20) << 0x10) +
              ((uint)((longlong)_DAT_0202634c * (longlong)*param_3) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_0202634c * (longlong)*param_3) >> 0x20) << 0x10) +
              ((uint)((longlong)_DAT_02026350 * (longlong)param_3[1]) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_02026350 * (longlong)param_3[1]) >> 0x20) << 0x10),
     iVar3 < 0)) {
    iVar2 = iVar2 - iVar3;
  }
  local_18 = 0;
  if (0 < *(int *)(param_1 + 0x15acc8)) {
    local_14 = param_1;
    do {
      FUN_00519ff0(*(int *)(local_14 + 0x15accc) + 0x1ec,param_2);
      local_3c = local_48;
      *(uint *)((int)&stack0xffffffc8 + (uint)bVar5 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffbc + (uint)bVar5 * -8);
      *(uint *)(&stack0xffffffcc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffc0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      if (param_3 != (int *)0x0) {
        FUN_0051a0a0(*(int *)(local_14 + 0x15accc) + 0x1ec,param_2,param_3);
        local_30 = local_24;
        *(uint *)((int)&stack0xffffffd4 + (uint)bVar5 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffffe0 + (uint)bVar5 * -8);
        *(uint *)(&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             *(uint *)(&stack0xffffffe4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      }
      iVar3 = 0;
      if (0 < _DAT_01fe55bc) {
        iVar4 = 0;
        do {
          if (param_3 == (int *)0x0) {
            uVar10 = *(uint *)(iVar4 + 0x1fe55c0);
            puVar12 = (uint *)0x0;
          }
          else {
            puVar12 = &stack0xffffffd0;
            uVar10 = *(uint *)(iVar4 + 0x1fe55c0);
          }
          iVar1 = FUN_0044f9c0(0x1fe37ec,&stack0xffffffc4,uVar10,puVar12);
          iVar2 = iVar2 + iVar1;
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar3 < _DAT_01fe55bc);
      }
      local_14 = local_14 + 4;
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(param_1 + 0x15acc8));
  }
  return iVar2;
}

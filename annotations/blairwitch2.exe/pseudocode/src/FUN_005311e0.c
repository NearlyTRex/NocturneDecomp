// Name: FUN_005311e0
// Address: 005311e0
// Address Range: [[005311e0, 00531457]]
// Convention: unknown
// Signature: int FUN_005311e0(int param_1,undefined4 param_2,int *param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005311e0(int param_1,uint param_2,int *param_3)

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
  if (_DAT_0200e88c != 0) {
    if (_DAT_0200e88c == 1) {
      puVar11 = (byte *)0x0;
      puVar9 = (byte *)0x0;
      puVar8 = (byte *)0x0;
      puVar7 = (byte *)0x0;
      puVar6 = (byte *)0x0;
    }
    else {
      puVar11 = &DAT_0200e8c0;
      puVar9 = &DAT_0200e8b4;
      puVar8 = &DAT_0200e8a8;
      puVar7 = &DAT_0200e89c;
      puVar6 = &DAT_0200e890;
    }
    FUN_00530aa0(param_1,puVar6,puVar7,puVar8,puVar9,puVar11);
    _DAT_0200e88c = 0;
  }
  iVar3 = 0;
  iVar2 = 0;
  if (0 < _DAT_0200e3c0) {
    iVar4 = 0;
    do {
      puVar12 = (uint *)(&DAT_0200e3c4 + iVar4);
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
      iVar1 = FUN_0043e300(0x1fc7838,param_2,*puVar12,param_3);
      iVar2 = iVar2 + iVar1;
    } while (iVar3 < _DAT_0200e3c0);
  }
  iVar3 = 0;
  if (0 < _DAT_0200e23c) {
    iVar4 = 0;
    do {
      puVar12 = (uint *)(&DAT_0200e240 + iVar4);
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
      iVar1 = FUN_0043e300(0x1fc7838,param_2,*puVar12,param_3);
      iVar2 = iVar2 + iVar1;
    } while (iVar3 < _DAT_0200e23c);
  }
  iVar3 = 0;
  if (0 < _DAT_0200e3d4) {
    iVar4 = 0;
    do {
      puVar12 = (uint *)(&DAT_0200e3d8 + iVar4);
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
      iVar1 = FUN_00448da0(*puVar12,param_2,param_3);
      iVar2 = iVar2 + iVar1;
    } while (iVar3 < _DAT_0200e3d4);
  }
  if ((((*(uint *)(param_1 + 0x14d160) & 0x7fffffff) != 0) && (param_3 != (int *)0x0)) &&
     (iVar3 = ((uint)((longlong)_DAT_0200a3a0 * (longlong)param_3[2]) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_0200a3a0 * (longlong)param_3[2]) >> 0x20) << 0x10) +
              ((uint)((longlong)_DAT_0200a398 * (longlong)*param_3) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_0200a398 * (longlong)*param_3) >> 0x20) << 0x10) +
              ((uint)((longlong)_DAT_0200a39c * (longlong)param_3[1]) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_0200a39c * (longlong)param_3[1]) >> 0x20) << 0x10),
     iVar3 < 0)) {
    iVar2 = iVar2 - iVar3;
  }
  local_18 = 0;
  if (0 < *(int *)(param_1 + 0x15acc8)) {
    local_14 = param_1;
    do {
      FUN_004fb0a0(*(int *)(local_14 + 0x15accc) + 0x348,param_2);
      local_3c = local_48;
      *(uint *)((int)&stack0xffffffc8 + (uint)bVar5 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffbc + (uint)bVar5 * -8);
      *(uint *)(&stack0xffffffcc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffc0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      if (param_3 != (int *)0x0) {
        FUN_004fb150(*(int *)(local_14 + 0x15accc) + 0x348,param_2,param_3);
        local_30 = local_24;
        *(uint *)((int)&stack0xffffffd4 + (uint)bVar5 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffffe0 + (uint)bVar5 * -8);
        *(uint *)(&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             *(uint *)(&stack0xffffffe4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      }
      iVar3 = 0;
      if (0 < _DAT_01fc9608) {
        iVar4 = 0;
        do {
          if (param_3 == (int *)0x0) {
            uVar10 = *(uint *)(iVar4 + 0x1fc960c);
            puVar12 = (uint *)0x0;
          }
          else {
            puVar12 = &stack0xffffffd0;
            uVar10 = *(uint *)(iVar4 + 0x1fc960c);
          }
          iVar1 = FUN_0043e300(0x1fc7838,&stack0xffffffc4,uVar10,puVar12);
          iVar2 = iVar2 + iVar1;
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar3 < _DAT_01fc9608);
      }
      local_14 = local_14 + 4;
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(param_1 + 0x15acc8));
  }
  return iVar2;
}

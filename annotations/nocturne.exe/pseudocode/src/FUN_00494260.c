// Name: FUN_00494260
// Address: 00494260
// Address Range: [[00494260, 004945c3]]
// Convention: unknown
// Signature: void FUN_00494260(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00494260(int *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  
  _DAT_01c70f78 = 0;
  _DAT_01c712fc = DAT_005b7620;
  _DAT_01c71300 = 0;
  local_20 = 0;
  if (0 < param_2) {
    local_24 = param_1;
    do {
      iVar2 = local_20 + 1;
      if (param_2 <= iVar2) {
        iVar2 = 0;
      }
      iVar2 = param_1[iVar2];
      iVar8 = *local_24;
      iVar3 = *(int *)(iVar2 + 0x14) >> 0x10;
      iVar5 = *(int *)(iVar8 + 0x14) >> 0x10;
      if (iVar5 != iVar3) {
        iVar4 = iVar3;
        iVar6 = iVar8;
        if (*(int *)(iVar2 + 0x14) < *(int *)(iVar8 + 0x14)) {
          iVar4 = iVar5;
          iVar5 = iVar3;
          iVar6 = iVar2;
          iVar2 = iVar8;
        }
        iVar3 = _DAT_01c70f78 * 0x38;
        *(int *)(&DAT_01c70f7c + iVar3) = iVar5;
        iVar8 = _DAT_01c712fc;
        *(int *)(iVar3 + 0x1c70f80) = iVar4;
        if (iVar5 < iVar8) {
          _DAT_01c712fc = iVar5;
        }
        if (_DAT_01c71300 < iVar4) {
          _DAT_01c71300 = iVar4;
        }
        *(uint *)(iVar3 + 0x1c70f84) = *(uint *)(iVar6 + 0x10);
        *(uint *)(iVar3 + 0x1c70f94) = *(uint *)(iVar6 + 0x18);
        *(uint *)(iVar3 + 0x1c70f9c) = *(uint *)(iVar6 + 0x1c);
        uVar7 = *(int *)(iVar2 + 0x14) - *(int *)(iVar6 + 0x14);
        if (uVar7 < 0x10000) {
          iVar8 = 0;
        }
        else {
          iVar8 = (int)(0xffffffff / (ulonglong)uVar7);
        }
        lVar1 = (longlong)iVar8 * (longlong)(*(int *)(iVar2 + 0x10) - *(int *)(iVar6 + 0x10));
        *(uint *)(iVar3 + 0x1c70f88) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10
        ;
        lVar1 = (longlong)iVar8 * (longlong)(*(int *)(iVar2 + 0x18) - *(int *)(iVar6 + 0x18));
        *(uint *)(iVar3 + 0x1c70f98) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10
        ;
        lVar1 = (longlong)iVar8 * (longlong)(*(int *)(iVar2 + 0x1c) - *(int *)(iVar6 + 0x1c));
        *(uint *)(iVar3 + 0x1c70fa0) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10
        ;
        uVar7 = (uint)(ushort)((ushort)*(uint *)(iVar6 + 0x14) ^ 0xffff);
        lVar1 = (longlong)(int)uVar7 * (longlong)*(int *)(iVar3 + 0x1c70f88);
        *(int *)(iVar3 + 0x1c70f84) =
             *(int *)(iVar3 + 0x1c70f84) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)(int)uVar7 * (longlong)*(int *)(iVar3 + 0x1c70f98);
        *(uint *)(iVar3 + 0x1c70f94) =
             *(int *)(iVar3 + 0x1c70f94) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)(int)uVar7 * (longlong)*(int *)(iVar3 + 0x1c70fa0);
        _DAT_01c70f78 = _DAT_01c70f78 + 1;
        *(uint *)(iVar3 + 0x1c70f9c) =
             *(int *)(iVar3 + 0x1c70f9c) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
    } while (local_20 < param_2);
  }
  local_18 = (int *)&DAT_01c70f7c;
  iVar2 = 0;
  if (0 < _DAT_01c70f78) {
    do {
      if ((_DAT_01c712fc == *local_18) && (local_18 != (int *)0x0)) goto LAB_00494300;
      iVar2 = iVar2 + 1;
      local_18 = local_18 + 0xe;
    } while (iVar2 < _DAT_01c70f78);
  }
  local_18 = (int *)0x0;
LAB_00494300:
  if (local_18 != (int *)0x0) {
    iVar2 = 0;
    local_14 = (int *)&DAT_01c70f7c;
    if (0 < _DAT_01c70f78) {
      do {
        if ((_DAT_01c712fc == *local_14) && (local_14 != local_18)) goto LAB_00494339;
        iVar2 = iVar2 + 1;
        local_14 = local_14 + 0xe;
      } while (iVar2 < _DAT_01c70f78);
    }
    local_14 = (int *)0x0;
LAB_00494339:
    if (local_14 != (int *)0x0) {
      local_1c = _DAT_01c712fc;
      do {
        if (local_18[1] <= local_1c) {
          *local_18 = -1;
          local_18 = (int *)&DAT_01c70f7c;
          iVar2 = 0;
          if (0 < _DAT_01c70f78) {
            do {
              if ((local_1c == *local_18) && (local_18 != local_14)) goto LAB_00494392;
              iVar2 = iVar2 + 1;
              local_18 = local_18 + 0xe;
            } while (iVar2 < _DAT_01c70f78);
          }
          local_18 = (int *)0x0;
LAB_00494392:
          if (local_18 == (int *)0x0) {
            return;
          }
        }
        if (local_14[1] <= local_1c) {
          *local_14 = -1;
          local_14 = (int *)&DAT_01c70f7c;
          iVar2 = 0;
          if (0 < _DAT_01c70f78) {
            do {
              if ((local_1c == *local_14) && (local_14 != local_18)) goto LAB_004943e2;
              iVar2 = iVar2 + 1;
              local_14 = local_14 + 0xe;
            } while (iVar2 < _DAT_01c70f78);
          }
          local_14 = (int *)0x0;
LAB_004943e2:
          if (local_14 == (int *)0x0) {
            return;
          }
        }
        FUN_00530710();
        local_18[2] = local_18[2] + local_18[3];
        local_18[6] = local_18[6] + local_18[7];
        local_18[8] = local_18[8] + local_18[9];
        local_1c = local_1c + 1;
        local_14[2] = local_14[2] + local_14[3];
        local_14[6] = local_14[6] + local_14[7];
        local_14[8] = local_14[8] + local_14[9];
      } while( true );
    }
  }
  return;
}

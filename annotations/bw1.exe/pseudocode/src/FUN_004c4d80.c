// Name: FUN_004c4d80
// Address: 004c4d80
// Address Range: [[004c4d80, 004c50e3]]
// Convention: unknown
// Signature: void FUN_004c4d80(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c4d80(int *param_1,int param_2)

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
  
  _DAT_01cc8ce8 = 0;
  _DAT_01cc906c = DAT_0061b49c;
  _DAT_01cc9070 = 0;
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
        iVar3 = _DAT_01cc8ce8 * 0x38;
        *(int *)(&DAT_01cc8cec + iVar3) = iVar5;
        iVar8 = _DAT_01cc906c;
        *(int *)(iVar3 + 0x1cc8cf0) = iVar4;
        if (iVar5 < iVar8) {
          _DAT_01cc906c = iVar5;
        }
        if (_DAT_01cc9070 < iVar4) {
          _DAT_01cc9070 = iVar4;
        }
        *(uint *)(iVar3 + 0x1cc8cf4) = *(uint *)(iVar6 + 0x10);
        *(uint *)(iVar3 + 0x1cc8d04) = *(uint *)(iVar6 + 0x18);
        *(uint *)(iVar3 + 0x1cc8d0c) = *(uint *)(iVar6 + 0x1c);
        uVar7 = *(int *)(iVar2 + 0x14) - *(int *)(iVar6 + 0x14);
        if (uVar7 < 0x10000) {
          iVar8 = 0;
        }
        else {
          iVar8 = (int)(0xffffffff / (ulonglong)uVar7);
        }
        lVar1 = (longlong)iVar8 * (longlong)(*(int *)(iVar2 + 0x10) - *(int *)(iVar6 + 0x10));
        *(uint *)(iVar3 + 0x1cc8cf8) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10
        ;
        lVar1 = (longlong)iVar8 * (longlong)(*(int *)(iVar2 + 0x18) - *(int *)(iVar6 + 0x18));
        *(uint *)(iVar3 + 0x1cc8d08) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10
        ;
        lVar1 = (longlong)iVar8 * (longlong)(*(int *)(iVar2 + 0x1c) - *(int *)(iVar6 + 0x1c));
        *(uint *)(iVar3 + 0x1cc8d10) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10
        ;
        uVar7 = (uint)(ushort)((ushort)*(uint *)(iVar6 + 0x14) ^ 0xffff);
        lVar1 = (longlong)(int)uVar7 * (longlong)*(int *)(iVar3 + 0x1cc8cf8);
        *(int *)(iVar3 + 0x1cc8cf4) =
             *(int *)(iVar3 + 0x1cc8cf4) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)(int)uVar7 * (longlong)*(int *)(iVar3 + 0x1cc8d08);
        *(uint *)(iVar3 + 0x1cc8d04) =
             *(int *)(iVar3 + 0x1cc8d04) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)(int)uVar7 * (longlong)*(int *)(iVar3 + 0x1cc8d10);
        _DAT_01cc8ce8 = _DAT_01cc8ce8 + 1;
        *(uint *)(iVar3 + 0x1cc8d0c) =
             *(int *)(iVar3 + 0x1cc8d0c) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
    } while (local_20 < param_2);
  }
  local_18 = (int *)&DAT_01cc8cec;
  iVar2 = 0;
  if (0 < _DAT_01cc8ce8) {
    do {
      if ((_DAT_01cc906c == *local_18) && (local_18 != (int *)0x0)) goto LAB_004c4e20;
      iVar2 = iVar2 + 1;
      local_18 = local_18 + 0xe;
    } while (iVar2 < _DAT_01cc8ce8);
  }
  local_18 = (int *)0x0;
LAB_004c4e20:
  if (local_18 != (int *)0x0) {
    iVar2 = 0;
    local_14 = (int *)&DAT_01cc8cec;
    if (0 < _DAT_01cc8ce8) {
      do {
        if ((_DAT_01cc906c == *local_14) && (local_14 != local_18)) goto LAB_004c4e59;
        iVar2 = iVar2 + 1;
        local_14 = local_14 + 0xe;
      } while (iVar2 < _DAT_01cc8ce8);
    }
    local_14 = (int *)0x0;
LAB_004c4e59:
    if (local_14 != (int *)0x0) {
      local_1c = _DAT_01cc906c;
      do {
        if (local_18[1] <= local_1c) {
          *local_18 = -1;
          local_18 = (int *)&DAT_01cc8cec;
          iVar2 = 0;
          if (0 < _DAT_01cc8ce8) {
            do {
              if ((local_1c == *local_18) && (local_18 != local_14)) goto LAB_004c4eb2;
              iVar2 = iVar2 + 1;
              local_18 = local_18 + 0xe;
            } while (iVar2 < _DAT_01cc8ce8);
          }
          local_18 = (int *)0x0;
LAB_004c4eb2:
          if (local_18 == (int *)0x0) {
            return;
          }
        }
        if (local_14[1] <= local_1c) {
          *local_14 = -1;
          local_14 = (int *)&DAT_01cc8cec;
          iVar2 = 0;
          if (0 < _DAT_01cc8ce8) {
            do {
              if ((local_1c == *local_14) && (local_14 != local_18)) goto LAB_004c4f02;
              iVar2 = iVar2 + 1;
              local_14 = local_14 + 0xe;
            } while (iVar2 < _DAT_01cc8ce8);
          }
          local_14 = (int *)0x0;
LAB_004c4f02:
          if (local_14 == (int *)0x0) {
            return;
          }
        }
        FUN_00580127();
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

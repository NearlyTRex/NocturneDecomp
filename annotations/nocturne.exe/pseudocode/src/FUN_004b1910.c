// Name: FUN_004b1910
// Address: 004b1910
// Address Range: [[004b1910, 004b1cfd]]
// Convention: unknown
// Signature: void FUN_004b1910(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b1910(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_6c [6];
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_30 = *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x1c);
  local_28 = local_30 * 0x100;
  local_6c[0] = ((uint)((longlong)_DAT_01cc5118 * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)_DAT_01cc5118 * (longlong)local_28) >> 0x20) << 0x10) +
                ((uint)((longlong)_DAT_01cc5124 * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)_DAT_01cc5124 * (longlong)local_28) >> 0x20) << 0x10) +
                ((uint)((longlong)_DAT_01cc5130 * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)_DAT_01cc5130 * (longlong)local_28) >> 0x20) << 0x10);
  local_6c[1] = ((uint)((longlong)_DAT_01cc511c * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)_DAT_01cc511c * (longlong)local_28) >> 0x20) << 0x10) +
                ((uint)((longlong)_DAT_01cc5128 * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)_DAT_01cc5128 * (longlong)local_28) >> 0x20) << 0x10) +
                ((uint)((longlong)_DAT_01cc5134 * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)_DAT_01cc5134 * (longlong)local_28) >> 0x20) << 0x10);
  local_6c[2] = ((uint)((longlong)_DAT_01cc5120 * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)_DAT_01cc5120 * (longlong)local_28) >> 0x20) << 0x10) +
                ((uint)((longlong)_DAT_01cc512c * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)_DAT_01cc512c * (longlong)local_28) >> 0x20) << 0x10) +
                ((uint)((longlong)_DAT_01cc5138 * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)_DAT_01cc5138 * (longlong)local_28) >> 0x20) << 0x10);
  iVar3 = local_30 * -0x100;
  local_6c[3] = ((uint)((longlong)_DAT_01cc5118 * (longlong)iVar3) >> 0x10 |
                (int)((ulonglong)((longlong)_DAT_01cc5118 * (longlong)iVar3) >> 0x20) << 0x10) +
                ((uint)((longlong)_DAT_01cc5124 * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)_DAT_01cc5124 * (longlong)local_28) >> 0x20) << 0x10) +
                ((uint)((longlong)_DAT_01cc5130 * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)_DAT_01cc5130 * (longlong)local_28) >> 0x20) << 0x10);
  local_6c[4] = ((uint)((longlong)_DAT_01cc511c * (longlong)iVar3) >> 0x10 |
                (int)((ulonglong)((longlong)_DAT_01cc511c * (longlong)iVar3) >> 0x20) << 0x10) +
                ((uint)((longlong)_DAT_01cc5128 * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)_DAT_01cc5128 * (longlong)local_28) >> 0x20) << 0x10) +
                ((uint)((longlong)_DAT_01cc5134 * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)_DAT_01cc5134 * (longlong)local_28) >> 0x20) << 0x10);
  local_2c = local_30 * -0x100;
  local_6c[5] = ((uint)((longlong)_DAT_01cc5120 * (longlong)iVar3) >> 0x10 |
                (int)((ulonglong)((longlong)_DAT_01cc5120 * (longlong)iVar3) >> 0x20) << 0x10) +
                ((uint)((longlong)_DAT_01cc512c * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)_DAT_01cc512c * (longlong)local_28) >> 0x20) << 0x10) +
                ((uint)((longlong)_DAT_01cc5138 * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)_DAT_01cc5138 * (longlong)local_28) >> 0x20) << 0x10);
  local_54 = ((uint)((longlong)_DAT_01cc5118 * (longlong)iVar3) >> 0x10 |
             (int)((ulonglong)((longlong)_DAT_01cc5118 * (longlong)iVar3) >> 0x20) << 0x10) +
             ((uint)((longlong)_DAT_01cc5124 * (longlong)local_2c) >> 0x10 |
             (int)((ulonglong)((longlong)_DAT_01cc5124 * (longlong)local_2c) >> 0x20) << 0x10) +
             ((uint)((longlong)_DAT_01cc5130 * (longlong)local_28) >> 0x10 |
             (int)((ulonglong)((longlong)_DAT_01cc5130 * (longlong)local_28) >> 0x20) << 0x10);
  local_50 = ((uint)((longlong)_DAT_01cc511c * (longlong)iVar3) >> 0x10 |
             (int)((ulonglong)((longlong)_DAT_01cc511c * (longlong)iVar3) >> 0x20) << 0x10) +
             ((uint)((longlong)_DAT_01cc5128 * (longlong)local_2c) >> 0x10 |
             (int)((ulonglong)((longlong)_DAT_01cc5128 * (longlong)local_2c) >> 0x20) << 0x10) +
             ((uint)((longlong)_DAT_01cc5134 * (longlong)local_28) >> 0x10 |
             (int)((ulonglong)((longlong)_DAT_01cc5134 * (longlong)local_28) >> 0x20) << 0x10);
  local_30 = local_30 * 0x100;
  local_4c = ((uint)((longlong)_DAT_01cc5120 * (longlong)iVar3) >> 0x10 |
             (int)((ulonglong)((longlong)_DAT_01cc5120 * (longlong)iVar3) >> 0x20) << 0x10) +
             ((uint)((longlong)_DAT_01cc512c * (longlong)local_2c) >> 0x10 |
             (int)((ulonglong)((longlong)_DAT_01cc512c * (longlong)local_2c) >> 0x20) << 0x10) +
             ((uint)((longlong)_DAT_01cc5138 * (longlong)local_28) >> 0x10 |
             (int)((ulonglong)((longlong)_DAT_01cc5138 * (longlong)local_28) >> 0x20) << 0x10);
  local_48 = ((uint)((longlong)_DAT_01cc5118 * (longlong)local_30) >> 0x10 |
             (int)((ulonglong)((longlong)_DAT_01cc5118 * (longlong)local_30) >> 0x20) << 0x10) +
             ((uint)((longlong)_DAT_01cc5124 * (longlong)local_2c) >> 0x10 |
             (int)((ulonglong)((longlong)_DAT_01cc5124 * (longlong)local_2c) >> 0x20) << 0x10) +
             ((uint)((longlong)_DAT_01cc5130 * (longlong)local_28) >> 0x10 |
             (int)((ulonglong)((longlong)_DAT_01cc5130 * (longlong)local_28) >> 0x20) << 0x10);
  local_44 = ((uint)((longlong)_DAT_01cc511c * (longlong)local_30) >> 0x10 |
             (int)((ulonglong)((longlong)_DAT_01cc511c * (longlong)local_30) >> 0x20) << 0x10) +
             ((uint)((longlong)_DAT_01cc5128 * (longlong)local_2c) >> 0x10 |
             (int)((ulonglong)((longlong)_DAT_01cc5128 * (longlong)local_2c) >> 0x20) << 0x10) +
             ((uint)((longlong)_DAT_01cc5134 * (longlong)local_28) >> 0x10 |
             (int)((ulonglong)((longlong)_DAT_01cc5134 * (longlong)local_28) >> 0x20) << 0x10);
  local_40 = ((uint)((longlong)_DAT_01cc5120 * (longlong)local_30) >> 0x10 |
             (int)((ulonglong)((longlong)_DAT_01cc5120 * (longlong)local_30) >> 0x20) << 0x10) +
             ((uint)((longlong)_DAT_01cc512c * (longlong)local_2c) >> 0x10 |
             (int)((ulonglong)((longlong)_DAT_01cc512c * (longlong)local_2c) >> 0x20) << 0x10) +
             ((uint)((longlong)_DAT_01cc5138 * (longlong)local_28) >> 0x10 |
             (int)((ulonglong)((longlong)_DAT_01cc5138 * (longlong)local_28) >> 0x20) << 0x10);
  local_38 = 0;
  local_34 = 0;
  local_14 = 999;
  local_3c = 0;
  local_18 = 999;
  iVar3 = -999;
  iVar4 = 0;
  local_20 = *(int *)(param_1 + 0x1c) << 8;
  iVar5 = -999;
  do {
    iVar1 = *(int *)((int)local_6c + iVar4) / local_20;
    iVar2 = *(int *)((int)local_6c + iVar4 + 8) / local_20;
    if (iVar1 < local_14) {
      local_14 = iVar1;
    }
    if (iVar2 < local_18) {
      local_18 = iVar2;
    }
    if (iVar3 < iVar1) {
      iVar3 = iVar1;
    }
    if (iVar5 < iVar2) {
      iVar5 = iVar2;
    }
    iVar4 = iVar4 + 0xc;
  } while (iVar4 != 0x3c);
  local_18 = local_18 + -2;
  local_14 = local_14 + -2;
  *(int *)(param_1 + 0x40) = iVar3 + 2;
  *(int *)(param_1 + 0x48) = iVar5 + 2;
  *(int *)(param_1 + 0x3c) = local_14;
  *(int *)(param_1 + 0x44) = local_18;
  local_1c = -*(int *)(param_1 + 0x10);
  if (-*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x3c)) {
    local_1c = *(int *)(param_1 + 0x3c);
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x10)) {
    iVar3 = *(int *)(param_1 + 0x40);
  }
  iVar5 = -*(int *)(param_1 + 0x14);
  if (-*(int *)(param_1 + 0x14) < *(int *)(param_1 + 0x44)) {
    iVar5 = *(int *)(param_1 + 0x44);
  }
  local_24 = *(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x48) < *(int *)(param_1 + 0x14)) {
    local_24 = *(int *)(param_1 + 0x48);
  }
  iVar4 = local_1c;
  if (iVar5 <= local_24) {
    do {
      for (; iVar4 <= iVar3; iVar4 = iVar4 + 1) {
        FUN_004b1820(param_1,*(int *)(param_1 + 0x2c) + iVar4,*(int *)(param_1 + 0x30) + iVar5);
      }
      iVar5 = iVar5 + 1;
      iVar4 = local_1c;
    } while (iVar5 <= local_24);
  }
  return;
}

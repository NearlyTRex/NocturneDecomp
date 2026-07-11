// Name: FUN_0050b7f0
// Address: 0050b7f0
// Address Range: [[0050b7f0, 0050bb4e]]
// Convention: unknown
// Signature: void FUN_0050b7f0(int param_1,undefined4 param_2,int *param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050b7f0(int param_1,uint param_2,int *param_3,int param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint local_18;
  int local_14;
  
  if (*(int *)(param_1 + 0x15aa88) != 0) {
    if (param_3 == (int *)0x0) {
      _DAT_01cc4800 = "@..\\core\\set.cpp" + 1;
      _DAT_01cc4804 = 0xaf6;
      FUN_004c8440("CDemonSet::lightVertexColor - Quick light mode with no normal");
    }
    lVar1 = (longlong)*(int *)(param_1 + 0x15aa8c) * (longlong)*param_3;
    lVar2 = (longlong)*(int *)(param_1 + 0x15aa90) * (longlong)param_3[1];
    lVar3 = (longlong)*(int *)(param_1 + 0x15aa94) * (longlong)param_3[2];
    iVar8 = -(((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
              ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
             ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10));
    if (iVar8 < 0) {
      iVar8 = 0;
    }
    iVar8 = iVar8 + *(int *)(param_1 + 0x15aa98);
    if (0xffff < iVar8) {
      iVar8 = 0xffff;
    }
    lVar1 = (longlong)*(int *)(param_1 + 0x15aaa0) * (longlong)iVar8;
    (&DAT_005c5034)[param_4 * 0xc] = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)*(int *)(param_1 + 0x15aaa4) * (longlong)iVar8;
    (&DAT_005c5038)[param_4 * 0xc] = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)*(int *)(param_1 + 0x15aaa8) * (longlong)iVar8;
    (&DAT_005c503c)[param_4 * 0xc] = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    (&DAT_005c5040)[param_4 * 0xc] = _DAT_01c038f4;
    return;
  }
  if (param_5 == 0) {
    iVar8 = FUN_0050b5c0(param_1,param_2,param_3);
    local_14 = _DAT_01fb96f0;
    if ((0 < _DAT_01fb96f0) && (param_3 != (int *)0x0)) {
      iVar10 = _DAT_01fb96f0;
      if (0x1000 < _DAT_01fb96f0) {
        iVar10 = 0x1000;
      }
      if (_DAT_01c039c4 < 0) {
        uVar4 = -((uint)((longlong)iVar10 * (longlong)*param_3) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar10 * (longlong)*param_3) >> 0x20) << 0x10);
      }
      else {
        uVar4 = (uint)((longlong)iVar10 * (longlong)*param_3) >> 0x10 |
                (int)((ulonglong)((longlong)iVar10 * (longlong)*param_3) >> 0x20) << 0x10;
      }
      if (_DAT_01c039cc < 0) {
        iVar8 = (iVar8 + uVar4) -
                ((uint)((longlong)iVar10 * (longlong)param_3[2]) >> 0x10 |
                (int)((ulonglong)((longlong)iVar10 * (longlong)param_3[2]) >> 0x20) << 0x10);
        if (iVar8 < 0) {
          iVar8 = 0;
        }
      }
      else {
        iVar8 = iVar8 + uVar4 +
                ((uint)((longlong)iVar10 * (longlong)param_3[2]) >> 0x10 |
                (int)((ulonglong)((longlong)iVar10 * (longlong)param_3[2]) >> 0x20) << 0x10);
        if (iVar8 < 0) {
          iVar8 = 0;
        }
      }
    }
  }
  else {
    iVar8 = 0xffff;
    local_14 = 0;
  }
  if (_DAT_01fff224 < 1) {
    iVar8 = iVar8 + local_14;
    lVar1 = (longlong)iVar8 * (longlong)*(int *)(param_1 + 0x15aaa0);
    local_18 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar8 * (longlong)*(int *)(param_1 + 0x15aaa4);
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    iVar10 = *(int *)(param_1 + 0x15aaa8);
  }
  else {
    lVar1 = (longlong)
            (int)(((uint)((longlong)iVar8 * (longlong)_DAT_01fff5a4) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar8 * (longlong)_DAT_01fff5a4) >> 0x20) << 0x10) +
                 local_14) * (longlong)*(int *)(param_1 + 0x15aaa0);
    local_18 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)
            (int)(((uint)((longlong)iVar8 * (longlong)_DAT_01fff5a8) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar8 * (longlong)_DAT_01fff5a8) >> 0x20) << 0x10) +
                 local_14) * (longlong)*(int *)(param_1 + 0x15aaa4);
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    iVar10 = *(int *)(param_1 + 0x15aaa8);
    iVar8 = ((uint)((longlong)iVar8 * (longlong)_DAT_01fff5ac) >> 0x10 |
            (int)((ulonglong)((longlong)iVar8 * (longlong)_DAT_01fff5ac) >> 0x20) << 0x10) +
            local_14;
  }
  uVar5 = (uint)((longlong)iVar8 * (longlong)iVar10) >> 0x10 |
          (int)((ulonglong)((longlong)iVar8 * (longlong)iVar10) >> 0x20) << 0x10;
  if ((*(int *)(param_1 + 0x15f2f8) != 0) && (param_5 == 0)) {
    iVar8 = FUN_0050b5c0(param_1,param_2,0);
    uVar9 = local_14 + iVar8;
    if (0 < (int)uVar9) {
      uVar6 = local_18 ^ (int)local_18 >> 0x1f;
      uVar7 = uVar6 / uVar9;
      if (0x7ffe < uVar7) {
        uVar7 = 0x7fff;
      }
      local_18 = ((uint)(((ulonglong)uVar6 % (ulonglong)uVar9 << 0x20) / (ulonglong)uVar9) >> 0x10 |
                 uVar7 << 0x10) ^ (int)local_18 >> 0x1f;
      uVar6 = uVar4 ^ (int)uVar4 >> 0x1f;
      uVar7 = uVar6 / uVar9;
      if (0x7ffe < uVar7) {
        uVar7 = 0x7fff;
      }
      uVar4 = ((uint)(((ulonglong)uVar6 % (ulonglong)uVar9 << 0x20) / (ulonglong)uVar9) >> 0x10 |
              uVar7 << 0x10) ^ (int)uVar4 >> 0x1f;
      uVar6 = uVar5 ^ (int)uVar5 >> 0x1f;
      uVar7 = uVar6 / uVar9;
      if (0x7ffe < uVar7) {
        uVar7 = 0x7fff;
      }
      uVar5 = ((uint)(((ulonglong)uVar6 % (ulonglong)uVar9 << 0x20) / (ulonglong)uVar9) >> 0x10 |
              uVar7 << 0x10) ^ (int)uVar5 >> 0x1f;
    }
  }
  if (0xffff < (int)local_18) {
    local_18 = 0xffff;
  }
  if (0xffff < (int)uVar4) {
    uVar4 = 0xffff;
  }
  if (0xffff < (int)uVar5) {
    uVar5 = 0xffff;
  }
  (&DAT_005c5034)[param_4 * 0xc] = *(uint *)(local_18 * 4 + 0x1fbb060);
  (&DAT_005c5038)[param_4 * 0xc] = *(uint *)(uVar4 * 4 + 0x1fbb060);
  (&DAT_005c503c)[param_4 * 0xc] = *(uint *)(uVar5 * 4 + 0x1fbb060);
  return;
}

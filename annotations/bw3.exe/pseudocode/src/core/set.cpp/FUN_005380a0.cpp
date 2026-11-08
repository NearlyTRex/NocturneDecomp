// Name: FUN_005380a0
// Address: 005380a0
// Address Range: [[005380a0, 005383fc]]
// Convention: unknown
// Signature: void FUN_005380a0(int param_1,undefined4 param_2,int *param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005380a0(int param_1,uint param_2,int *param_3,int param_4,int param_5)

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
  int local_18;
  uint local_14;
  
  if (*(int *)(param_1 + 0x15ae84) != 0) {
    if (param_3 == (int *)0x0) {
      _DAT_01d71de0 = "..\\core\\set.cpp";
      _DAT_01d71de4 = 0xcb8;
      FUN_004e4330("CDemonSet::lightVertexColor - Quick light mode with no normal");
    }
    lVar1 = (longlong)*(int *)(param_1 + 0x15ae88) * (longlong)*param_3;
    lVar2 = (longlong)*(int *)(param_1 + 0x15ae8c) * (longlong)param_3[1];
    lVar3 = (longlong)*(int *)(param_1 + 0x15ae90) * (longlong)param_3[2];
    iVar8 = -(((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
              ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
             ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10));
    if (iVar8 < 0) {
      iVar8 = 0;
    }
    iVar8 = iVar8 + *(int *)(param_1 + 0x15ae94);
    if (0xffff < iVar8) {
      iVar8 = 0xffff;
    }
    lVar1 = (longlong)*(int *)(param_1 + 0x15ae9c) * (longlong)iVar8;
    (&DAT_0060b034)[param_4 * 0xc] = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)*(int *)(param_1 + 0x15aea0) * (longlong)iVar8;
    (&DAT_0060b038)[param_4 * 0xc] = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)*(int *)(param_1 + 0x15aea4) * (longlong)iVar8;
    (&DAT_0060b03c)[param_4 * 0xc] = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    (&DAT_0060b040)[param_4 * 0xc] = _DAT_01c6e24c;
    return;
  }
  if (param_5 == 0) {
    iVar8 = FUN_00537e20(param_1,param_2,param_3);
    local_18 = _DAT_0203a134;
    if ((0 < _DAT_0203a134) && (param_3 != (int *)0x0)) {
      iVar10 = _DAT_0203a134;
      if (0x1000 < _DAT_0203a134) {
        iVar10 = 0x1000;
      }
      if (_DAT_01c6e2d8 < 0) {
        uVar4 = -((uint)((longlong)iVar10 * (longlong)*param_3) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar10 * (longlong)*param_3) >> 0x20) << 0x10);
      }
      else {
        uVar4 = (uint)((longlong)iVar10 * (longlong)*param_3) >> 0x10 |
                (int)((ulonglong)((longlong)iVar10 * (longlong)*param_3) >> 0x20) << 0x10;
      }
      if (_DAT_01c6e2e0 < 0) {
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
    local_18 = 0;
  }
  if (_DAT_0207fc84 < 1) {
    iVar8 = iVar8 + local_18;
    lVar1 = (longlong)iVar8 * (longlong)*(int *)(param_1 + 0x15ae9c);
    local_14 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar8 * (longlong)*(int *)(param_1 + 0x15aea0);
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    iVar10 = *(int *)(param_1 + 0x15aea4);
  }
  else {
    lVar1 = (longlong)
            (int)(((uint)((longlong)iVar8 * (longlong)_DAT_02080004) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar8 * (longlong)_DAT_02080004) >> 0x20) << 0x10) +
                 local_18) * (longlong)*(int *)(param_1 + 0x15ae9c);
    local_14 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)
            (int)(((uint)((longlong)iVar8 * (longlong)_DAT_02080008) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar8 * (longlong)_DAT_02080008) >> 0x20) << 0x10) +
                 local_18) * (longlong)*(int *)(param_1 + 0x15aea0);
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    iVar10 = *(int *)(param_1 + 0x15aea4);
    iVar8 = ((uint)((longlong)iVar8 * (longlong)_DAT_0208000c) >> 0x10 |
            (int)((ulonglong)((longlong)iVar8 * (longlong)_DAT_0208000c) >> 0x20) << 0x10) +
            local_18;
  }
  uVar5 = (uint)((longlong)iVar8 * (longlong)iVar10) >> 0x10 |
          (int)((ulonglong)((longlong)iVar8 * (longlong)iVar10) >> 0x20) << 0x10;
  if ((*(int *)(param_1 + 0x15f6f8) != 0) && (param_5 == 0)) {
    iVar8 = FUN_00537e20(param_1,param_2,0);
    uVar9 = local_18 + iVar8;
    if (0 < (int)uVar9) {
      uVar6 = local_14 ^ (int)local_14 >> 0x1f;
      uVar7 = uVar6 / uVar9;
      if (0x7ffe < uVar7) {
        uVar7 = 0x7fff;
      }
      local_14 = ((uint)(((ulonglong)uVar6 % (ulonglong)uVar9 << 0x20) / (ulonglong)uVar9) >> 0x10 |
                 uVar7 << 0x10) ^ (int)local_14 >> 0x1f;
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
  if (0xffff < (int)local_14) {
    local_14 = 0xffff;
  }
  if (0xffff < (int)uVar4) {
    uVar4 = 0xffff;
  }
  if (0xffff < (int)uVar5) {
    uVar5 = 0xffff;
  }
  (&DAT_0060b034)[param_4 * 0xc] = *(uint *)(local_14 * 4 + 0x203baa4);
  (&DAT_0060b038)[param_4 * 0xc] = *(uint *)(uVar4 * 4 + 0x203baa4);
  (&DAT_0060b03c)[param_4 * 0xc] = *(uint *)(uVar5 * 4 + 0x203baa4);
  return;
}

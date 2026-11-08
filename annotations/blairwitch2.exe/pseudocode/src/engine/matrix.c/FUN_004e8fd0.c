// Name: FUN_004e8fd0
// Address: 004e8fd0
// Address Range: [[004e8fd0, 004e970f]]
// Convention: unknown
// Signature: void FUN_004e8fd0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e8fd0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  iVar4 = _DAT_01d05014;
  *(int *)(_DAT_01d05014 * 4 + 0x1d05180) = _DAT_01c38b6c;
  *(int *)(iVar4 * 4 + 0x1d051a8) = _DAT_01c38b70;
  *(int *)(iVar4 * 4 + 0x1d051d0) = _DAT_01c38b74;
  *(int *)(iVar4 * 4 + 0x1d051f8) = _DAT_01c38b90;
  *(int *)(iVar4 * 4 + 0x1d05220) = _DAT_01c38b94;
  *(int *)(iVar4 * 4 + 0x1d05248) = _DAT_01c38b98;
  *(int *)(iVar4 * 4 + 0x1d05018) = _DAT_01c38b9c;
  *(int *)(iVar4 * 4 + 0x1d05040) = _DAT_01c38ba0;
  *(int *)(iVar4 * 4 + 0x1d05068) = _DAT_01c38ba4;
  *(int *)(iVar4 * 4 + 0x1d05090) = _DAT_01c38ba8;
  *(int *)(iVar4 * 4 + 0x1d050b8) = _DAT_01c38bac;
  *(int *)(iVar4 * 4 + 0x1d050e0) = _DAT_01c38bb0;
  *(int *)(iVar4 * 4 + 0x1d05108) = _DAT_01c38bb4;
  *(int *)(iVar4 * 4 + 0x1d05130) = _DAT_01c38bb8;
  *(int *)(iVar4 * 4 + 0x1d05158) = _DAT_01c38bbc;
  param_4 = _DAT_01c38b6c - param_4;
  param_5 = _DAT_01c38b70 - param_5;
  param_6 = _DAT_01c38b74 - param_6;
  _DAT_01d05008 = param_2;
  _DAT_01d0500c = param_3;
  _DAT_01d05004 = param_1;
  iVar4 = param_4;
  iVar5 = param_5;
  if ((param_1 != 0 || param_2 != 0) || param_3 != 0) {
    iVar4 = FUN_004e86b0(param_1);
    iVar5 = FUN_004e86f0(param_1);
    iVar6 = FUN_004e86b0(param_2);
    iVar7 = FUN_004e86f0(param_2);
    iVar8 = FUN_004e86b0(param_3);
    iVar9 = FUN_004e86f0(param_3);
    lVar1 = (longlong)
            (int)((uint)((longlong)iVar6 * (longlong)iVar4) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar6 * (longlong)iVar4) >> 0x20) << 0x10) *
            (longlong)iVar8;
    iVar15 = ((uint)((longlong)iVar7 * (longlong)iVar9) >> 0x10 |
             (int)((ulonglong)((longlong)iVar7 * (longlong)iVar9) >> 0x20) << 0x10) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)
            (int)((uint)((longlong)iVar7 * (longlong)iVar4) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar7 * (longlong)iVar4) >> 0x20) << 0x10) *
            (longlong)iVar8;
    iVar16 = ((uint)((longlong)iVar6 * (longlong)-iVar9) >> 0x10 |
             (int)((ulonglong)((longlong)iVar6 * (longlong)-iVar9) >> 0x20) << 0x10) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    uVar10 = (uint)((longlong)iVar5 * (longlong)iVar8) >> 0x10 |
             (int)((ulonglong)((longlong)iVar5 * (longlong)iVar8) >> 0x20) << 0x10;
    uVar11 = (uint)((longlong)iVar5 * (longlong)iVar6) >> 0x10 |
             (int)((ulonglong)((longlong)iVar5 * (longlong)iVar6) >> 0x20) << 0x10;
    uVar12 = (uint)((longlong)iVar5 * (longlong)iVar7) >> 0x10 |
             (int)((ulonglong)((longlong)iVar5 * (longlong)iVar7) >> 0x20) << 0x10;
    iVar13 = -iVar4;
    lVar1 = (longlong)
            (int)((uint)((longlong)iVar6 * (longlong)iVar4) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar6 * (longlong)iVar4) >> 0x20) << 0x10) *
            (longlong)iVar9;
    iVar17 = ((uint)((longlong)iVar7 * (longlong)-iVar8) >> 0x10 |
             (int)((ulonglong)((longlong)iVar7 * (longlong)-iVar8) >> 0x20) << 0x10) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)
            (int)((uint)((longlong)iVar7 * (longlong)iVar4) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar7 * (longlong)iVar4) >> 0x20) << 0x10) *
            (longlong)iVar9;
    iVar6 = ((uint)((longlong)iVar8 * (longlong)iVar6) >> 0x10 |
            (int)((ulonglong)((longlong)iVar8 * (longlong)iVar6) >> 0x20) << 0x10) +
            ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    uVar14 = (uint)((longlong)iVar5 * (longlong)iVar9) >> 0x10 |
             (int)((ulonglong)((longlong)iVar5 * (longlong)iVar9) >> 0x20) << 0x10;
    lVar1 = (longlong)iVar15 * (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d051f8);
    lVar2 = (longlong)(int)uVar11 * (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05220);
    lVar3 = (longlong)iVar17 * (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05248);
    _DAT_01c38b90 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar16 * (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d051f8);
    lVar2 = (longlong)(int)uVar12 * (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05220);
    lVar3 = (longlong)iVar6 * (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05248);
    _DAT_01c38b94 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar10 * (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d051f8);
    lVar2 = (longlong)iVar13 * (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05220);
    lVar3 = (longlong)(int)uVar14 * (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05248);
    _DAT_01c38b98 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05018) * (longlong)iVar15;
    lVar2 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05090) * (longlong)(int)uVar11;
    lVar3 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05108) * (longlong)iVar17;
    _DAT_01c38b9c =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05040) * (longlong)iVar15;
    lVar2 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d050b8) * (longlong)(int)uVar11;
    lVar3 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05130) * (longlong)iVar17;
    _DAT_01c38ba0 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05068) * (longlong)iVar15;
    lVar2 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d050e0) * (longlong)(int)uVar11;
    lVar3 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05158) * (longlong)iVar17;
    _DAT_01c38ba4 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05018) * (longlong)iVar16;
    lVar2 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05090) * (longlong)(int)uVar12;
    lVar3 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05108) * (longlong)iVar6;
    _DAT_01c38ba8 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05040) * (longlong)iVar16;
    lVar2 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d050b8) * (longlong)(int)uVar12;
    lVar3 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05130) * (longlong)iVar6;
    _DAT_01c38bac =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05068) * (longlong)iVar16;
    lVar2 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d050e0) * (longlong)(int)uVar12;
    lVar3 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05158) * (longlong)iVar6;
    _DAT_01c38bb0 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05018) * (longlong)(int)uVar10;
    lVar2 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05090) * (longlong)iVar13;
    lVar3 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05108) * (longlong)(int)uVar14;
    _DAT_01c38bb4 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05040) * (longlong)(int)uVar10;
    lVar2 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d050b8) * (longlong)iVar13;
    lVar3 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05130) * (longlong)(int)uVar14;
    _DAT_01c38bb8 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05068) * (longlong)(int)uVar10;
    lVar2 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d050e0) * (longlong)iVar13;
    lVar3 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05158) * (longlong)(int)uVar14;
    _DAT_01c38bbc =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    iVar4 = ((uint)((longlong)iVar15 * (longlong)param_4) >> 0x10 |
            (int)((ulonglong)((longlong)iVar15 * (longlong)param_4) >> 0x20) << 0x10) +
            ((uint)((longlong)(int)uVar11 * (longlong)param_5) >> 0x10 |
            (int)((ulonglong)((longlong)(int)uVar11 * (longlong)param_5) >> 0x20) << 0x10) +
            ((uint)((longlong)iVar17 * (longlong)param_6) >> 0x10 |
            (int)((ulonglong)((longlong)iVar17 * (longlong)param_6) >> 0x20) << 0x10);
    iVar5 = ((uint)((longlong)iVar16 * (longlong)param_4) >> 0x10 |
            (int)((ulonglong)((longlong)iVar16 * (longlong)param_4) >> 0x20) << 0x10) +
            ((uint)((longlong)(int)uVar12 * (longlong)param_5) >> 0x10 |
            (int)((ulonglong)((longlong)(int)uVar12 * (longlong)param_5) >> 0x20) << 0x10) +
            ((uint)((longlong)iVar6 * (longlong)param_6) >> 0x10 |
            (int)((ulonglong)((longlong)iVar6 * (longlong)param_6) >> 0x20) << 0x10);
    param_6 = ((uint)((longlong)(int)uVar10 * (longlong)param_4) >> 0x10 |
              (int)((ulonglong)((longlong)(int)uVar10 * (longlong)param_4) >> 0x20) << 0x10) +
              ((uint)((longlong)iVar13 * (longlong)param_5) >> 0x10 |
              (int)((ulonglong)((longlong)iVar13 * (longlong)param_5) >> 0x20) << 0x10) +
              ((uint)((longlong)(int)uVar14 * (longlong)param_6) >> 0x10 |
              (int)((ulonglong)((longlong)(int)uVar14 * (longlong)param_6) >> 0x20) << 0x10);
  }
  _DAT_01c38b74 = param_6;
  _DAT_01c38b70 = iVar5;
  _DAT_01c38b6c = iVar4;
  _DAT_01d05014 = _DAT_01d05014 + 1;
  if (9 < _DAT_01d05014) {
    _DAT_01d046a0 = "..\\engine\\matrix.c";
    _DAT_01d046a4 = 799;
    FUN_004e4500("Matrix unbalance");
    return;
  }
  return;
}

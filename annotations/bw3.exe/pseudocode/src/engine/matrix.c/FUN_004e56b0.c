// Name: FUN_004e56b0
// Address: 004e56b0
// Address Range: [[004e56b0, 004e5def]]
// Convention: unknown
// Signature: void FUN_004e56b0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e56b0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

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
  
  iVar4 = _DAT_01d726a0;
  *(int *)(_DAT_01d726a0 * 4 + 0x1d7280c) = _DAT_01c6e2cc;
  *(int *)(iVar4 * 4 + 0x1d72834) = _DAT_01c6e2d0;
  *(int *)(iVar4 * 4 + 0x1d7285c) = _DAT_01c6e2d4;
  *(int *)(iVar4 * 4 + 0x1d72884) = _DAT_01c6e2f0;
  *(int *)(iVar4 * 4 + 0x1d728ac) = _DAT_01c6e2f4;
  *(int *)(iVar4 * 4 + 0x1d728d4) = _DAT_01c6e2f8;
  *(int *)(iVar4 * 4 + 0x1d726a4) = _DAT_01c6e2fc;
  *(int *)(iVar4 * 4 + 0x1d726cc) = _DAT_01c6e300;
  *(int *)(iVar4 * 4 + 0x1d726f4) = _DAT_01c6e304;
  *(int *)(iVar4 * 4 + 0x1d7271c) = _DAT_01c6e308;
  *(int *)(iVar4 * 4 + 0x1d72744) = _DAT_01c6e30c;
  *(int *)(iVar4 * 4 + 0x1d7276c) = _DAT_01c6e310;
  *(int *)(iVar4 * 4 + 0x1d72794) = _DAT_01c6e314;
  *(int *)(iVar4 * 4 + 0x1d727bc) = _DAT_01c6e318;
  *(int *)(iVar4 * 4 + 0x1d727e4) = _DAT_01c6e31c;
  param_4 = _DAT_01c6e2cc - param_4;
  param_5 = _DAT_01c6e2d0 - param_5;
  param_6 = _DAT_01c6e2d4 - param_6;
  _DAT_01d72694 = param_2;
  _DAT_01d72698 = param_3;
  _DAT_01d72690 = param_1;
  iVar4 = param_4;
  iVar5 = param_5;
  if ((param_1 != 0 || param_2 != 0) || param_3 != 0) {
    iVar4 = FUN_004e4d90(param_1);
    iVar5 = FUN_004e4dd0(param_1);
    iVar6 = FUN_004e4d90(param_2);
    iVar7 = FUN_004e4dd0(param_2);
    iVar8 = FUN_004e4d90(param_3);
    iVar9 = FUN_004e4dd0(param_3);
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
    lVar1 = (longlong)iVar15 * (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d72884);
    lVar2 = (longlong)(int)uVar11 * (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d728ac);
    lVar3 = (longlong)iVar17 * (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d728d4);
    _DAT_01c6e2f0 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar16 * (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d72884);
    lVar2 = (longlong)(int)uVar12 * (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d728ac);
    lVar3 = (longlong)iVar6 * (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d728d4);
    _DAT_01c6e2f4 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar10 * (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d72884);
    lVar2 = (longlong)iVar13 * (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d728ac);
    lVar3 = (longlong)(int)uVar14 * (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d728d4);
    _DAT_01c6e2f8 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d726a4) * (longlong)iVar15;
    lVar2 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d7271c) * (longlong)(int)uVar11;
    lVar3 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d72794) * (longlong)iVar17;
    _DAT_01c6e2fc =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d726cc) * (longlong)iVar15;
    lVar2 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d72744) * (longlong)(int)uVar11;
    lVar3 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d727bc) * (longlong)iVar17;
    _DAT_01c6e300 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d726f4) * (longlong)iVar15;
    lVar2 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d7276c) * (longlong)(int)uVar11;
    lVar3 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d727e4) * (longlong)iVar17;
    _DAT_01c6e304 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d726a4) * (longlong)iVar16;
    lVar2 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d7271c) * (longlong)(int)uVar12;
    lVar3 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d72794) * (longlong)iVar6;
    _DAT_01c6e308 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d726cc) * (longlong)iVar16;
    lVar2 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d72744) * (longlong)(int)uVar12;
    lVar3 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d727bc) * (longlong)iVar6;
    _DAT_01c6e30c =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d726f4) * (longlong)iVar16;
    lVar2 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d7276c) * (longlong)(int)uVar12;
    lVar3 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d727e4) * (longlong)iVar6;
    _DAT_01c6e310 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d726a4) * (longlong)(int)uVar10;
    lVar2 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d7271c) * (longlong)iVar13;
    lVar3 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d72794) * (longlong)(int)uVar14;
    _DAT_01c6e314 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d726cc) * (longlong)(int)uVar10;
    lVar2 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d72744) * (longlong)iVar13;
    lVar3 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d727bc) * (longlong)(int)uVar14;
    _DAT_01c6e318 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d726f4) * (longlong)(int)uVar10;
    lVar2 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d7276c) * (longlong)iVar13;
    lVar3 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d727e4) * (longlong)(int)uVar14;
    _DAT_01c6e31c =
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
  _DAT_01c6e2d4 = param_6;
  _DAT_01c6e2d0 = iVar5;
  _DAT_01c6e2cc = iVar4;
  _DAT_01d726a0 = _DAT_01d726a0 + 1;
  if (9 < _DAT_01d726a0) {
    _DAT_01d71de0 = "..\\engine\\matrix.c";
    _DAT_01d71de4 = 799;
    FUN_004e4330("Matrix unbalance");
    return;
  }
  return;
}

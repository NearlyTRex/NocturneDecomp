// Name: FUN_004cd380
// Address: 004cd380
// Address Range: [[004cd380, 004cdabf]]
// Convention: unknown
// Signature: void FUN_004cd380(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cd380(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

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
  
  iVar4 = _DAT_01cc5174;
  *(int *)(_DAT_01cc5174 * 4 + 0x1cc52e0) = _DAT_01c039b8;
  *(int *)(iVar4 * 4 + 0x1cc5308) = _DAT_01c039bc;
  *(int *)(iVar4 * 4 + 0x1cc5330) = _DAT_01c039c0;
  *(int *)(iVar4 * 4 + 0x1cc5358) = _DAT_01c039dc;
  *(int *)(iVar4 * 4 + 0x1cc5380) = _DAT_01c039e0;
  *(int *)(iVar4 * 4 + 0x1cc53a8) = _DAT_01c039e4;
  *(int *)(iVar4 * 4 + 0x1cc5178) = _DAT_01c039e8;
  *(int *)(iVar4 * 4 + 0x1cc51a0) = _DAT_01c039ec;
  *(int *)(iVar4 * 4 + 0x1cc51c8) = _DAT_01c039f0;
  *(int *)(iVar4 * 4 + 0x1cc51f0) = _DAT_01c039f4;
  *(int *)(iVar4 * 4 + 0x1cc5218) = _DAT_01c039f8;
  *(int *)(iVar4 * 4 + 0x1cc5240) = _DAT_01c039fc;
  *(int *)(iVar4 * 4 + 0x1cc5268) = _DAT_01c03a00;
  *(int *)(iVar4 * 4 + 0x1cc5290) = _DAT_01c03a04;
  *(int *)(iVar4 * 4 + 0x1cc52b8) = _DAT_01c03a08;
  param_4 = _DAT_01c039b8 - param_4;
  param_5 = _DAT_01c039bc - param_5;
  param_6 = _DAT_01c039c0 - param_6;
  _DAT_01cc5168 = param_2;
  _DAT_01cc516c = param_3;
  _DAT_01cc5164 = param_1;
  iVar4 = param_4;
  iVar5 = param_5;
  if ((param_1 != 0 || param_2 != 0) || param_3 != 0) {
    iVar4 = FUN_004cca60(param_1);
    iVar5 = FUN_004ccaa0(param_1);
    iVar6 = FUN_004cca60(param_2);
    iVar7 = FUN_004ccaa0(param_2);
    iVar8 = FUN_004cca60(param_3);
    iVar9 = FUN_004ccaa0(param_3);
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
    lVar1 = (longlong)iVar15 * (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5358);
    lVar2 = (longlong)(int)uVar11 * (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5380);
    lVar3 = (longlong)iVar17 * (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc53a8);
    _DAT_01c039dc =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar16 * (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5358);
    lVar2 = (longlong)(int)uVar12 * (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5380);
    lVar3 = (longlong)iVar6 * (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc53a8);
    _DAT_01c039e0 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar10 * (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5358);
    lVar2 = (longlong)iVar13 * (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5380);
    lVar3 = (longlong)(int)uVar14 * (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc53a8);
    _DAT_01c039e4 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5178) * (longlong)iVar15;
    lVar2 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc51f0) * (longlong)(int)uVar11;
    lVar3 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5268) * (longlong)iVar17;
    _DAT_01c039e8 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc51a0) * (longlong)iVar15;
    lVar2 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5218) * (longlong)(int)uVar11;
    lVar3 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5290) * (longlong)iVar17;
    _DAT_01c039ec =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc51c8) * (longlong)iVar15;
    lVar2 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5240) * (longlong)(int)uVar11;
    lVar3 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc52b8) * (longlong)iVar17;
    _DAT_01c039f0 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5178) * (longlong)iVar16;
    lVar2 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc51f0) * (longlong)(int)uVar12;
    lVar3 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5268) * (longlong)iVar6;
    _DAT_01c039f4 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc51a0) * (longlong)iVar16;
    lVar2 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5218) * (longlong)(int)uVar12;
    lVar3 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5290) * (longlong)iVar6;
    _DAT_01c039f8 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc51c8) * (longlong)iVar16;
    lVar2 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5240) * (longlong)(int)uVar12;
    lVar3 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc52b8) * (longlong)iVar6;
    _DAT_01c039fc =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5178) * (longlong)(int)uVar10;
    lVar2 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc51f0) * (longlong)iVar13;
    lVar3 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5268) * (longlong)(int)uVar14;
    _DAT_01c03a00 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc51a0) * (longlong)(int)uVar10;
    lVar2 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5218) * (longlong)iVar13;
    lVar3 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5290) * (longlong)(int)uVar14;
    _DAT_01c03a04 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc51c8) * (longlong)(int)uVar10;
    lVar2 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5240) * (longlong)iVar13;
    lVar3 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc52b8) * (longlong)(int)uVar14;
    _DAT_01c03a08 =
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
  _DAT_01c039c0 = param_6;
  _DAT_01c039bc = iVar5;
  _DAT_01c039b8 = iVar4;
  _DAT_01cc5174 = _DAT_01cc5174 + 1;
  if (9 < _DAT_01cc5174) {
    _DAT_01cc4800 = "@..\\engine\\matrix.c" + 1;
    _DAT_01cc4804 = 0x31c;
    FUN_004c8440("Matrix unbalance");
    return;
  }
  return;
}

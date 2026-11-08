// Name: FUN_00507c70
// Address: 00507c70
// Address Range: [[00507c70, 005083af]]
// Convention: unknown
// Signature: void FUN_00507c70(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00507c70(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

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
  
  iVar4 = _DAT_01d1dd74;
  *(int *)(_DAT_01d1dd74 * 4 + 0x1d1dee0) = _DAT_01c51d2c;
  *(int *)(iVar4 * 4 + 0x1d1df08) = _DAT_01c51d30;
  *(int *)(iVar4 * 4 + 0x1d1df30) = _DAT_01c51d34;
  *(int *)(iVar4 * 4 + 0x1d1df58) = _DAT_01c51d50;
  *(int *)(iVar4 * 4 + 0x1d1df80) = _DAT_01c51d54;
  *(int *)(iVar4 * 4 + 0x1d1dfa8) = _DAT_01c51d58;
  *(int *)(iVar4 * 4 + 0x1d1dd78) = _DAT_01c51d5c;
  *(int *)(iVar4 * 4 + 0x1d1dda0) = _DAT_01c51d60;
  *(int *)(iVar4 * 4 + 0x1d1ddc8) = _DAT_01c51d64;
  *(int *)(iVar4 * 4 + 0x1d1ddf0) = _DAT_01c51d68;
  *(int *)(iVar4 * 4 + 0x1d1de18) = _DAT_01c51d6c;
  *(int *)(iVar4 * 4 + 0x1d1de40) = _DAT_01c51d70;
  *(int *)(iVar4 * 4 + 0x1d1de68) = _DAT_01c51d74;
  *(int *)(iVar4 * 4 + 0x1d1de90) = _DAT_01c51d78;
  *(int *)(iVar4 * 4 + 0x1d1deb8) = _DAT_01c51d7c;
  param_4 = _DAT_01c51d2c - param_4;
  param_5 = _DAT_01c51d30 - param_5;
  param_6 = _DAT_01c51d34 - param_6;
  _DAT_01d1dd68 = param_2;
  _DAT_01d1dd6c = param_3;
  _DAT_01d1dd64 = param_1;
  iVar4 = param_4;
  iVar5 = param_5;
  if ((param_1 != 0 || param_2 != 0) || param_3 != 0) {
    iVar4 = FUN_00507350(param_1);
    iVar5 = FUN_00507390(param_1);
    iVar6 = FUN_00507350(param_2);
    iVar7 = FUN_00507390(param_2);
    iVar8 = FUN_00507350(param_3);
    iVar9 = FUN_00507390(param_3);
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
    lVar1 = (longlong)iVar15 * (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1df58);
    lVar2 = (longlong)(int)uVar11 * (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1df80);
    lVar3 = (longlong)iVar17 * (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1dfa8);
    _DAT_01c51d50 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar16 * (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1df58);
    lVar2 = (longlong)(int)uVar12 * (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1df80);
    lVar3 = (longlong)iVar6 * (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1dfa8);
    _DAT_01c51d54 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar10 * (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1df58);
    lVar2 = (longlong)iVar13 * (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1df80);
    lVar3 = (longlong)(int)uVar14 * (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1dfa8);
    _DAT_01c51d58 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1dd78) * (longlong)iVar15;
    lVar2 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1ddf0) * (longlong)(int)uVar11;
    lVar3 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1de68) * (longlong)iVar17;
    _DAT_01c51d5c =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1dda0) * (longlong)iVar15;
    lVar2 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1de18) * (longlong)(int)uVar11;
    lVar3 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1de90) * (longlong)iVar17;
    _DAT_01c51d60 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1ddc8) * (longlong)iVar15;
    lVar2 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1de40) * (longlong)(int)uVar11;
    lVar3 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1deb8) * (longlong)iVar17;
    _DAT_01c51d64 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1dd78) * (longlong)iVar16;
    lVar2 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1ddf0) * (longlong)(int)uVar12;
    lVar3 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1de68) * (longlong)iVar6;
    _DAT_01c51d68 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1dda0) * (longlong)iVar16;
    lVar2 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1de18) * (longlong)(int)uVar12;
    lVar3 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1de90) * (longlong)iVar6;
    _DAT_01c51d6c =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1ddc8) * (longlong)iVar16;
    lVar2 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1de40) * (longlong)(int)uVar12;
    lVar3 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1deb8) * (longlong)iVar6;
    _DAT_01c51d70 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1dd78) * (longlong)(int)uVar10;
    lVar2 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1ddf0) * (longlong)iVar13;
    lVar3 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1de68) * (longlong)(int)uVar14;
    _DAT_01c51d74 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1dda0) * (longlong)(int)uVar10;
    lVar2 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1de18) * (longlong)iVar13;
    lVar3 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1de90) * (longlong)(int)uVar14;
    _DAT_01c51d78 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1ddc8) * (longlong)(int)uVar10;
    lVar2 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1de40) * (longlong)iVar13;
    lVar3 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1deb8) * (longlong)(int)uVar14;
    _DAT_01c51d7c =
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
  _DAT_01c51d34 = param_6;
  _DAT_01c51d30 = iVar5;
  _DAT_01c51d2c = iVar4;
  _DAT_01d1dd74 = _DAT_01d1dd74 + 1;
  if (9 < _DAT_01d1dd74) {
    _DAT_01d1d400 = "..\\engine\\matrix.c";
    _DAT_01d1d404 = 799;
    FUN_005030e0("Matrix unbalance");
    return;
  }
  return;
}

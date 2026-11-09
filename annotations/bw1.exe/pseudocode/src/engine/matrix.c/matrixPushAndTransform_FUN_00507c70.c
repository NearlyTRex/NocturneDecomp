// Name: engine_matrix.c_matrixPushAndTransform_FUN_00507c70
// Address: 00507c70
// Address Range: [[00507c70, 005083af]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_matrixPushAndTransform_FUN_00507c70(int rot_x,int rot_y,int rot_z,int translate_x,int translate_y,int translate_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_matrix_c_matrixPushAndTransform_FUN_00507c70(int rot_x,int rot_y,int rot_z,int translate_x,int translate_y,int translate_z)

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
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  
  iVar7 = _DAT_01d1dd74;
  *(int *)(_DAT_01d1dd74 * 4 + 0x1d1dee0) = _DAT_01c51d2c;
  *(int *)(iVar7 * 4 + 0x1d1df08) = _DAT_01c51d30;
  *(int *)(iVar7 * 4 + 0x1d1df30) = _DAT_01c51d34;
  *(int *)(iVar7 * 4 + 0x1d1df58) = _DAT_01c51d50;
  *(int *)(iVar7 * 4 + 0x1d1df80) = _DAT_01c51d54;
  *(int *)(iVar7 * 4 + 0x1d1dfa8) = _DAT_01c51d58;
  *(int *)(iVar7 * 4 + 0x1d1dd78) = _DAT_01c51d5c;
  *(int *)(iVar7 * 4 + 0x1d1dda0) = _DAT_01c51d60;
  *(int *)(iVar7 * 4 + 0x1d1ddc8) = _DAT_01c51d64;
  *(int *)(iVar7 * 4 + 0x1d1ddf0) = _DAT_01c51d68;
  *(int *)(iVar7 * 4 + 0x1d1de18) = _DAT_01c51d6c;
  *(int *)(iVar7 * 4 + 0x1d1de40) = _DAT_01c51d70;
  *(int *)(iVar7 * 4 + 0x1d1de68) = _DAT_01c51d74;
  *(int *)(iVar7 * 4 + 0x1d1de90) = _DAT_01c51d78;
  *(int *)(iVar7 * 4 + 0x1d1deb8) = _DAT_01c51d7c;
  iVar4 = _DAT_01c51d2c - translate_x;
  iVar5 = _DAT_01c51d30 - translate_y;
  iVar6 = _DAT_01c51d34 - translate_z;
  _DAT_01d1dd68 = rot_y;
  _DAT_01d1dd6c = rot_z;
  _DAT_01d1dd64 = rot_x;
  iVar7 = iVar4;
  iVar8 = iVar5;
  if ((rot_x != 0 || rot_y != 0) || rot_z != 0) {
    iVar7 = engine_matrix_c_FUN_00507350(rot_x);
    iVar8 = engine_matrix_c_FUN_00507390(rot_x);
    iVar9 = engine_matrix_c_FUN_00507350(rot_y);
    iVar10 = engine_matrix_c_FUN_00507390(rot_y);
    iVar11 = engine_matrix_c_FUN_00507350(rot_z);
    iVar12 = engine_matrix_c_FUN_00507390(rot_z);
    lVar1 = (longlong)
            (int)((uint)((longlong)iVar9 * (longlong)iVar7) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar9 * (longlong)iVar7) >> 0x20) << 0x10) *
            (longlong)iVar11;
    iVar18 = ((uint)((longlong)iVar10 * (longlong)iVar12) >> 0x10 |
             (int)((ulonglong)((longlong)iVar10 * (longlong)iVar12) >> 0x20) << 0x10) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)
            (int)((uint)((longlong)iVar10 * (longlong)iVar7) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar10 * (longlong)iVar7) >> 0x20) << 0x10) *
            (longlong)iVar11;
    iVar19 = ((uint)((longlong)iVar9 * (longlong)-iVar12) >> 0x10 |
             (int)((ulonglong)((longlong)iVar9 * (longlong)-iVar12) >> 0x20) << 0x10) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    uVar13 = (uint)((longlong)iVar8 * (longlong)iVar11) >> 0x10 |
             (int)((ulonglong)((longlong)iVar8 * (longlong)iVar11) >> 0x20) << 0x10;
    uVar14 = (uint)((longlong)iVar8 * (longlong)iVar9) >> 0x10 |
             (int)((ulonglong)((longlong)iVar8 * (longlong)iVar9) >> 0x20) << 0x10;
    uVar15 = (uint)((longlong)iVar8 * (longlong)iVar10) >> 0x10 |
             (int)((ulonglong)((longlong)iVar8 * (longlong)iVar10) >> 0x20) << 0x10;
    iVar16 = -iVar7;
    lVar1 = (longlong)
            (int)((uint)((longlong)iVar9 * (longlong)iVar7) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar9 * (longlong)iVar7) >> 0x20) << 0x10) *
            (longlong)iVar12;
    iVar20 = ((uint)((longlong)iVar10 * (longlong)-iVar11) >> 0x10 |
             (int)((ulonglong)((longlong)iVar10 * (longlong)-iVar11) >> 0x20) << 0x10) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)
            (int)((uint)((longlong)iVar10 * (longlong)iVar7) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar10 * (longlong)iVar7) >> 0x20) << 0x10) *
            (longlong)iVar12;
    iVar9 = ((uint)((longlong)iVar11 * (longlong)iVar9) >> 0x10 |
            (int)((ulonglong)((longlong)iVar11 * (longlong)iVar9) >> 0x20) << 0x10) +
            ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    uVar17 = (uint)((longlong)iVar8 * (longlong)iVar12) >> 0x10 |
             (int)((ulonglong)((longlong)iVar8 * (longlong)iVar12) >> 0x20) << 0x10;
    lVar1 = (longlong)iVar18 * (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1df58);
    lVar2 = (longlong)(int)uVar14 * (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1df80);
    lVar3 = (longlong)iVar20 * (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1dfa8);
    _DAT_01c51d50 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar19 * (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1df58);
    lVar2 = (longlong)(int)uVar15 * (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1df80);
    lVar3 = (longlong)iVar9 * (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1dfa8);
    _DAT_01c51d54 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar13 * (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1df58);
    lVar2 = (longlong)iVar16 * (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1df80);
    lVar3 = (longlong)(int)uVar17 * (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1dfa8);
    _DAT_01c51d58 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1dd78) * (longlong)iVar18;
    lVar2 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1ddf0) * (longlong)(int)uVar14;
    lVar3 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1de68) * (longlong)iVar20;
    _DAT_01c51d5c =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1dda0) * (longlong)iVar18;
    lVar2 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1de18) * (longlong)(int)uVar14;
    lVar3 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1de90) * (longlong)iVar20;
    _DAT_01c51d60 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1ddc8) * (longlong)iVar18;
    lVar2 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1de40) * (longlong)(int)uVar14;
    lVar3 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1deb8) * (longlong)iVar20;
    _DAT_01c51d64 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1dd78) * (longlong)iVar19;
    lVar2 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1ddf0) * (longlong)(int)uVar15;
    lVar3 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1de68) * (longlong)iVar9;
    _DAT_01c51d68 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1dda0) * (longlong)iVar19;
    lVar2 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1de18) * (longlong)(int)uVar15;
    lVar3 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1de90) * (longlong)iVar9;
    _DAT_01c51d6c =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1ddc8) * (longlong)iVar19;
    lVar2 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1de40) * (longlong)(int)uVar15;
    lVar3 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1deb8) * (longlong)iVar9;
    _DAT_01c51d70 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1dd78) * (longlong)(int)uVar13;
    lVar2 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1ddf0) * (longlong)iVar16;
    lVar3 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1de68) * (longlong)(int)uVar17;
    _DAT_01c51d74 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1dda0) * (longlong)(int)uVar13;
    lVar2 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1de18) * (longlong)iVar16;
    lVar3 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1de90) * (longlong)(int)uVar17;
    _DAT_01c51d78 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1ddc8) * (longlong)(int)uVar13;
    lVar2 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1de40) * (longlong)iVar16;
    lVar3 = (longlong)*(int *)(_DAT_01d1dd74 * 4 + 0x1d1deb8) * (longlong)(int)uVar17;
    _DAT_01c51d7c =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    iVar7 = ((uint)((longlong)iVar18 * (longlong)iVar4) >> 0x10 |
            (int)((ulonglong)((longlong)iVar18 * (longlong)iVar4) >> 0x20) << 0x10) +
            ((uint)((longlong)(int)uVar14 * (longlong)iVar5) >> 0x10 |
            (int)((ulonglong)((longlong)(int)uVar14 * (longlong)iVar5) >> 0x20) << 0x10) +
            ((uint)((longlong)iVar20 * (longlong)iVar6) >> 0x10 |
            (int)((ulonglong)((longlong)iVar20 * (longlong)iVar6) >> 0x20) << 0x10);
    iVar8 = ((uint)((longlong)iVar19 * (longlong)iVar4) >> 0x10 |
            (int)((ulonglong)((longlong)iVar19 * (longlong)iVar4) >> 0x20) << 0x10) +
            ((uint)((longlong)(int)uVar15 * (longlong)iVar5) >> 0x10 |
            (int)((ulonglong)((longlong)(int)uVar15 * (longlong)iVar5) >> 0x20) << 0x10) +
            ((uint)((longlong)iVar9 * (longlong)iVar6) >> 0x10 |
            (int)((ulonglong)((longlong)iVar9 * (longlong)iVar6) >> 0x20) << 0x10);
    iVar6 = ((uint)((longlong)(int)uVar13 * (longlong)iVar4) >> 0x10 |
            (int)((ulonglong)((longlong)(int)uVar13 * (longlong)iVar4) >> 0x20) << 0x10) +
            ((uint)((longlong)iVar16 * (longlong)iVar5) >> 0x10 |
            (int)((ulonglong)((longlong)iVar16 * (longlong)iVar5) >> 0x20) << 0x10) +
            ((uint)((longlong)(int)uVar17 * (longlong)iVar6) >> 0x10 |
            (int)((ulonglong)((longlong)(int)uVar17 * (longlong)iVar6) >> 0x20) << 0x10);
  }
  _DAT_01c51d34 = iVar6;
  _DAT_01c51d30 = iVar8;
  _DAT_01c51d2c = iVar7;
  _DAT_01d1dd74 = _DAT_01d1dd74 + 1;
  if (9 < _DAT_01d1dd74) {
    _DAT_01d1d400 = "..\\engine\\matrix.c";
    _DAT_01d1d404 = 799;
    core_main_c_FUN_005030e0("Matrix unbalance");
    return;
  }
  return;
}

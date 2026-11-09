// Name: engine_matrix.c_matrixPushAndTransform_FUN_004e8fd0
// Address: 004e8fd0
// Address Range: [[004e8fd0, 004e970f]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_matrixPushAndTransform_FUN_004e8fd0(int rot_x,int rot_y,int rot_z,int translate_x,int translate_y,int translate_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_matrix_c_matrixPushAndTransform_FUN_004e8fd0(int rot_x,int rot_y,int rot_z,int translate_x,int translate_y,int translate_z)

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
  
  iVar7 = _DAT_01d05014;
  *(int *)(_DAT_01d05014 * 4 + 0x1d05180) = _DAT_01c38b6c;
  *(int *)(iVar7 * 4 + 0x1d051a8) = _DAT_01c38b70;
  *(int *)(iVar7 * 4 + 0x1d051d0) = _DAT_01c38b74;
  *(int *)(iVar7 * 4 + 0x1d051f8) = _DAT_01c38b90;
  *(int *)(iVar7 * 4 + 0x1d05220) = _DAT_01c38b94;
  *(int *)(iVar7 * 4 + 0x1d05248) = _DAT_01c38b98;
  *(int *)(iVar7 * 4 + 0x1d05018) = _DAT_01c38b9c;
  *(int *)(iVar7 * 4 + 0x1d05040) = _DAT_01c38ba0;
  *(int *)(iVar7 * 4 + 0x1d05068) = _DAT_01c38ba4;
  *(int *)(iVar7 * 4 + 0x1d05090) = _DAT_01c38ba8;
  *(int *)(iVar7 * 4 + 0x1d050b8) = _DAT_01c38bac;
  *(int *)(iVar7 * 4 + 0x1d050e0) = _DAT_01c38bb0;
  *(int *)(iVar7 * 4 + 0x1d05108) = _DAT_01c38bb4;
  *(int *)(iVar7 * 4 + 0x1d05130) = _DAT_01c38bb8;
  *(int *)(iVar7 * 4 + 0x1d05158) = _DAT_01c38bbc;
  iVar4 = _DAT_01c38b6c - translate_x;
  iVar5 = _DAT_01c38b70 - translate_y;
  iVar6 = _DAT_01c38b74 - translate_z;
  _DAT_01d05008 = rot_y;
  _DAT_01d0500c = rot_z;
  _DAT_01d05004 = rot_x;
  iVar7 = iVar4;
  iVar8 = iVar5;
  if ((rot_x != 0 || rot_y != 0) || rot_z != 0) {
    iVar7 = engine_matrix_c_FUN_004e86b0(rot_x);
    iVar8 = engine_matrix_c_FUN_004e86f0(rot_x);
    iVar9 = engine_matrix_c_FUN_004e86b0(rot_y);
    iVar10 = engine_matrix_c_FUN_004e86f0(rot_y);
    iVar11 = engine_matrix_c_FUN_004e86b0(rot_z);
    iVar12 = engine_matrix_c_FUN_004e86f0(rot_z);
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
    lVar1 = (longlong)iVar18 * (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d051f8);
    lVar2 = (longlong)(int)uVar14 * (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05220);
    lVar3 = (longlong)iVar20 * (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05248);
    _DAT_01c38b90 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar19 * (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d051f8);
    lVar2 = (longlong)(int)uVar15 * (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05220);
    lVar3 = (longlong)iVar9 * (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05248);
    _DAT_01c38b94 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar13 * (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d051f8);
    lVar2 = (longlong)iVar16 * (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05220);
    lVar3 = (longlong)(int)uVar17 * (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05248);
    _DAT_01c38b98 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05018) * (longlong)iVar18;
    lVar2 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05090) * (longlong)(int)uVar14;
    lVar3 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05108) * (longlong)iVar20;
    _DAT_01c38b9c =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05040) * (longlong)iVar18;
    lVar2 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d050b8) * (longlong)(int)uVar14;
    lVar3 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05130) * (longlong)iVar20;
    _DAT_01c38ba0 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05068) * (longlong)iVar18;
    lVar2 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d050e0) * (longlong)(int)uVar14;
    lVar3 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05158) * (longlong)iVar20;
    _DAT_01c38ba4 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05018) * (longlong)iVar19;
    lVar2 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05090) * (longlong)(int)uVar15;
    lVar3 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05108) * (longlong)iVar9;
    _DAT_01c38ba8 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05040) * (longlong)iVar19;
    lVar2 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d050b8) * (longlong)(int)uVar15;
    lVar3 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05130) * (longlong)iVar9;
    _DAT_01c38bac =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05068) * (longlong)iVar19;
    lVar2 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d050e0) * (longlong)(int)uVar15;
    lVar3 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05158) * (longlong)iVar9;
    _DAT_01c38bb0 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05018) * (longlong)(int)uVar13;
    lVar2 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05090) * (longlong)iVar16;
    lVar3 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05108) * (longlong)(int)uVar17;
    _DAT_01c38bb4 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05040) * (longlong)(int)uVar13;
    lVar2 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d050b8) * (longlong)iVar16;
    lVar3 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05130) * (longlong)(int)uVar17;
    _DAT_01c38bb8 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05068) * (longlong)(int)uVar13;
    lVar2 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d050e0) * (longlong)iVar16;
    lVar3 = (longlong)*(int *)(_DAT_01d05014 * 4 + 0x1d05158) * (longlong)(int)uVar17;
    _DAT_01c38bbc =
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
  _DAT_01c38b74 = iVar6;
  _DAT_01c38b70 = iVar8;
  _DAT_01c38b6c = iVar7;
  _DAT_01d05014 = _DAT_01d05014 + 1;
  if (9 < _DAT_01d05014) {
    _DAT_01d046a0 = "..\\engine\\matrix.c";
    _DAT_01d046a4 = 799;
    core_main_c_FUN_004e4500("Matrix unbalance");
    return;
  }
  return;
}

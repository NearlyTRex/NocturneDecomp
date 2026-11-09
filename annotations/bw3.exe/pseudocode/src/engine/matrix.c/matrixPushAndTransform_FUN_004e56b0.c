// Name: engine_matrix.c_matrixPushAndTransform_FUN_004e56b0
// Address: 004e56b0
// Address Range: [[004e56b0, 004e5def]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_matrixPushAndTransform_FUN_004e56b0(int rot_x,int rot_y,int rot_z,int translate_x,int translate_y,int translate_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_matrix_c_matrixPushAndTransform_FUN_004e56b0(int rot_x,int rot_y,int rot_z,int translate_x,int translate_y,int translate_z)

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
  
  iVar7 = _DAT_01d726a0;
  *(int *)(_DAT_01d726a0 * 4 + 0x1d7280c) = _DAT_01c6e2cc;
  *(int *)(iVar7 * 4 + 0x1d72834) = _DAT_01c6e2d0;
  *(int *)(iVar7 * 4 + 0x1d7285c) = _DAT_01c6e2d4;
  *(int *)(iVar7 * 4 + 0x1d72884) = _DAT_01c6e2f0;
  *(int *)(iVar7 * 4 + 0x1d728ac) = _DAT_01c6e2f4;
  *(int *)(iVar7 * 4 + 0x1d728d4) = _DAT_01c6e2f8;
  *(int *)(iVar7 * 4 + 0x1d726a4) = _DAT_01c6e2fc;
  *(int *)(iVar7 * 4 + 0x1d726cc) = _DAT_01c6e300;
  *(int *)(iVar7 * 4 + 0x1d726f4) = _DAT_01c6e304;
  *(int *)(iVar7 * 4 + 0x1d7271c) = _DAT_01c6e308;
  *(int *)(iVar7 * 4 + 0x1d72744) = _DAT_01c6e30c;
  *(int *)(iVar7 * 4 + 0x1d7276c) = _DAT_01c6e310;
  *(int *)(iVar7 * 4 + 0x1d72794) = _DAT_01c6e314;
  *(int *)(iVar7 * 4 + 0x1d727bc) = _DAT_01c6e318;
  *(int *)(iVar7 * 4 + 0x1d727e4) = _DAT_01c6e31c;
  iVar4 = _DAT_01c6e2cc - translate_x;
  iVar5 = _DAT_01c6e2d0 - translate_y;
  iVar6 = _DAT_01c6e2d4 - translate_z;
  _DAT_01d72694 = rot_y;
  _DAT_01d72698 = rot_z;
  _DAT_01d72690 = rot_x;
  iVar7 = iVar4;
  iVar8 = iVar5;
  if ((rot_x != 0 || rot_y != 0) || rot_z != 0) {
    iVar7 = engine_matrix_c_FUN_004e4d90(rot_x);
    iVar8 = engine_matrix_c_FUN_004e4dd0(rot_x);
    iVar9 = engine_matrix_c_FUN_004e4d90(rot_y);
    iVar10 = engine_matrix_c_FUN_004e4dd0(rot_y);
    iVar11 = engine_matrix_c_FUN_004e4d90(rot_z);
    iVar12 = engine_matrix_c_FUN_004e4dd0(rot_z);
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
    lVar1 = (longlong)iVar18 * (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d72884);
    lVar2 = (longlong)(int)uVar14 * (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d728ac);
    lVar3 = (longlong)iVar20 * (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d728d4);
    _DAT_01c6e2f0 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar19 * (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d72884);
    lVar2 = (longlong)(int)uVar15 * (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d728ac);
    lVar3 = (longlong)iVar9 * (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d728d4);
    _DAT_01c6e2f4 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar13 * (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d72884);
    lVar2 = (longlong)iVar16 * (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d728ac);
    lVar3 = (longlong)(int)uVar17 * (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d728d4);
    _DAT_01c6e2f8 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d726a4) * (longlong)iVar18;
    lVar2 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d7271c) * (longlong)(int)uVar14;
    lVar3 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d72794) * (longlong)iVar20;
    _DAT_01c6e2fc =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d726cc) * (longlong)iVar18;
    lVar2 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d72744) * (longlong)(int)uVar14;
    lVar3 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d727bc) * (longlong)iVar20;
    _DAT_01c6e300 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d726f4) * (longlong)iVar18;
    lVar2 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d7276c) * (longlong)(int)uVar14;
    lVar3 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d727e4) * (longlong)iVar20;
    _DAT_01c6e304 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d726a4) * (longlong)iVar19;
    lVar2 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d7271c) * (longlong)(int)uVar15;
    lVar3 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d72794) * (longlong)iVar9;
    _DAT_01c6e308 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d726cc) * (longlong)iVar19;
    lVar2 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d72744) * (longlong)(int)uVar15;
    lVar3 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d727bc) * (longlong)iVar9;
    _DAT_01c6e30c =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d726f4) * (longlong)iVar19;
    lVar2 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d7276c) * (longlong)(int)uVar15;
    lVar3 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d727e4) * (longlong)iVar9;
    _DAT_01c6e310 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d726a4) * (longlong)(int)uVar13;
    lVar2 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d7271c) * (longlong)iVar16;
    lVar3 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d72794) * (longlong)(int)uVar17;
    _DAT_01c6e314 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d726cc) * (longlong)(int)uVar13;
    lVar2 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d72744) * (longlong)iVar16;
    lVar3 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d727bc) * (longlong)(int)uVar17;
    _DAT_01c6e318 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d726f4) * (longlong)(int)uVar13;
    lVar2 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d7276c) * (longlong)iVar16;
    lVar3 = (longlong)*(int *)(_DAT_01d726a0 * 4 + 0x1d727e4) * (longlong)(int)uVar17;
    _DAT_01c6e31c =
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
  _DAT_01c6e2d4 = iVar6;
  _DAT_01c6e2d0 = iVar8;
  _DAT_01c6e2cc = iVar7;
  _DAT_01d726a0 = _DAT_01d726a0 + 1;
  if (9 < _DAT_01d726a0) {
    _DAT_01d71de0 = "..\\engine\\matrix.c";
    _DAT_01d71de4 = 799;
    core_main_c_FUN_004e4330("Matrix unbalance");
    return;
  }
  return;
}

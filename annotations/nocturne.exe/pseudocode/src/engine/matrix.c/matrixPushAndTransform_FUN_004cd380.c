// Name: engine_matrix.c_matrixPushAndTransform_FUN_004cd380
// Address: 004cd380
// Address Range: [[004cd380, 004cdabf]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_matrixPushAndTransform_FUN_004cd380(int rot_x,int rot_y,int rot_z,int translate_x,int translate_y,int translate_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_matrix_c_matrixPushAndTransform_FUN_004cd380(int rot_x,int rot_y,int rot_z,int translate_x,int translate_y,int translate_z)

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
  
  iVar7 = _DAT_01cc5174;
  *(int *)(_DAT_01cc5174 * 4 + 0x1cc52e0) = _DAT_01c039b8;
  *(int *)(iVar7 * 4 + 0x1cc5308) = _DAT_01c039bc;
  *(int *)(iVar7 * 4 + 0x1cc5330) = _DAT_01c039c0;
  *(int *)(iVar7 * 4 + 0x1cc5358) = _DAT_01c039dc;
  *(int *)(iVar7 * 4 + 0x1cc5380) = _DAT_01c039e0;
  *(int *)(iVar7 * 4 + 0x1cc53a8) = _DAT_01c039e4;
  *(int *)(iVar7 * 4 + 0x1cc5178) = _DAT_01c039e8;
  *(int *)(iVar7 * 4 + 0x1cc51a0) = _DAT_01c039ec;
  *(int *)(iVar7 * 4 + 0x1cc51c8) = _DAT_01c039f0;
  *(int *)(iVar7 * 4 + 0x1cc51f0) = _DAT_01c039f4;
  *(int *)(iVar7 * 4 + 0x1cc5218) = _DAT_01c039f8;
  *(int *)(iVar7 * 4 + 0x1cc5240) = _DAT_01c039fc;
  *(int *)(iVar7 * 4 + 0x1cc5268) = _DAT_01c03a00;
  *(int *)(iVar7 * 4 + 0x1cc5290) = _DAT_01c03a04;
  *(int *)(iVar7 * 4 + 0x1cc52b8) = _DAT_01c03a08;
  iVar4 = _DAT_01c039b8 - translate_x;
  iVar5 = _DAT_01c039bc - translate_y;
  iVar6 = _DAT_01c039c0 - translate_z;
  _DAT_01cc5168 = rot_y;
  _DAT_01cc516c = rot_z;
  _DAT_01cc5164 = rot_x;
  iVar7 = iVar4;
  iVar8 = iVar5;
  if ((rot_x != 0 || rot_y != 0) || rot_z != 0) {
    iVar7 = engine_matrix_c_interpolatedSin_FUN_004cca60(rot_x);
    iVar8 = engine_matrix_c_interpolatedCos_FUN_004ccaa0(rot_x);
    iVar9 = engine_matrix_c_interpolatedSin_FUN_004cca60(rot_y);
    iVar10 = engine_matrix_c_interpolatedCos_FUN_004ccaa0(rot_y);
    iVar11 = engine_matrix_c_interpolatedSin_FUN_004cca60(rot_z);
    iVar12 = engine_matrix_c_interpolatedCos_FUN_004ccaa0(rot_z);
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
    lVar1 = (longlong)iVar18 * (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5358);
    lVar2 = (longlong)(int)uVar14 * (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5380);
    lVar3 = (longlong)iVar20 * (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc53a8);
    _DAT_01c039dc =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar19 * (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5358);
    lVar2 = (longlong)(int)uVar15 * (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5380);
    lVar3 = (longlong)iVar9 * (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc53a8);
    _DAT_01c039e0 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar13 * (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5358);
    lVar2 = (longlong)iVar16 * (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5380);
    lVar3 = (longlong)(int)uVar17 * (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc53a8);
    _DAT_01c039e4 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5178) * (longlong)iVar18;
    lVar2 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc51f0) * (longlong)(int)uVar14;
    lVar3 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5268) * (longlong)iVar20;
    _DAT_01c039e8 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc51a0) * (longlong)iVar18;
    lVar2 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5218) * (longlong)(int)uVar14;
    lVar3 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5290) * (longlong)iVar20;
    _DAT_01c039ec =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc51c8) * (longlong)iVar18;
    lVar2 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5240) * (longlong)(int)uVar14;
    lVar3 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc52b8) * (longlong)iVar20;
    _DAT_01c039f0 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5178) * (longlong)iVar19;
    lVar2 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc51f0) * (longlong)(int)uVar15;
    lVar3 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5268) * (longlong)iVar9;
    _DAT_01c039f4 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc51a0) * (longlong)iVar19;
    lVar2 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5218) * (longlong)(int)uVar15;
    lVar3 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5290) * (longlong)iVar9;
    _DAT_01c039f8 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc51c8) * (longlong)iVar19;
    lVar2 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5240) * (longlong)(int)uVar15;
    lVar3 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc52b8) * (longlong)iVar9;
    _DAT_01c039fc =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5178) * (longlong)(int)uVar13;
    lVar2 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc51f0) * (longlong)iVar16;
    lVar3 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5268) * (longlong)(int)uVar17;
    _DAT_01c03a00 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc51a0) * (longlong)(int)uVar13;
    lVar2 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5218) * (longlong)iVar16;
    lVar3 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5290) * (longlong)(int)uVar17;
    _DAT_01c03a04 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc51c8) * (longlong)(int)uVar13;
    lVar2 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc5240) * (longlong)iVar16;
    lVar3 = (longlong)*(int *)(_DAT_01cc5174 * 4 + 0x1cc52b8) * (longlong)(int)uVar17;
    _DAT_01c03a08 =
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
  _DAT_01c039c0 = iVar6;
  _DAT_01c039bc = iVar8;
  _DAT_01c039b8 = iVar7;
  _DAT_01cc5174 = _DAT_01cc5174 + 1;
  if (9 < _DAT_01cc5174) {
    g_CurrentFilename = "..\\engine\\matrix.c";
    g_CurrentLineNumber = 796;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Matrix unbalance");
    return;
  }
  return;
}

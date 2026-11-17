// Name: engine_matrix.c_matrixPushAndTransform_FUN_004e8fd0
// Address: 004e8fd0
// Address Range: [[004e8fd0, 004e970f]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_matrixPushAndTransform_FUN_004e8fd0(int rot_x,int rot_y,int rot_z,int translate_x,int translate_y,int translate_z)

#include "nocturne.h"

void __cdecl engine_matrix_c_matrixPushAndTransform_FUN_004e8fd0(int rot_x,int rot_y,int rot_z,int translate_x,int translate_y,int translate_z)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  iVar5 = g_INT_01d05014;
  g_INT_ARRAY_01d05180[g_INT_01d05014] = g_INT_01c38b6c;
  g_INT_ARRAY_01d051a8[iVar5] = g_INT_01c38b70;
  g_INT_ARRAY_01d051d0[iVar5] = g_INT_01c38b74;
  g_INT_ARRAY_01d051f8[iVar5] = g_INT_01c38b90;
  g_INT_ARRAY_01d05220[iVar5] = g_INT_01c38b94;
  g_INT_ARRAY_01d05248[iVar5] = g_INT_01c38b98;
  g_INT_ARRAY_01d05018[iVar5] = g_INT_01c38b9c;
  g_INT_ARRAY_01d05040[iVar5] = g_INT_01c38ba0;
  g_INT_ARRAY_01d05068[iVar5] = g_INT_01c38ba4;
  g_INT_ARRAY_01d05090[iVar5] = g_INT_01c38ba8;
  g_INT_ARRAY_01d050b8[iVar5] = g_INT_01c38bac;
  g_INT_ARRAY_01d050e0[iVar5] = g_INT_01c38bb0;
  g_INT_ARRAY_01d05108[iVar5] = g_INT_01c38bb4;
  g_INT_ARRAY_01d05130[iVar5] = g_INT_01c38bb8;
  g_INT_ARRAY_01d05158[iVar5] = g_INT_01c38bbc;
  iVar2 = g_INT_01c38b6c - translate_x;
  iVar3 = g_INT_01c38b70 - translate_y;
  iVar4 = g_INT_01c38b74 - translate_z;
  g_UINT_01d05008 = rot_y;
  g_UINT_01d0500c = rot_z;
  g_UINT_01d05004 = rot_x;
  iVar5 = iVar2;
  iVar6 = iVar3;
  if ((rot_x != 0 || rot_y != 0) || rot_z != 0) {
    iVar5 = engine_matrix_c_interpolatedSin_FUN_004e86b0(rot_x);
    iVar6 = engine_matrix_c_interpolatedCos_FUN_004e86f0(rot_x);
    iVar7 = engine_matrix_c_interpolatedSin_FUN_004e86b0(rot_y);
    iVar8 = engine_matrix_c_interpolatedCos_FUN_004e86f0(rot_y);
    iVar9 = engine_matrix_c_interpolatedSin_FUN_004e86b0(rot_z);
    iVar10 = engine_matrix_c_interpolatedCos_FUN_004e86f0(rot_z);
    lVar1 = (longlong)
            (int)((uint)((longlong)iVar7 * (longlong)iVar5) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar7 * (longlong)iVar5) >> 0x20) << 0x10) *
            (longlong)iVar9;
    iVar16 = ((uint)((longlong)iVar8 * (longlong)iVar10) >> 0x10 |
             (int)((ulonglong)((longlong)iVar8 * (longlong)iVar10) >> 0x20) << 0x10) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)
            (int)((uint)((longlong)iVar8 * (longlong)iVar5) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar8 * (longlong)iVar5) >> 0x20) << 0x10) *
            (longlong)iVar9;
    iVar17 = ((uint)((longlong)iVar7 * (longlong)-iVar10) >> 0x10 |
             (int)((ulonglong)((longlong)iVar7 * (longlong)-iVar10) >> 0x20) << 0x10) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    uVar11 = (uint)((longlong)iVar6 * (longlong)iVar9) >> 0x10 |
             (int)((ulonglong)((longlong)iVar6 * (longlong)iVar9) >> 0x20) << 0x10;
    uVar12 = (uint)((longlong)iVar6 * (longlong)iVar7) >> 0x10 |
             (int)((ulonglong)((longlong)iVar6 * (longlong)iVar7) >> 0x20) << 0x10;
    uVar13 = (uint)((longlong)iVar6 * (longlong)iVar8) >> 0x10 |
             (int)((ulonglong)((longlong)iVar6 * (longlong)iVar8) >> 0x20) << 0x10;
    iVar14 = -iVar5;
    lVar1 = (longlong)
            (int)((uint)((longlong)iVar7 * (longlong)iVar5) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar7 * (longlong)iVar5) >> 0x20) << 0x10) *
            (longlong)iVar10;
    iVar18 = ((uint)((longlong)iVar8 * (longlong)-iVar9) >> 0x10 |
             (int)((ulonglong)((longlong)iVar8 * (longlong)-iVar9) >> 0x20) << 0x10) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)
            (int)((uint)((longlong)iVar8 * (longlong)iVar5) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar8 * (longlong)iVar5) >> 0x20) << 0x10) *
            (longlong)iVar10;
    iVar7 = ((uint)((longlong)iVar9 * (longlong)iVar7) >> 0x10 |
            (int)((ulonglong)((longlong)iVar9 * (longlong)iVar7) >> 0x20) << 0x10) +
            ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    uVar15 = (uint)((longlong)iVar6 * (longlong)iVar10) >> 0x10 |
             (int)((ulonglong)((longlong)iVar6 * (longlong)iVar10) >> 0x20) << 0x10;
    g_INT_01c38b90 =
         ((uint)((longlong)iVar16 * (longlong)g_INT_ARRAY_01d051f8[g_INT_01d05014]) >> 0x10 |
         (int)((ulonglong)((longlong)iVar16 * (longlong)g_INT_ARRAY_01d051f8[g_INT_01d05014]) >>
              0x20) << 0x10) +
         ((uint)((longlong)(int)uVar12 * (longlong)g_INT_ARRAY_01d05220[g_INT_01d05014]) >> 0x10 |
         (int)((ulonglong)((longlong)(int)uVar12 * (longlong)g_INT_ARRAY_01d05220[g_INT_01d05014])
              >> 0x20) << 0x10) +
         ((uint)((longlong)iVar18 * (longlong)g_INT_ARRAY_01d05248[g_INT_01d05014]) >> 0x10 |
         (int)((ulonglong)((longlong)iVar18 * (longlong)g_INT_ARRAY_01d05248[g_INT_01d05014]) >>
              0x20) << 0x10);
    g_INT_01c38b94 =
         ((uint)((longlong)iVar17 * (longlong)g_INT_ARRAY_01d051f8[g_INT_01d05014]) >> 0x10 |
         (int)((ulonglong)((longlong)iVar17 * (longlong)g_INT_ARRAY_01d051f8[g_INT_01d05014]) >>
              0x20) << 0x10) +
         ((uint)((longlong)(int)uVar13 * (longlong)g_INT_ARRAY_01d05220[g_INT_01d05014]) >> 0x10 |
         (int)((ulonglong)((longlong)(int)uVar13 * (longlong)g_INT_ARRAY_01d05220[g_INT_01d05014])
              >> 0x20) << 0x10) +
         ((uint)((longlong)iVar7 * (longlong)g_INT_ARRAY_01d05248[g_INT_01d05014]) >> 0x10 |
         (int)((ulonglong)((longlong)iVar7 * (longlong)g_INT_ARRAY_01d05248[g_INT_01d05014]) >> 0x20
              ) << 0x10);
    g_INT_01c38b98 =
         ((uint)((longlong)(int)uVar11 * (longlong)g_INT_ARRAY_01d051f8[g_INT_01d05014]) >> 0x10 |
         (int)((ulonglong)((longlong)(int)uVar11 * (longlong)g_INT_ARRAY_01d051f8[g_INT_01d05014])
              >> 0x20) << 0x10) +
         ((uint)((longlong)iVar14 * (longlong)g_INT_ARRAY_01d05220[g_INT_01d05014]) >> 0x10 |
         (int)((ulonglong)((longlong)iVar14 * (longlong)g_INT_ARRAY_01d05220[g_INT_01d05014]) >>
              0x20) << 0x10) +
         ((uint)((longlong)(int)uVar15 * (longlong)g_INT_ARRAY_01d05248[g_INT_01d05014]) >> 0x10 |
         (int)((ulonglong)((longlong)(int)uVar15 * (longlong)g_INT_ARRAY_01d05248[g_INT_01d05014])
              >> 0x20) << 0x10);
    g_INT_01c38b9c =
         ((uint)((longlong)g_INT_ARRAY_01d05018[g_INT_01d05014] * (longlong)iVar16) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d05018[g_INT_01d05014] * (longlong)iVar16) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d05090[g_INT_01d05014] * (longlong)(int)uVar12) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d05090[g_INT_01d05014] * (longlong)(int)uVar12)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d05108[g_INT_01d05014] * (longlong)iVar18) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d05108[g_INT_01d05014] * (longlong)iVar18) >>
              0x20) << 0x10);
    g_INT_01c38ba0 =
         ((uint)((longlong)g_INT_ARRAY_01d05040[g_INT_01d05014] * (longlong)iVar16) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d05040[g_INT_01d05014] * (longlong)iVar16) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d050b8[g_INT_01d05014] * (longlong)(int)uVar12) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d050b8[g_INT_01d05014] * (longlong)(int)uVar12)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d05130[g_INT_01d05014] * (longlong)iVar18) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d05130[g_INT_01d05014] * (longlong)iVar18) >>
              0x20) << 0x10);
    g_INT_01c38ba4 =
         ((uint)((longlong)g_INT_ARRAY_01d05068[g_INT_01d05014] * (longlong)iVar16) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d05068[g_INT_01d05014] * (longlong)iVar16) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d050e0[g_INT_01d05014] * (longlong)(int)uVar12) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d050e0[g_INT_01d05014] * (longlong)(int)uVar12)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d05158[g_INT_01d05014] * (longlong)iVar18) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d05158[g_INT_01d05014] * (longlong)iVar18) >>
              0x20) << 0x10);
    g_INT_01c38ba8 =
         ((uint)((longlong)g_INT_ARRAY_01d05018[g_INT_01d05014] * (longlong)iVar17) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d05018[g_INT_01d05014] * (longlong)iVar17) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d05090[g_INT_01d05014] * (longlong)(int)uVar13) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d05090[g_INT_01d05014] * (longlong)(int)uVar13)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d05108[g_INT_01d05014] * (longlong)iVar7) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d05108[g_INT_01d05014] * (longlong)iVar7) >> 0x20
              ) << 0x10);
    g_INT_01c38bac =
         ((uint)((longlong)g_INT_ARRAY_01d05040[g_INT_01d05014] * (longlong)iVar17) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d05040[g_INT_01d05014] * (longlong)iVar17) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d050b8[g_INT_01d05014] * (longlong)(int)uVar13) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d050b8[g_INT_01d05014] * (longlong)(int)uVar13)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d05130[g_INT_01d05014] * (longlong)iVar7) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d05130[g_INT_01d05014] * (longlong)iVar7) >> 0x20
              ) << 0x10);
    g_INT_01c38bb0 =
         ((uint)((longlong)g_INT_ARRAY_01d05068[g_INT_01d05014] * (longlong)iVar17) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d05068[g_INT_01d05014] * (longlong)iVar17) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d050e0[g_INT_01d05014] * (longlong)(int)uVar13) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d050e0[g_INT_01d05014] * (longlong)(int)uVar13)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d05158[g_INT_01d05014] * (longlong)iVar7) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d05158[g_INT_01d05014] * (longlong)iVar7) >> 0x20
              ) << 0x10);
    g_INT_01c38bb4 =
         ((uint)((longlong)g_INT_ARRAY_01d05018[g_INT_01d05014] * (longlong)(int)uVar11) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d05018[g_INT_01d05014] * (longlong)(int)uVar11)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d05090[g_INT_01d05014] * (longlong)iVar14) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d05090[g_INT_01d05014] * (longlong)iVar14) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d05108[g_INT_01d05014] * (longlong)(int)uVar15) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d05108[g_INT_01d05014] * (longlong)(int)uVar15)
              >> 0x20) << 0x10);
    g_INT_01c38bb8 =
         ((uint)((longlong)g_INT_ARRAY_01d05040[g_INT_01d05014] * (longlong)(int)uVar11) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d05040[g_INT_01d05014] * (longlong)(int)uVar11)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d050b8[g_INT_01d05014] * (longlong)iVar14) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d050b8[g_INT_01d05014] * (longlong)iVar14) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d05130[g_INT_01d05014] * (longlong)(int)uVar15) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d05130[g_INT_01d05014] * (longlong)(int)uVar15)
              >> 0x20) << 0x10);
    g_INT_01c38bbc =
         ((uint)((longlong)g_INT_ARRAY_01d05068[g_INT_01d05014] * (longlong)(int)uVar11) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d05068[g_INT_01d05014] * (longlong)(int)uVar11)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d050e0[g_INT_01d05014] * (longlong)iVar14) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d050e0[g_INT_01d05014] * (longlong)iVar14) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d05158[g_INT_01d05014] * (longlong)(int)uVar15) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d05158[g_INT_01d05014] * (longlong)(int)uVar15)
              >> 0x20) << 0x10);
    iVar5 = ((uint)((longlong)iVar16 * (longlong)iVar2) >> 0x10 |
            (int)((ulonglong)((longlong)iVar16 * (longlong)iVar2) >> 0x20) << 0x10) +
            ((uint)((longlong)(int)uVar12 * (longlong)iVar3) >> 0x10 |
            (int)((ulonglong)((longlong)(int)uVar12 * (longlong)iVar3) >> 0x20) << 0x10) +
            ((uint)((longlong)iVar18 * (longlong)iVar4) >> 0x10 |
            (int)((ulonglong)((longlong)iVar18 * (longlong)iVar4) >> 0x20) << 0x10);
    iVar6 = ((uint)((longlong)iVar17 * (longlong)iVar2) >> 0x10 |
            (int)((ulonglong)((longlong)iVar17 * (longlong)iVar2) >> 0x20) << 0x10) +
            ((uint)((longlong)(int)uVar13 * (longlong)iVar3) >> 0x10 |
            (int)((ulonglong)((longlong)(int)uVar13 * (longlong)iVar3) >> 0x20) << 0x10) +
            ((uint)((longlong)iVar7 * (longlong)iVar4) >> 0x10 |
            (int)((ulonglong)((longlong)iVar7 * (longlong)iVar4) >> 0x20) << 0x10);
    iVar4 = ((uint)((longlong)(int)uVar11 * (longlong)iVar2) >> 0x10 |
            (int)((ulonglong)((longlong)(int)uVar11 * (longlong)iVar2) >> 0x20) << 0x10) +
            ((uint)((longlong)iVar14 * (longlong)iVar3) >> 0x10 |
            (int)((ulonglong)((longlong)iVar14 * (longlong)iVar3) >> 0x20) << 0x10) +
            ((uint)((longlong)(int)uVar15 * (longlong)iVar4) >> 0x10 |
            (int)((ulonglong)((longlong)(int)uVar15 * (longlong)iVar4) >> 0x20) << 0x10);
  }
  g_INT_01c38b74 = iVar4;
  g_INT_01c38b70 = iVar6;
  g_INT_01c38b6c = iVar5;
  g_INT_01d05014 = g_INT_01d05014 + 1;
  if (9 < g_INT_01d05014) {
    g_CHAR_PTR_01d046a0 = "..\\engine\\matrix.c";
    g_INT_01d046a4 = 799;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Matrix unbalance");
    return;
  }
  return;
}

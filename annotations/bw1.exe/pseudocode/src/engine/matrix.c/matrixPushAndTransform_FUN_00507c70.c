// Name: engine_matrix.c_matrixPushAndTransform_FUN_00507c70
// Address: 00507c70
// Address Range: [[00507c70, 005083af]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_matrixPushAndTransform_FUN_00507c70(int rot_x,int rot_y,int rot_z,int translate_x,int translate_y,int translate_z)

#include "nocturne.h"

void __cdecl engine_matrix_c_matrixPushAndTransform_FUN_00507c70(int rot_x,int rot_y,int rot_z,int translate_x,int translate_y,int translate_z)

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
  
  iVar5 = g_INT_01d1dd74;
  g_INT_ARRAY_01d1dee0[g_INT_01d1dd74] = g_INT_01c51d2c;
  g_INT_ARRAY_01d1df08[iVar5] = g_INT_01c51d30;
  g_INT_ARRAY_01d1df30[iVar5] = g_INT_01c51d34;
  g_INT_ARRAY_01d1df58[iVar5] = g_INT_01c51d50;
  g_INT_ARRAY_01d1df80[iVar5] = g_INT_01c51d54;
  g_INT_ARRAY_01d1dfa8[iVar5] = g_INT_01c51d58;
  g_INT_ARRAY_01d1dd78[iVar5] = g_INT_01c51d5c;
  g_INT_ARRAY_01d1dda0[iVar5] = g_INT_01c51d60;
  g_INT_ARRAY_01d1ddc8[iVar5] = g_INT_01c51d64;
  g_INT_ARRAY_01d1ddf0[iVar5] = g_INT_01c51d68;
  g_INT_ARRAY_01d1de18[iVar5] = g_INT_01c51d6c;
  g_INT_ARRAY_01d1de40[iVar5] = g_INT_01c51d70;
  g_INT_ARRAY_01d1de68[iVar5] = g_INT_01c51d74;
  g_INT_ARRAY_01d1de90[iVar5] = g_INT_01c51d78;
  g_INT_ARRAY_01d1deb8[iVar5] = g_INT_01c51d7c;
  iVar2 = g_INT_01c51d2c - translate_x;
  iVar3 = g_INT_01c51d30 - translate_y;
  iVar4 = g_INT_01c51d34 - translate_z;
  g_UINT_01d1dd68 = rot_y;
  g_UINT_01d1dd6c = rot_z;
  g_UINT_01d1dd64 = rot_x;
  iVar5 = iVar2;
  iVar6 = iVar3;
  if ((rot_x != 0 || rot_y != 0) || rot_z != 0) {
    iVar5 = engine_matrix_c_interpolatedSin_FUN_00507350(rot_x);
    iVar6 = engine_matrix_c_interpolatedCos_FUN_00507390(rot_x);
    iVar7 = engine_matrix_c_interpolatedSin_FUN_00507350(rot_y);
    iVar8 = engine_matrix_c_interpolatedCos_FUN_00507390(rot_y);
    iVar9 = engine_matrix_c_interpolatedSin_FUN_00507350(rot_z);
    iVar10 = engine_matrix_c_interpolatedCos_FUN_00507390(rot_z);
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
    g_INT_01c51d50 =
         ((uint)((longlong)iVar16 * (longlong)g_INT_ARRAY_01d1df58[g_INT_01d1dd74]) >> 0x10 |
         (int)((ulonglong)((longlong)iVar16 * (longlong)g_INT_ARRAY_01d1df58[g_INT_01d1dd74]) >>
              0x20) << 0x10) +
         ((uint)((longlong)(int)uVar12 * (longlong)g_INT_ARRAY_01d1df80[g_INT_01d1dd74]) >> 0x10 |
         (int)((ulonglong)((longlong)(int)uVar12 * (longlong)g_INT_ARRAY_01d1df80[g_INT_01d1dd74])
              >> 0x20) << 0x10) +
         ((uint)((longlong)iVar18 * (longlong)g_INT_ARRAY_01d1dfa8[g_INT_01d1dd74]) >> 0x10 |
         (int)((ulonglong)((longlong)iVar18 * (longlong)g_INT_ARRAY_01d1dfa8[g_INT_01d1dd74]) >>
              0x20) << 0x10);
    g_INT_01c51d54 =
         ((uint)((longlong)iVar17 * (longlong)g_INT_ARRAY_01d1df58[g_INT_01d1dd74]) >> 0x10 |
         (int)((ulonglong)((longlong)iVar17 * (longlong)g_INT_ARRAY_01d1df58[g_INT_01d1dd74]) >>
              0x20) << 0x10) +
         ((uint)((longlong)(int)uVar13 * (longlong)g_INT_ARRAY_01d1df80[g_INT_01d1dd74]) >> 0x10 |
         (int)((ulonglong)((longlong)(int)uVar13 * (longlong)g_INT_ARRAY_01d1df80[g_INT_01d1dd74])
              >> 0x20) << 0x10) +
         ((uint)((longlong)iVar7 * (longlong)g_INT_ARRAY_01d1dfa8[g_INT_01d1dd74]) >> 0x10 |
         (int)((ulonglong)((longlong)iVar7 * (longlong)g_INT_ARRAY_01d1dfa8[g_INT_01d1dd74]) >> 0x20
              ) << 0x10);
    g_INT_01c51d58 =
         ((uint)((longlong)(int)uVar11 * (longlong)g_INT_ARRAY_01d1df58[g_INT_01d1dd74]) >> 0x10 |
         (int)((ulonglong)((longlong)(int)uVar11 * (longlong)g_INT_ARRAY_01d1df58[g_INT_01d1dd74])
              >> 0x20) << 0x10) +
         ((uint)((longlong)iVar14 * (longlong)g_INT_ARRAY_01d1df80[g_INT_01d1dd74]) >> 0x10 |
         (int)((ulonglong)((longlong)iVar14 * (longlong)g_INT_ARRAY_01d1df80[g_INT_01d1dd74]) >>
              0x20) << 0x10) +
         ((uint)((longlong)(int)uVar15 * (longlong)g_INT_ARRAY_01d1dfa8[g_INT_01d1dd74]) >> 0x10 |
         (int)((ulonglong)((longlong)(int)uVar15 * (longlong)g_INT_ARRAY_01d1dfa8[g_INT_01d1dd74])
              >> 0x20) << 0x10);
    g_INT_01c51d5c =
         ((uint)((longlong)g_INT_ARRAY_01d1dd78[g_INT_01d1dd74] * (longlong)iVar16) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d1dd78[g_INT_01d1dd74] * (longlong)iVar16) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d1ddf0[g_INT_01d1dd74] * (longlong)(int)uVar12) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d1ddf0[g_INT_01d1dd74] * (longlong)(int)uVar12)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d1de68[g_INT_01d1dd74] * (longlong)iVar18) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d1de68[g_INT_01d1dd74] * (longlong)iVar18) >>
              0x20) << 0x10);
    g_INT_01c51d60 =
         ((uint)((longlong)g_INT_ARRAY_01d1dda0[g_INT_01d1dd74] * (longlong)iVar16) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d1dda0[g_INT_01d1dd74] * (longlong)iVar16) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d1de18[g_INT_01d1dd74] * (longlong)(int)uVar12) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d1de18[g_INT_01d1dd74] * (longlong)(int)uVar12)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d1de90[g_INT_01d1dd74] * (longlong)iVar18) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d1de90[g_INT_01d1dd74] * (longlong)iVar18) >>
              0x20) << 0x10);
    g_INT_01c51d64 =
         ((uint)((longlong)g_INT_ARRAY_01d1ddc8[g_INT_01d1dd74] * (longlong)iVar16) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d1ddc8[g_INT_01d1dd74] * (longlong)iVar16) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d1de40[g_INT_01d1dd74] * (longlong)(int)uVar12) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d1de40[g_INT_01d1dd74] * (longlong)(int)uVar12)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d1deb8[g_INT_01d1dd74] * (longlong)iVar18) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d1deb8[g_INT_01d1dd74] * (longlong)iVar18) >>
              0x20) << 0x10);
    g_INT_01c51d68 =
         ((uint)((longlong)g_INT_ARRAY_01d1dd78[g_INT_01d1dd74] * (longlong)iVar17) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d1dd78[g_INT_01d1dd74] * (longlong)iVar17) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d1ddf0[g_INT_01d1dd74] * (longlong)(int)uVar13) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d1ddf0[g_INT_01d1dd74] * (longlong)(int)uVar13)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d1de68[g_INT_01d1dd74] * (longlong)iVar7) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d1de68[g_INT_01d1dd74] * (longlong)iVar7) >> 0x20
              ) << 0x10);
    g_INT_01c51d6c =
         ((uint)((longlong)g_INT_ARRAY_01d1dda0[g_INT_01d1dd74] * (longlong)iVar17) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d1dda0[g_INT_01d1dd74] * (longlong)iVar17) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d1de18[g_INT_01d1dd74] * (longlong)(int)uVar13) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d1de18[g_INT_01d1dd74] * (longlong)(int)uVar13)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d1de90[g_INT_01d1dd74] * (longlong)iVar7) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d1de90[g_INT_01d1dd74] * (longlong)iVar7) >> 0x20
              ) << 0x10);
    g_INT_01c51d70 =
         ((uint)((longlong)g_INT_ARRAY_01d1ddc8[g_INT_01d1dd74] * (longlong)iVar17) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d1ddc8[g_INT_01d1dd74] * (longlong)iVar17) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d1de40[g_INT_01d1dd74] * (longlong)(int)uVar13) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d1de40[g_INT_01d1dd74] * (longlong)(int)uVar13)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d1deb8[g_INT_01d1dd74] * (longlong)iVar7) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d1deb8[g_INT_01d1dd74] * (longlong)iVar7) >> 0x20
              ) << 0x10);
    g_INT_01c51d74 =
         ((uint)((longlong)g_INT_ARRAY_01d1dd78[g_INT_01d1dd74] * (longlong)(int)uVar11) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d1dd78[g_INT_01d1dd74] * (longlong)(int)uVar11)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d1ddf0[g_INT_01d1dd74] * (longlong)iVar14) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d1ddf0[g_INT_01d1dd74] * (longlong)iVar14) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d1de68[g_INT_01d1dd74] * (longlong)(int)uVar15) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d1de68[g_INT_01d1dd74] * (longlong)(int)uVar15)
              >> 0x20) << 0x10);
    g_INT_01c51d78 =
         ((uint)((longlong)g_INT_ARRAY_01d1dda0[g_INT_01d1dd74] * (longlong)(int)uVar11) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d1dda0[g_INT_01d1dd74] * (longlong)(int)uVar11)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d1de18[g_INT_01d1dd74] * (longlong)iVar14) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d1de18[g_INT_01d1dd74] * (longlong)iVar14) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d1de90[g_INT_01d1dd74] * (longlong)(int)uVar15) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d1de90[g_INT_01d1dd74] * (longlong)(int)uVar15)
              >> 0x20) << 0x10);
    g_INT_01c51d7c =
         ((uint)((longlong)g_INT_ARRAY_01d1ddc8[g_INT_01d1dd74] * (longlong)(int)uVar11) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d1ddc8[g_INT_01d1dd74] * (longlong)(int)uVar11)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d1de40[g_INT_01d1dd74] * (longlong)iVar14) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d1de40[g_INT_01d1dd74] * (longlong)iVar14) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01d1deb8[g_INT_01d1dd74] * (longlong)(int)uVar15) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01d1deb8[g_INT_01d1dd74] * (longlong)(int)uVar15)
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
  g_INT_01c51d34 = iVar4;
  g_INT_01c51d30 = iVar6;
  g_INT_01c51d2c = iVar5;
  g_INT_01d1dd74 = g_INT_01d1dd74 + 1;
  if (9 < g_INT_01d1dd74) {
    g_CHAR_PTR_01d1d400 = "..\\engine\\matrix.c";
    g_INT_01d1d404 = 799;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Matrix unbalance");
    return;
  }
  return;
}

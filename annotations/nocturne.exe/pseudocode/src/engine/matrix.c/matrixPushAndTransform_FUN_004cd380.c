// Name: engine_matrix.c_matrixPushAndTransform_FUN_004cd380
// Address: 004cd380
// Address Range: [[004cd380, 004cdabf]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_matrixPushAndTransform_FUN_004cd380(int rot_x,int rot_y,int rot_z,int translate_x,int translate_y,int translate_z)

#include "nocturne.h"

void __cdecl engine_matrix_c_matrixPushAndTransform_FUN_004cd380(int rot_x,int rot_y,int rot_z,int translate_x,int translate_y,int translate_z)

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
  
  iVar5 = g_INT_01cc5174;
  g_INT_ARRAY_01cc52e0[g_INT_01cc5174] = g_RelativeX;
  g_INT_ARRAY_01cc5308[iVar5] = g_RelativeY;
  g_INT_ARRAY_01cc5330[iVar5] = g_RelativeZ;
  g_INT_ARRAY_01cc5358[iVar5] = g_INT_01c039dc;
  g_INT_ARRAY_01cc5380[iVar5] = g_INT_01c039e0;
  g_INT_ARRAY_01cc53a8[iVar5] = g_INT_01c039e4;
  g_INT_ARRAY_01cc5178[iVar5] = g_TransformMatrix.m[0].x;
  g_INT_ARRAY_01cc51a0[iVar5] = g_TransformMatrix.m[0].y;
  g_INT_ARRAY_01cc51c8[iVar5] = g_TransformMatrix.m[0].z;
  g_INT_ARRAY_01cc51f0[iVar5] = g_TransformMatrix.m[1].x;
  g_INT_ARRAY_01cc5218[iVar5] = g_TransformMatrix.m[1].y;
  g_INT_ARRAY_01cc5240[iVar5] = g_TransformMatrix.m[1].z;
  g_INT_ARRAY_01cc5268[iVar5] = g_TransformMatrix.m[2].x;
  g_INT_ARRAY_01cc5290[iVar5] = g_TransformMatrix.m[2].y;
  g_INT_ARRAY_01cc52b8[iVar5] = g_TransformMatrix.m[2].z;
  iVar2 = g_RelativeX - translate_x;
  iVar3 = g_RelativeY - translate_y;
  iVar4 = g_RelativeZ - translate_z;
  g_UINT_01cc5168 = rot_y;
  g_UINT_01cc516c = rot_z;
  g_UINT_01cc5164 = rot_x;
  iVar5 = iVar2;
  iVar6 = iVar3;
  if ((rot_x != 0 || rot_y != 0) || rot_z != 0) {
    iVar5 = engine_matrix_c_interpolatedSin_FUN_004cca60(rot_x);
    iVar6 = engine_matrix_c_interpolatedCos_FUN_004ccaa0(rot_x);
    iVar7 = engine_matrix_c_interpolatedSin_FUN_004cca60(rot_y);
    iVar8 = engine_matrix_c_interpolatedCos_FUN_004ccaa0(rot_y);
    iVar9 = engine_matrix_c_interpolatedSin_FUN_004cca60(rot_z);
    iVar10 = engine_matrix_c_interpolatedCos_FUN_004ccaa0(rot_z);
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
    g_INT_01c039dc =
         ((uint)((longlong)iVar16 * (longlong)g_INT_ARRAY_01cc5358[g_INT_01cc5174]) >> 0x10 |
         (int)((ulonglong)((longlong)iVar16 * (longlong)g_INT_ARRAY_01cc5358[g_INT_01cc5174]) >>
              0x20) << 0x10) +
         ((uint)((longlong)(int)uVar12 * (longlong)g_INT_ARRAY_01cc5380[g_INT_01cc5174]) >> 0x10 |
         (int)((ulonglong)((longlong)(int)uVar12 * (longlong)g_INT_ARRAY_01cc5380[g_INT_01cc5174])
              >> 0x20) << 0x10) +
         ((uint)((longlong)iVar18 * (longlong)g_INT_ARRAY_01cc53a8[g_INT_01cc5174]) >> 0x10 |
         (int)((ulonglong)((longlong)iVar18 * (longlong)g_INT_ARRAY_01cc53a8[g_INT_01cc5174]) >>
              0x20) << 0x10);
    g_INT_01c039e0 =
         ((uint)((longlong)iVar17 * (longlong)g_INT_ARRAY_01cc5358[g_INT_01cc5174]) >> 0x10 |
         (int)((ulonglong)((longlong)iVar17 * (longlong)g_INT_ARRAY_01cc5358[g_INT_01cc5174]) >>
              0x20) << 0x10) +
         ((uint)((longlong)(int)uVar13 * (longlong)g_INT_ARRAY_01cc5380[g_INT_01cc5174]) >> 0x10 |
         (int)((ulonglong)((longlong)(int)uVar13 * (longlong)g_INT_ARRAY_01cc5380[g_INT_01cc5174])
              >> 0x20) << 0x10) +
         ((uint)((longlong)iVar7 * (longlong)g_INT_ARRAY_01cc53a8[g_INT_01cc5174]) >> 0x10 |
         (int)((ulonglong)((longlong)iVar7 * (longlong)g_INT_ARRAY_01cc53a8[g_INT_01cc5174]) >> 0x20
              ) << 0x10);
    g_INT_01c039e4 =
         ((uint)((longlong)(int)uVar11 * (longlong)g_INT_ARRAY_01cc5358[g_INT_01cc5174]) >> 0x10 |
         (int)((ulonglong)((longlong)(int)uVar11 * (longlong)g_INT_ARRAY_01cc5358[g_INT_01cc5174])
              >> 0x20) << 0x10) +
         ((uint)((longlong)iVar14 * (longlong)g_INT_ARRAY_01cc5380[g_INT_01cc5174]) >> 0x10 |
         (int)((ulonglong)((longlong)iVar14 * (longlong)g_INT_ARRAY_01cc5380[g_INT_01cc5174]) >>
              0x20) << 0x10) +
         ((uint)((longlong)(int)uVar15 * (longlong)g_INT_ARRAY_01cc53a8[g_INT_01cc5174]) >> 0x10 |
         (int)((ulonglong)((longlong)(int)uVar15 * (longlong)g_INT_ARRAY_01cc53a8[g_INT_01cc5174])
              >> 0x20) << 0x10);
    g_TransformMatrix.m[0].x =
         ((uint)((longlong)g_INT_ARRAY_01cc5178[g_INT_01cc5174] * (longlong)iVar16) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01cc5178[g_INT_01cc5174] * (longlong)iVar16) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01cc51f0[g_INT_01cc5174] * (longlong)(int)uVar12) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01cc51f0[g_INT_01cc5174] * (longlong)(int)uVar12)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01cc5268[g_INT_01cc5174] * (longlong)iVar18) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01cc5268[g_INT_01cc5174] * (longlong)iVar18) >>
              0x20) << 0x10);
    g_TransformMatrix.m[0].y =
         ((uint)((longlong)g_INT_ARRAY_01cc51a0[g_INT_01cc5174] * (longlong)iVar16) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01cc51a0[g_INT_01cc5174] * (longlong)iVar16) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01cc5218[g_INT_01cc5174] * (longlong)(int)uVar12) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01cc5218[g_INT_01cc5174] * (longlong)(int)uVar12)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01cc5290[g_INT_01cc5174] * (longlong)iVar18) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01cc5290[g_INT_01cc5174] * (longlong)iVar18) >>
              0x20) << 0x10);
    g_TransformMatrix.m[0].z =
         ((uint)((longlong)g_INT_ARRAY_01cc51c8[g_INT_01cc5174] * (longlong)iVar16) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01cc51c8[g_INT_01cc5174] * (longlong)iVar16) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01cc5240[g_INT_01cc5174] * (longlong)(int)uVar12) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01cc5240[g_INT_01cc5174] * (longlong)(int)uVar12)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01cc52b8[g_INT_01cc5174] * (longlong)iVar18) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01cc52b8[g_INT_01cc5174] * (longlong)iVar18) >>
              0x20) << 0x10);
    g_TransformMatrix.m[1].x =
         ((uint)((longlong)g_INT_ARRAY_01cc5178[g_INT_01cc5174] * (longlong)iVar17) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01cc5178[g_INT_01cc5174] * (longlong)iVar17) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01cc51f0[g_INT_01cc5174] * (longlong)(int)uVar13) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01cc51f0[g_INT_01cc5174] * (longlong)(int)uVar13)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01cc5268[g_INT_01cc5174] * (longlong)iVar7) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01cc5268[g_INT_01cc5174] * (longlong)iVar7) >> 0x20
              ) << 0x10);
    g_TransformMatrix.m[1].y =
         ((uint)((longlong)g_INT_ARRAY_01cc51a0[g_INT_01cc5174] * (longlong)iVar17) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01cc51a0[g_INT_01cc5174] * (longlong)iVar17) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01cc5218[g_INT_01cc5174] * (longlong)(int)uVar13) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01cc5218[g_INT_01cc5174] * (longlong)(int)uVar13)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01cc5290[g_INT_01cc5174] * (longlong)iVar7) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01cc5290[g_INT_01cc5174] * (longlong)iVar7) >> 0x20
              ) << 0x10);
    g_TransformMatrix.m[1].z =
         ((uint)((longlong)g_INT_ARRAY_01cc51c8[g_INT_01cc5174] * (longlong)iVar17) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01cc51c8[g_INT_01cc5174] * (longlong)iVar17) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01cc5240[g_INT_01cc5174] * (longlong)(int)uVar13) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01cc5240[g_INT_01cc5174] * (longlong)(int)uVar13)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01cc52b8[g_INT_01cc5174] * (longlong)iVar7) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01cc52b8[g_INT_01cc5174] * (longlong)iVar7) >> 0x20
              ) << 0x10);
    g_TransformMatrix.m[2].x =
         ((uint)((longlong)g_INT_ARRAY_01cc5178[g_INT_01cc5174] * (longlong)(int)uVar11) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01cc5178[g_INT_01cc5174] * (longlong)(int)uVar11)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01cc51f0[g_INT_01cc5174] * (longlong)iVar14) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01cc51f0[g_INT_01cc5174] * (longlong)iVar14) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01cc5268[g_INT_01cc5174] * (longlong)(int)uVar15) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01cc5268[g_INT_01cc5174] * (longlong)(int)uVar15)
              >> 0x20) << 0x10);
    g_TransformMatrix.m[2].y =
         ((uint)((longlong)g_INT_ARRAY_01cc51a0[g_INT_01cc5174] * (longlong)(int)uVar11) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01cc51a0[g_INT_01cc5174] * (longlong)(int)uVar11)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01cc5218[g_INT_01cc5174] * (longlong)iVar14) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01cc5218[g_INT_01cc5174] * (longlong)iVar14) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01cc5290[g_INT_01cc5174] * (longlong)(int)uVar15) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01cc5290[g_INT_01cc5174] * (longlong)(int)uVar15)
              >> 0x20) << 0x10);
    g_TransformMatrix.m[2].z =
         ((uint)((longlong)g_INT_ARRAY_01cc51c8[g_INT_01cc5174] * (longlong)(int)uVar11) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01cc51c8[g_INT_01cc5174] * (longlong)(int)uVar11)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01cc5240[g_INT_01cc5174] * (longlong)iVar14) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01cc5240[g_INT_01cc5174] * (longlong)iVar14) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_INT_ARRAY_01cc52b8[g_INT_01cc5174] * (longlong)(int)uVar15) >> 0x10 |
         (int)((ulonglong)((longlong)g_INT_ARRAY_01cc52b8[g_INT_01cc5174] * (longlong)(int)uVar15)
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
  g_RelativeZ = iVar4;
  g_RelativeY = iVar6;
  g_RelativeX = iVar5;
  g_INT_01cc5174 = g_INT_01cc5174 + 1;
  if (9 < g_INT_01cc5174) {
    g_CurrentFilename = "..\\engine\\matrix.c";
    g_CurrentLineNumber = 796;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Matrix unbalance");
    return;
  }
  return;
}

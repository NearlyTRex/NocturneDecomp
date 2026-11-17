// Name: engine_matrix.c_matrixPushAndRotate_FUN_004cdfa0
// Address: 004cdfa0
// Address Range: [[004cdfa0, 004ce709]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_matrixPushAndRotate_FUN_004cdfa0(int rotation_x,int rotation_y,int rotation_z)

#include "nocturne.h"

void __cdecl engine_matrix_c_matrixPushAndRotate_FUN_004cdfa0(int rotation_x,int rotation_y,int rotation_z)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float10 x;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  double dVar19;
  double dVar20;
  int local_4c;
  int local_48;
  int local_44;
  
  iVar2 = g_INT_01cc5174;
  g_INT_ARRAY_01cc52e0[g_INT_01cc5174] = g_RelativeX;
  g_INT_ARRAY_01cc5308[iVar2] = g_RelativeY;
  g_INT_ARRAY_01cc5330[iVar2] = g_RelativeZ;
  g_INT_ARRAY_01cc5358[iVar2] = g_INT_01c039dc;
  g_INT_ARRAY_01cc5380[iVar2] = g_INT_01c039e0;
  g_INT_ARRAY_01cc53a8[iVar2] = g_INT_01c039e4;
  g_INT_ARRAY_01cc5178[iVar2] = g_TransformMatrix.m[0].x;
  g_INT_ARRAY_01cc51a0[iVar2] = g_TransformMatrix.m[0].y;
  g_INT_ARRAY_01cc51c8[iVar2] = g_TransformMatrix.m[0].z;
  g_INT_ARRAY_01cc51f0[iVar2] = g_TransformMatrix.m[1].x;
  g_INT_ARRAY_01cc5218[iVar2] = g_TransformMatrix.m[1].y;
  g_INT_ARRAY_01cc5240[iVar2] = g_TransformMatrix.m[1].z;
  g_INT_ARRAY_01cc5268[iVar2] = g_TransformMatrix.m[2].x;
  g_INT_ARRAY_01cc5290[iVar2] = g_TransformMatrix.m[2].y;
  x = (float10)rotation_z;
  g_INT_ARRAY_01cc52b8[iVar2] = g_TransformMatrix.m[2].z;
  atan2((float10)rotation_x,x);
  fVar16 = atan2((float10)rotation_x,x);
  fVar17 = (float10)0.31830988619288902;
  fVar18 = (float10)32768;
  dVar19 = round((double)(-fVar16 * fVar17 * fVar18));
  dVar20 = round((double)(x * fVar17 * fVar18));
  iVar2 = engine_matrix_c_interpolatedSin_FUN_004cca60((int)ROUND(dVar19));
  iVar3 = engine_matrix_c_interpolatedCos_FUN_004ccaa0(0x4ce0a6);
  iVar4 = engine_matrix_c_interpolatedSin_FUN_004cca60(0);
  iVar5 = engine_matrix_c_interpolatedCos_FUN_004ccaa0(0);
  iVar6 = engine_matrix_c_interpolatedSin_FUN_004cca60((int)ROUND(dVar20));
  iVar7 = engine_matrix_c_interpolatedCos_FUN_004ccaa0((int)ROUND(dVar20));
  lVar1 = (longlong)
          (int)((uint)((longlong)iVar4 * (longlong)iVar2) >> 0x10 |
               (int)((ulonglong)((longlong)iVar4 * (longlong)iVar2) >> 0x20) << 0x10) *
          (longlong)iVar6;
  iVar13 = ((uint)((longlong)iVar5 * (longlong)iVar7) >> 0x10 |
           (int)((ulonglong)((longlong)iVar5 * (longlong)iVar7) >> 0x20) << 0x10) +
           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  lVar1 = (longlong)
          (int)((uint)((longlong)iVar5 * (longlong)iVar2) >> 0x10 |
               (int)((ulonglong)((longlong)iVar5 * (longlong)iVar2) >> 0x20) << 0x10) *
          (longlong)iVar6;
  iVar14 = ((uint)((longlong)iVar4 * (longlong)-iVar7) >> 0x10 |
           (int)((ulonglong)((longlong)iVar4 * (longlong)-iVar7) >> 0x20) << 0x10) +
           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  uVar8 = (uint)((longlong)iVar3 * (longlong)iVar6) >> 0x10 |
          (int)((ulonglong)((longlong)iVar3 * (longlong)iVar6) >> 0x20) << 0x10;
  uVar9 = (uint)((longlong)iVar3 * (longlong)iVar4) >> 0x10 |
          (int)((ulonglong)((longlong)iVar3 * (longlong)iVar4) >> 0x20) << 0x10;
  uVar10 = (uint)((longlong)iVar3 * (longlong)iVar5) >> 0x10 |
           (int)((ulonglong)((longlong)iVar3 * (longlong)iVar5) >> 0x20) << 0x10;
  iVar11 = -iVar2;
  lVar1 = (longlong)
          (int)((uint)((longlong)iVar4 * (longlong)iVar2) >> 0x10 |
               (int)((ulonglong)((longlong)iVar4 * (longlong)iVar2) >> 0x20) << 0x10) *
          (longlong)iVar7;
  iVar15 = ((uint)((longlong)iVar5 * (longlong)-iVar6) >> 0x10 |
           (int)((ulonglong)((longlong)iVar5 * (longlong)-iVar6) >> 0x20) << 0x10) +
           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  lVar1 = (longlong)
          (int)((uint)((longlong)iVar5 * (longlong)iVar2) >> 0x10 |
               (int)((ulonglong)((longlong)iVar5 * (longlong)iVar2) >> 0x20) << 0x10) *
          (longlong)iVar7;
  iVar2 = ((uint)((longlong)iVar6 * (longlong)iVar4) >> 0x10 |
          (int)((ulonglong)((longlong)iVar6 * (longlong)iVar4) >> 0x20) << 0x10) +
          ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  uVar12 = (uint)((longlong)iVar3 * (longlong)iVar7) >> 0x10 |
           (int)((ulonglong)((longlong)iVar3 * (longlong)iVar7) >> 0x20) << 0x10;
  g_RelativeX = ((uint)((longlong)iVar13 * (longlong)local_4c) >> 0x10 |
                (int)((ulonglong)((longlong)iVar13 * (longlong)local_4c) >> 0x20) << 0x10) +
                ((uint)((longlong)(int)uVar9 * (longlong)local_48) >> 0x10 |
                (int)((ulonglong)((longlong)(int)uVar9 * (longlong)local_48) >> 0x20) << 0x10) +
                ((uint)((longlong)iVar15 * (longlong)local_44) >> 0x10 |
                (int)((ulonglong)((longlong)iVar15 * (longlong)local_44) >> 0x20) << 0x10);
  g_RelativeY = ((uint)((longlong)iVar14 * (longlong)local_4c) >> 0x10 |
                (int)((ulonglong)((longlong)iVar14 * (longlong)local_4c) >> 0x20) << 0x10) +
                ((uint)((longlong)(int)uVar10 * (longlong)local_48) >> 0x10 |
                (int)((ulonglong)((longlong)(int)uVar10 * (longlong)local_48) >> 0x20) << 0x10) +
                ((uint)((longlong)iVar2 * (longlong)local_44) >> 0x10 |
                (int)((ulonglong)((longlong)iVar2 * (longlong)local_44) >> 0x20) << 0x10);
  g_RelativeZ = ((uint)((longlong)(int)uVar8 * (longlong)local_4c) >> 0x10 |
                (int)((ulonglong)((longlong)(int)uVar8 * (longlong)local_4c) >> 0x20) << 0x10) +
                ((uint)((longlong)iVar11 * (longlong)local_48) >> 0x10 |
                (int)((ulonglong)((longlong)iVar11 * (longlong)local_48) >> 0x20) << 0x10) +
                ((uint)((longlong)(int)uVar12 * (longlong)local_44) >> 0x10 |
                (int)((ulonglong)((longlong)(int)uVar12 * (longlong)local_44) >> 0x20) << 0x10);
  g_INT_01c039dc =
       ((uint)((longlong)iVar13 * (longlong)g_INT_ARRAY_01cc5358[g_INT_01cc5174]) >> 0x10 |
       (int)((ulonglong)((longlong)iVar13 * (longlong)g_INT_ARRAY_01cc5358[g_INT_01cc5174]) >> 0x20)
       << 0x10) +
       ((uint)((longlong)(int)uVar9 * (longlong)g_INT_ARRAY_01cc5380[g_INT_01cc5174]) >> 0x10 |
       (int)((ulonglong)((longlong)(int)uVar9 * (longlong)g_INT_ARRAY_01cc5380[g_INT_01cc5174]) >>
            0x20) << 0x10) +
       ((uint)((longlong)iVar15 * (longlong)g_INT_ARRAY_01cc53a8[g_INT_01cc5174]) >> 0x10 |
       (int)((ulonglong)((longlong)iVar15 * (longlong)g_INT_ARRAY_01cc53a8[g_INT_01cc5174]) >> 0x20)
       << 0x10);
  g_INT_01c039e0 =
       ((uint)((longlong)iVar14 * (longlong)g_INT_ARRAY_01cc5358[g_INT_01cc5174]) >> 0x10 |
       (int)((ulonglong)((longlong)iVar14 * (longlong)g_INT_ARRAY_01cc5358[g_INT_01cc5174]) >> 0x20)
       << 0x10) +
       ((uint)((longlong)(int)uVar10 * (longlong)g_INT_ARRAY_01cc5380[g_INT_01cc5174]) >> 0x10 |
       (int)((ulonglong)((longlong)(int)uVar10 * (longlong)g_INT_ARRAY_01cc5380[g_INT_01cc5174]) >>
            0x20) << 0x10) +
       ((uint)((longlong)iVar2 * (longlong)g_INT_ARRAY_01cc53a8[g_INT_01cc5174]) >> 0x10 |
       (int)((ulonglong)((longlong)iVar2 * (longlong)g_INT_ARRAY_01cc53a8[g_INT_01cc5174]) >> 0x20)
       << 0x10);
  g_INT_01c039e4 =
       ((uint)((longlong)(int)uVar8 * (longlong)g_INT_ARRAY_01cc5358[g_INT_01cc5174]) >> 0x10 |
       (int)((ulonglong)((longlong)(int)uVar8 * (longlong)g_INT_ARRAY_01cc5358[g_INT_01cc5174]) >>
            0x20) << 0x10) +
       ((uint)((longlong)iVar11 * (longlong)g_INT_ARRAY_01cc5380[g_INT_01cc5174]) >> 0x10 |
       (int)((ulonglong)((longlong)iVar11 * (longlong)g_INT_ARRAY_01cc5380[g_INT_01cc5174]) >> 0x20)
       << 0x10) +
       ((uint)((longlong)(int)uVar12 * (longlong)g_INT_ARRAY_01cc53a8[g_INT_01cc5174]) >> 0x10 |
       (int)((ulonglong)((longlong)(int)uVar12 * (longlong)g_INT_ARRAY_01cc53a8[g_INT_01cc5174]) >>
            0x20) << 0x10);
  g_TransformMatrix.m[0].x =
       ((uint)((longlong)g_INT_ARRAY_01cc5178[g_INT_01cc5174] * (longlong)iVar13) >> 0x10 |
       (int)((ulonglong)((longlong)g_INT_ARRAY_01cc5178[g_INT_01cc5174] * (longlong)iVar13) >> 0x20)
       << 0x10) +
       ((uint)((longlong)g_INT_ARRAY_01cc51f0[g_INT_01cc5174] * (longlong)(int)uVar9) >> 0x10 |
       (int)((ulonglong)((longlong)g_INT_ARRAY_01cc51f0[g_INT_01cc5174] * (longlong)(int)uVar9) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_INT_ARRAY_01cc5268[g_INT_01cc5174] * (longlong)iVar15) >> 0x10 |
       (int)((ulonglong)((longlong)g_INT_ARRAY_01cc5268[g_INT_01cc5174] * (longlong)iVar15) >> 0x20)
       << 0x10);
  g_TransformMatrix.m[0].y =
       ((uint)((longlong)g_INT_ARRAY_01cc51a0[g_INT_01cc5174] * (longlong)iVar13) >> 0x10 |
       (int)((ulonglong)((longlong)g_INT_ARRAY_01cc51a0[g_INT_01cc5174] * (longlong)iVar13) >> 0x20)
       << 0x10) +
       ((uint)((longlong)g_INT_ARRAY_01cc5218[g_INT_01cc5174] * (longlong)(int)uVar9) >> 0x10 |
       (int)((ulonglong)((longlong)g_INT_ARRAY_01cc5218[g_INT_01cc5174] * (longlong)(int)uVar9) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_INT_ARRAY_01cc5290[g_INT_01cc5174] * (longlong)iVar15) >> 0x10 |
       (int)((ulonglong)((longlong)g_INT_ARRAY_01cc5290[g_INT_01cc5174] * (longlong)iVar15) >> 0x20)
       << 0x10);
  g_TransformMatrix.m[0].z =
       ((uint)((longlong)g_INT_ARRAY_01cc51c8[g_INT_01cc5174] * (longlong)iVar13) >> 0x10 |
       (int)((ulonglong)((longlong)g_INT_ARRAY_01cc51c8[g_INT_01cc5174] * (longlong)iVar13) >> 0x20)
       << 0x10) +
       ((uint)((longlong)g_INT_ARRAY_01cc5240[g_INT_01cc5174] * (longlong)(int)uVar9) >> 0x10 |
       (int)((ulonglong)((longlong)g_INT_ARRAY_01cc5240[g_INT_01cc5174] * (longlong)(int)uVar9) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_INT_ARRAY_01cc52b8[g_INT_01cc5174] * (longlong)iVar15) >> 0x10 |
       (int)((ulonglong)((longlong)g_INT_ARRAY_01cc52b8[g_INT_01cc5174] * (longlong)iVar15) >> 0x20)
       << 0x10);
  g_TransformMatrix.m[1].x =
       ((uint)((longlong)g_INT_ARRAY_01cc5178[g_INT_01cc5174] * (longlong)iVar14) >> 0x10 |
       (int)((ulonglong)((longlong)g_INT_ARRAY_01cc5178[g_INT_01cc5174] * (longlong)iVar14) >> 0x20)
       << 0x10) +
       ((uint)((longlong)g_INT_ARRAY_01cc51f0[g_INT_01cc5174] * (longlong)(int)uVar10) >> 0x10 |
       (int)((ulonglong)((longlong)g_INT_ARRAY_01cc51f0[g_INT_01cc5174] * (longlong)(int)uVar10) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_INT_ARRAY_01cc5268[g_INT_01cc5174] * (longlong)iVar2) >> 0x10 |
       (int)((ulonglong)((longlong)g_INT_ARRAY_01cc5268[g_INT_01cc5174] * (longlong)iVar2) >> 0x20)
       << 0x10);
  g_TransformMatrix.m[1].y =
       ((uint)((longlong)g_INT_ARRAY_01cc51a0[g_INT_01cc5174] * (longlong)iVar14) >> 0x10 |
       (int)((ulonglong)((longlong)g_INT_ARRAY_01cc51a0[g_INT_01cc5174] * (longlong)iVar14) >> 0x20)
       << 0x10) +
       ((uint)((longlong)g_INT_ARRAY_01cc5218[g_INT_01cc5174] * (longlong)(int)uVar10) >> 0x10 |
       (int)((ulonglong)((longlong)g_INT_ARRAY_01cc5218[g_INT_01cc5174] * (longlong)(int)uVar10) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_INT_ARRAY_01cc5290[g_INT_01cc5174] * (longlong)iVar2) >> 0x10 |
       (int)((ulonglong)((longlong)g_INT_ARRAY_01cc5290[g_INT_01cc5174] * (longlong)iVar2) >> 0x20)
       << 0x10);
  g_TransformMatrix.m[1].z =
       ((uint)((longlong)g_INT_ARRAY_01cc51c8[g_INT_01cc5174] * (longlong)iVar14) >> 0x10 |
       (int)((ulonglong)((longlong)g_INT_ARRAY_01cc51c8[g_INT_01cc5174] * (longlong)iVar14) >> 0x20)
       << 0x10) +
       ((uint)((longlong)g_INT_ARRAY_01cc5240[g_INT_01cc5174] * (longlong)(int)uVar10) >> 0x10 |
       (int)((ulonglong)((longlong)g_INT_ARRAY_01cc5240[g_INT_01cc5174] * (longlong)(int)uVar10) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_INT_ARRAY_01cc52b8[g_INT_01cc5174] * (longlong)iVar2) >> 0x10 |
       (int)((ulonglong)((longlong)g_INT_ARRAY_01cc52b8[g_INT_01cc5174] * (longlong)iVar2) >> 0x20)
       << 0x10);
  g_TransformMatrix.m[2].x =
       ((uint)((longlong)g_INT_ARRAY_01cc5178[g_INT_01cc5174] * (longlong)(int)uVar8) >> 0x10 |
       (int)((ulonglong)((longlong)g_INT_ARRAY_01cc5178[g_INT_01cc5174] * (longlong)(int)uVar8) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_INT_ARRAY_01cc51f0[g_INT_01cc5174] * (longlong)iVar11) >> 0x10 |
       (int)((ulonglong)((longlong)g_INT_ARRAY_01cc51f0[g_INT_01cc5174] * (longlong)iVar11) >> 0x20)
       << 0x10) +
       ((uint)((longlong)g_INT_ARRAY_01cc5268[g_INT_01cc5174] * (longlong)(int)uVar12) >> 0x10 |
       (int)((ulonglong)((longlong)g_INT_ARRAY_01cc5268[g_INT_01cc5174] * (longlong)(int)uVar12) >>
            0x20) << 0x10);
  g_TransformMatrix.m[2].y =
       ((uint)((longlong)g_INT_ARRAY_01cc51a0[g_INT_01cc5174] * (longlong)(int)uVar8) >> 0x10 |
       (int)((ulonglong)((longlong)g_INT_ARRAY_01cc51a0[g_INT_01cc5174] * (longlong)(int)uVar8) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_INT_ARRAY_01cc5218[g_INT_01cc5174] * (longlong)iVar11) >> 0x10 |
       (int)((ulonglong)((longlong)g_INT_ARRAY_01cc5218[g_INT_01cc5174] * (longlong)iVar11) >> 0x20)
       << 0x10) +
       ((uint)((longlong)g_INT_ARRAY_01cc5290[g_INT_01cc5174] * (longlong)(int)uVar12) >> 0x10 |
       (int)((ulonglong)((longlong)g_INT_ARRAY_01cc5290[g_INT_01cc5174] * (longlong)(int)uVar12) >>
            0x20) << 0x10);
  g_TransformMatrix.m[2].z =
       ((uint)((longlong)g_INT_ARRAY_01cc51c8[g_INT_01cc5174] * (longlong)(int)uVar8) >> 0x10 |
       (int)((ulonglong)((longlong)g_INT_ARRAY_01cc51c8[g_INT_01cc5174] * (longlong)(int)uVar8) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_INT_ARRAY_01cc5240[g_INT_01cc5174] * (longlong)iVar11) >> 0x10 |
       (int)((ulonglong)((longlong)g_INT_ARRAY_01cc5240[g_INT_01cc5174] * (longlong)iVar11) >> 0x20)
       << 0x10) +
       ((uint)((longlong)g_INT_ARRAY_01cc52b8[g_INT_01cc5174] * (longlong)(int)uVar12) >> 0x10 |
       (int)((ulonglong)((longlong)g_INT_ARRAY_01cc52b8[g_INT_01cc5174] * (longlong)(int)uVar12) >>
            0x20) << 0x10);
  g_INT_01cc5174 = g_INT_01cc5174 + 1;
  if (g_INT_01cc5174 < 10) {
    return;
  }
  g_CurrentFilename = "..\\engine\\matrix.c";
  g_CurrentLineNumber = 1222;
  core_main_c_displayErrorAndQuit_FUN_004c8440("Matrix unbalance");
  return;
}

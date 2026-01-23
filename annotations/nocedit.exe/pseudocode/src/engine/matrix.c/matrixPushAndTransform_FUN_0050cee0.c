// Name: engine_matrix.c_matrixPushAndTransform_FUN_0050cee0
// Address: 0050cee0
// Address Range: [[0050cee0, 0050d61f]]
// Convention: __cdecl
// Signature: void engine_matrix.c_matrixPushAndTransform_FUN_0050cee0(int rot_x, int rot_y, int rot_z, int translate_x, int translate_y, int translate_z)

#include "nocturne.h"

void __cdecl
engine_matrix_c_matrixPushAndTransform_FUN_0050cee0
          (int rot_x,int rot_y,int rot_z,int translate_x,int translate_y,int translate_z)

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
  
  iVar5 = g_MatrixStackIndex;
  g_MatrixStack_RelX[g_MatrixStackIndex] = g_RelativeX;
  g_MatrixStack_RelY[iVar5] = g_RelativeY;
  g_MatrixStack_RelZ[iVar5] = g_RelativeZ;
  g_MatrixStack_Unk1[iVar5] = g_LightDirectionX;
  g_MatrixStack_Unk2[iVar5] = g_LightDirectionY;
  g_MatrixStack_Unk3[iVar5] = g_LightDirectionZ;
  g_MatrixStack_M00[iVar5] = g_TransformMatrix.m[0].x;
  g_MatrixStack_M01[iVar5] = g_TransformMatrix.m[0].y;
  g_MatrixStack_M02[iVar5] = g_TransformMatrix.m[0].z;
  g_MatrixStack_M10[iVar5] = g_TransformMatrix.m[1].x;
  g_MatrixStack_M11[iVar5] = g_TransformMatrix.m[1].y;
  g_MatrixStack_M12[iVar5] = g_TransformMatrix.m[1].z;
  g_MatrixStack_M20[iVar5] = g_TransformMatrix.m[2].x;
  g_MatrixStack_M21[iVar5] = g_TransformMatrix.m[2].y;
  g_MatrixStack_M22[iVar5] = g_TransformMatrix.m[2].z;
  iVar2 = g_RelativeX - translate_x;
  iVar3 = g_RelativeY - translate_y;
  iVar4 = g_RelativeZ - translate_z;
  g_SavedRotationY = rot_y;
  g_SavedRotationZ = rot_z;
  g_SavedRotationX = rot_x;
  iVar5 = iVar2;
  iVar6 = iVar3;
  if ((rot_x != 0 || rot_y != 0) || rot_z != 0) {
    iVar5 = engine_matrix_c_interpolatedSin_FUN_0050c5c0(rot_x);
    iVar6 = engine_matrix_c_interpolatedCos_FUN_0050c600(rot_x);
    iVar7 = engine_matrix_c_interpolatedSin_FUN_0050c5c0(rot_y);
    iVar8 = engine_matrix_c_interpolatedCos_FUN_0050c600(rot_y);
    iVar9 = engine_matrix_c_interpolatedSin_FUN_0050c5c0(rot_z);
    iVar10 = engine_matrix_c_interpolatedCos_FUN_0050c600(rot_z);
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
    g_LightDirectionX =
         ((uint)((longlong)iVar16 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >> 0x10 |
         (int)((ulonglong)((longlong)iVar16 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >>
              0x20) << 0x10) +
         ((uint)((longlong)(int)uVar12 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex]) >> 0x10 |
         (int)((ulonglong)((longlong)(int)uVar12 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex])
              >> 0x20) << 0x10) +
         ((uint)((longlong)iVar18 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex]) >> 0x10 |
         (int)((ulonglong)((longlong)iVar18 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex]) >>
              0x20) << 0x10);
    g_LightDirectionY =
         ((uint)((longlong)iVar17 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >> 0x10 |
         (int)((ulonglong)((longlong)iVar17 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >>
              0x20) << 0x10) +
         ((uint)((longlong)(int)uVar13 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex]) >> 0x10 |
         (int)((ulonglong)((longlong)(int)uVar13 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex])
              >> 0x20) << 0x10) +
         ((uint)((longlong)iVar7 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex]) >> 0x10 |
         (int)((ulonglong)((longlong)iVar7 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex]) >>
              0x20) << 0x10);
    g_LightDirectionZ =
         ((uint)((longlong)(int)uVar11 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >> 0x10 |
         (int)((ulonglong)((longlong)(int)uVar11 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex])
              >> 0x20) << 0x10) +
         ((uint)((longlong)iVar14 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex]) >> 0x10 |
         (int)((ulonglong)((longlong)iVar14 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex]) >>
              0x20) << 0x10) +
         ((uint)((longlong)(int)uVar15 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex]) >> 0x10 |
         (int)((ulonglong)((longlong)(int)uVar15 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex])
              >> 0x20) << 0x10);
    g_TransformMatrix.m[0].x =
         ((uint)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)iVar16) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)iVar16) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)(int)uVar12) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)(int)uVar12)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)iVar18) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)iVar18) >>
              0x20) << 0x10);
    g_TransformMatrix.m[0].y =
         ((uint)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)iVar16) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)iVar16) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)(int)uVar12) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)(int)uVar12)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)iVar18) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)iVar18) >>
              0x20) << 0x10);
    g_TransformMatrix.m[0].z =
         ((uint)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)iVar16) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)iVar16) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)(int)uVar12) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)(int)uVar12)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)iVar18) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)iVar18) >>
              0x20) << 0x10);
    g_TransformMatrix.m[1].x =
         ((uint)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)iVar17) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)iVar17) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)(int)uVar13) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)(int)uVar13)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)iVar7) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)iVar7) >>
              0x20) << 0x10);
    g_TransformMatrix.m[1].y =
         ((uint)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)iVar17) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)iVar17) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)(int)uVar13) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)(int)uVar13)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)iVar7) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)iVar7) >>
              0x20) << 0x10);
    g_TransformMatrix.m[1].z =
         ((uint)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)iVar17) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)iVar17) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)(int)uVar13) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)(int)uVar13)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)iVar7) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)iVar7) >>
              0x20) << 0x10);
    g_TransformMatrix.m[2].x =
         ((uint)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)(int)uVar11) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)(int)uVar11)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)iVar14) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)iVar14) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)(int)uVar15) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)(int)uVar15)
              >> 0x20) << 0x10);
    g_TransformMatrix.m[2].y =
         ((uint)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)(int)uVar11) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)(int)uVar11)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)iVar14) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)iVar14) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)(int)uVar15) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)(int)uVar15)
              >> 0x20) << 0x10);
    g_TransformMatrix.m[2].z =
         ((uint)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)(int)uVar11) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)(int)uVar11)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)iVar14) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)iVar14) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)(int)uVar15) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)(int)uVar15)
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
  g_MatrixStackIndex = g_MatrixStackIndex + 1;
  if (9 < g_MatrixStackIndex) {
    g_CurrentFilename = "..\\engine\\matrix.c";
    g_CurrentLineNumber = 799;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Matrix unbalance");
    return;
  }
  return;
}

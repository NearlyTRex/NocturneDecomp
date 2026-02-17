// Name: engine_matrix.c_matrixPushAndTransform_FUN_0050db00
// Address: 0050db00
// Address Range: [[0050db00, 0050e269]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_matrixPushAndTransform_FUN_0050db00(int rotation_x,int rotation_y,int rotation_z)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_atan2_FUN_006013b1 */
/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl engine_matrix_c_matrixPushAndTransform_FUN_0050db00(int rotation_x,int rotation_y,int rotation_z)

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
  float10 fVar19;
  float10 fVar20;
  
  iVar6 = g_MatrixStackIndex;
  g_MatrixStack_RelX[g_MatrixStackIndex] = g_RelativeX;
  g_MatrixStack_RelY[iVar6] = g_RelativeY;
  g_MatrixStack_RelZ[iVar6] = g_RelativeZ;
  g_MatrixStack_Unk1[iVar6] = g_LightDirectionX;
  g_MatrixStack_Unk2[iVar6] = g_LightDirectionY;
  g_MatrixStack_Unk3[iVar6] = g_LightDirectionZ;
  g_MatrixStack_M00[iVar6] = g_TransformMatrix.m[0].x;
  g_MatrixStack_M01[iVar6] = g_TransformMatrix.m[0].y;
  g_MatrixStack_M02[iVar6] = g_TransformMatrix.m[0].z;
  g_MatrixStack_M10[iVar6] = g_TransformMatrix.m[1].x;
  g_MatrixStack_M11[iVar6] = g_TransformMatrix.m[1].y;
  g_MatrixStack_M12[iVar6] = g_TransformMatrix.m[1].z;
  g_MatrixStack_M20[iVar6] = g_TransformMatrix.m[2].x;
  g_MatrixStack_M21[iVar6] = g_TransformMatrix.m[2].y;
  g_MatrixStack_M22[iVar6] = g_TransformMatrix.m[2].z;
  iVar4 = g_RelativeZ;
  iVar3 = g_RelativeY;
  iVar2 = g_RelativeX;
  fVar20 = (float10)fpatan((float10)rotation_x,(float10)rotation_z);
  fVar19 = (float10)fpatan((float10)rotation_y,(float10)rotation_z);
  iVar6 = (int)ROUND(ROUND(-fVar19 * (float10)0.31830988619288902 * (float10)32768))
  ;
  iVar10 = (int)ROUND(ROUND(fVar20 * (float10)0.31830988619288902 * (float10)32768))
  ;
  iVar5 = engine_matrix_c_interpolatedSin_FUN_0050c5c0(iVar6);
  iVar6 = engine_matrix_c_interpolatedCos_FUN_0050c600(iVar6);
  iVar7 = engine_matrix_c_interpolatedSin_FUN_0050c5c0(0);
  iVar8 = engine_matrix_c_interpolatedCos_FUN_0050c600(0);
  iVar9 = engine_matrix_c_interpolatedSin_FUN_0050c5c0(iVar10);
  iVar10 = engine_matrix_c_interpolatedCos_FUN_0050c600(iVar10);
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
  iVar5 = ((uint)((longlong)iVar9 * (longlong)iVar7) >> 0x10 |
          (int)((ulonglong)((longlong)iVar9 * (longlong)iVar7) >> 0x20) << 0x10) +
          ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  uVar15 = (uint)((longlong)iVar6 * (longlong)iVar10) >> 0x10 |
           (int)((ulonglong)((longlong)iVar6 * (longlong)iVar10) >> 0x20) << 0x10;
  g_RelativeX = ((uint)((longlong)iVar16 * (longlong)iVar2) >> 0x10 |
                (int)((ulonglong)((longlong)iVar16 * (longlong)iVar2) >> 0x20) << 0x10) +
                ((uint)((longlong)(int)uVar12 * (longlong)iVar3) >> 0x10 |
                (int)((ulonglong)((longlong)(int)uVar12 * (longlong)iVar3) >> 0x20) << 0x10) +
                ((uint)((longlong)iVar18 * (longlong)iVar4) >> 0x10 |
                (int)((ulonglong)((longlong)iVar18 * (longlong)iVar4) >> 0x20) << 0x10);
  g_RelativeY = ((uint)((longlong)iVar17 * (longlong)iVar2) >> 0x10 |
                (int)((ulonglong)((longlong)iVar17 * (longlong)iVar2) >> 0x20) << 0x10) +
                ((uint)((longlong)(int)uVar13 * (longlong)iVar3) >> 0x10 |
                (int)((ulonglong)((longlong)(int)uVar13 * (longlong)iVar3) >> 0x20) << 0x10) +
                ((uint)((longlong)iVar5 * (longlong)iVar4) >> 0x10 |
                (int)((ulonglong)((longlong)iVar5 * (longlong)iVar4) >> 0x20) << 0x10);
  g_RelativeZ = ((uint)((longlong)(int)uVar11 * (longlong)iVar2) >> 0x10 |
                (int)((ulonglong)((longlong)(int)uVar11 * (longlong)iVar2) >> 0x20) << 0x10) +
                ((uint)((longlong)iVar14 * (longlong)iVar3) >> 0x10 |
                (int)((ulonglong)((longlong)iVar14 * (longlong)iVar3) >> 0x20) << 0x10) +
                ((uint)((longlong)(int)uVar15 * (longlong)iVar4) >> 0x10 |
                (int)((ulonglong)((longlong)(int)uVar15 * (longlong)iVar4) >> 0x20) << 0x10);
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
       ((uint)((longlong)iVar5 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex]) >> 0x10 |
       (int)((ulonglong)((longlong)iVar5 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex]) >> 0x20
            ) << 0x10);
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
       (int)((ulonglong)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)iVar16) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)(int)uVar12) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)(int)uVar12) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)iVar18) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)iVar18) >> 0x20
            ) << 0x10);
  g_TransformMatrix.m[0].y =
       ((uint)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)iVar16) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)iVar16) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)(int)uVar12) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)(int)uVar12) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)iVar18) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)iVar18) >> 0x20
            ) << 0x10);
  g_TransformMatrix.m[0].z =
       ((uint)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)iVar16) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)iVar16) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)(int)uVar12) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)(int)uVar12) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)iVar18) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)iVar18) >> 0x20
            ) << 0x10);
  g_TransformMatrix.m[1].x =
       ((uint)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)iVar17) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)iVar17) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)(int)uVar13) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)(int)uVar13) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)iVar5) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)iVar5) >> 0x20)
       << 0x10);
  g_TransformMatrix.m[1].y =
       ((uint)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)iVar17) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)iVar17) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)(int)uVar13) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)(int)uVar13) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)iVar5) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)iVar5) >> 0x20)
       << 0x10);
  g_TransformMatrix.m[1].z =
       ((uint)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)iVar17) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)iVar17) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)(int)uVar13) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)(int)uVar13) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)iVar5) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)iVar5) >> 0x20)
       << 0x10);
  g_TransformMatrix.m[2].x =
       ((uint)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)(int)uVar11) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)(int)uVar11) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)iVar14) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)iVar14) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)(int)uVar15) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)(int)uVar15) >>
            0x20) << 0x10);
  g_TransformMatrix.m[2].y =
       ((uint)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)(int)uVar11) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)(int)uVar11) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)iVar14) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)iVar14) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)(int)uVar15) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)(int)uVar15) >>
            0x20) << 0x10);
  g_TransformMatrix.m[2].z =
       ((uint)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)(int)uVar11) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)(int)uVar11) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)iVar14) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)iVar14) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)(int)uVar15) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)(int)uVar15) >>
            0x20) << 0x10);
  g_MatrixStackIndex = g_MatrixStackIndex + 1;
  if (g_MatrixStackIndex < 10) {
    return;
  }
  g_CurrentFilename = "..\\engine\\matrix.c";
  g_CurrentLineNumber = 0x4c9;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Matrix unbalance");
  return;
}

// Name: engine_matrix.c_matrixPushAndTransform_FUN_0050db00
// Address: 0050db00
// Address Range: [[0050db00, 0050e269]]
// Convention: __cdecl
// Signature: void engine_matrix.c_matrixPushAndTransform_FUN_0050db00(int rotation_x, int rotation_y, int rotation_z)

#include "nocturne.h"

void __cdecl
engine_matrix_c_matrixPushAndTransform_FUN_0050db00(int rotation_x,int rotation_y,int rotation_z)

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
  ushort angle;
  int iVar15;
  float10 fVar16;
  float10 x;
  float10 extraout_ST1;
  float10 fVar17;
  double dVar18;
  int local_4c;
  int local_48;
  int local_44;
  
  iVar2 = g_MatrixStackIndex;
  g_MatrixStack_RelX[g_MatrixStackIndex] = g_RelativeX;
  g_MatrixStack_RelY[iVar2] = g_RelativeY;
  g_MatrixStack_RelZ[iVar2] = g_RelativeZ;
  g_MatrixStack_Unk1[iVar2] = g_LightDirectionX;
  g_MatrixStack_Unk2[iVar2] = g_LightDirectionY;
  g_MatrixStack_Unk3[iVar2] = g_LightDirectionZ;
  g_MatrixStack_M00[iVar2] = g_TransformMatrix.m[0].x;
  g_MatrixStack_M01[iVar2] = g_TransformMatrix.m[0].y;
  g_MatrixStack_M02[iVar2] = g_TransformMatrix.m[0].z;
  g_MatrixStack_M10[iVar2] = g_TransformMatrix.m[1].x;
  g_MatrixStack_M11[iVar2] = g_TransformMatrix.m[1].y;
  g_MatrixStack_M12[iVar2] = g_TransformMatrix.m[1].z;
  g_MatrixStack_M20[iVar2] = g_TransformMatrix.m[2].x;
  g_MatrixStack_M21[iVar2] = g_TransformMatrix.m[2].y;
  g_MatrixStack_M22[iVar2] = g_TransformMatrix.m[2].z;
  crt_math_c_atan2_FUN_006013b1((float10)rotation_x,(float10)rotation_z);
  fVar16 = crt_math_c_atan2_FUN_006013b1((float10)rotation_x,x);
  fVar17 = extraout_ST1 * (float10)0.31830988619288902 * (float10)32768;
  crt_math_c_round_FUN_005fe6b0
            ((double)(-fVar16 * (float10)0.31830988619288902 * (float10)32768));
  dVar18 = crt_math_c_round_FUN_005fe6b0((double)fVar17);
  iVar2 = engine_matrix_c_interpolatedSin_FUN_0050c5c0(angle);
  iVar3 = engine_matrix_c_interpolatedCos_FUN_0050c600(0xdc06);
  iVar4 = engine_matrix_c_interpolatedSin_FUN_0050c5c0(0);
  iVar5 = engine_matrix_c_interpolatedCos_FUN_0050c600(0);
  iVar6 = engine_matrix_c_interpolatedSin_FUN_0050c5c0((ushort)(int)ROUND(dVar18));
  iVar7 = engine_matrix_c_interpolatedCos_FUN_0050c600((ushort)(int)ROUND(dVar18));
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
  g_LightDirectionX =
       ((uint)((longlong)iVar13 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >> 0x10 |
       (int)((ulonglong)((longlong)iVar13 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >>
            0x20) << 0x10) +
       ((uint)((longlong)(int)uVar9 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex]) >> 0x10 |
       (int)((ulonglong)((longlong)(int)uVar9 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex]) >>
            0x20) << 0x10) +
       ((uint)((longlong)iVar15 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex]) >> 0x10 |
       (int)((ulonglong)((longlong)iVar15 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex]) >>
            0x20) << 0x10);
  g_LightDirectionY =
       ((uint)((longlong)iVar14 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >> 0x10 |
       (int)((ulonglong)((longlong)iVar14 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >>
            0x20) << 0x10) +
       ((uint)((longlong)(int)uVar10 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex]) >> 0x10 |
       (int)((ulonglong)((longlong)(int)uVar10 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex])
            >> 0x20) << 0x10) +
       ((uint)((longlong)iVar2 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex]) >> 0x10 |
       (int)((ulonglong)((longlong)iVar2 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex]) >> 0x20
            ) << 0x10);
  g_LightDirectionZ =
       ((uint)((longlong)(int)uVar8 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >> 0x10 |
       (int)((ulonglong)((longlong)(int)uVar8 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >>
            0x20) << 0x10) +
       ((uint)((longlong)iVar11 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex]) >> 0x10 |
       (int)((ulonglong)((longlong)iVar11 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex]) >>
            0x20) << 0x10) +
       ((uint)((longlong)(int)uVar12 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex]) >> 0x10 |
       (int)((ulonglong)((longlong)(int)uVar12 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex])
            >> 0x20) << 0x10);
  g_TransformMatrix.m[0].x =
       ((uint)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)iVar13) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)iVar13) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)(int)uVar9) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)(int)uVar9) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)iVar15) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)iVar15) >> 0x20
            ) << 0x10);
  g_TransformMatrix.m[0].y =
       ((uint)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)iVar13) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)iVar13) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)(int)uVar9) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)(int)uVar9) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)iVar15) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)iVar15) >> 0x20
            ) << 0x10);
  g_TransformMatrix.m[0].z =
       ((uint)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)iVar13) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)iVar13) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)(int)uVar9) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)(int)uVar9) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)iVar15) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)iVar15) >> 0x20
            ) << 0x10);
  g_TransformMatrix.m[1].x =
       ((uint)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)iVar14) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)iVar14) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)(int)uVar10) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)(int)uVar10) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)iVar2) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)iVar2) >> 0x20)
       << 0x10);
  g_TransformMatrix.m[1].y =
       ((uint)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)iVar14) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)iVar14) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)(int)uVar10) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)(int)uVar10) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)iVar2) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)iVar2) >> 0x20)
       << 0x10);
  g_TransformMatrix.m[1].z =
       ((uint)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)iVar14) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)iVar14) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)(int)uVar10) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)(int)uVar10) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)iVar2) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)iVar2) >> 0x20)
       << 0x10);
  g_TransformMatrix.m[2].x =
       ((uint)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)(int)uVar8) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)(int)uVar8) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)iVar11) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)iVar11) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)(int)uVar12) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)(int)uVar12) >>
            0x20) << 0x10);
  g_TransformMatrix.m[2].y =
       ((uint)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)(int)uVar8) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)(int)uVar8) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)iVar11) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)iVar11) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)(int)uVar12) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)(int)uVar12) >>
            0x20) << 0x10);
  g_TransformMatrix.m[2].z =
       ((uint)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)(int)uVar8) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)(int)uVar8) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)iVar11) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)iVar11) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)(int)uVar12) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)(int)uVar12) >>
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

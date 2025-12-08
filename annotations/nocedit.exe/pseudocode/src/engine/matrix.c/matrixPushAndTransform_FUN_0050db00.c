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
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ushort angle;
  int iVar14;
  float10 fVar15;
  float10 x;
  float10 extraout_ST1;
  float10 fVar16;
  double dVar17;
  ushort angle_00;
  ushort local_40;
  int local_2c;
  int local_28;
  int local_1c;
  int iStack_14;
  
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
  iVar2 = g_RelativeZ;
  crt_math_c_atan2_FUN_006013b1((float10)rotation_x,(float10)rotation_z);
  fVar15 = crt_math_c_atan2_FUN_006013b1((float10)rotation_x,x);
  fVar16 = extraout_ST1 * (float10)0.31830988619288902 * (float10)65536f;
  dVar17 = crt_math_c_round_FUN_005fe6b0
                     ((double)(-fVar15 * (float10)0.31830988619288902 * (float10)65536f));
  angle_00 = (ushort)(int)ROUND(dVar17);
  crt_math_c_round_FUN_005fe6b0((double)fVar16);
  iVar3 = engine_matrix_c_interpolatedSin_FUN_0050c5c0(angle);
  engine_matrix_c_interpolatedCos_FUN_0050c600(angle_00);
  iVar4 = engine_matrix_c_interpolatedSin_FUN_0050c5c0(0);
  iVar5 = engine_matrix_c_interpolatedCos_FUN_0050c600(0);
  engine_matrix_c_interpolatedSin_FUN_0050c5c0(local_40);
  iVar6 = engine_matrix_c_interpolatedCos_FUN_0050c600(local_40);
  lVar1 = (longlong)
          (int)((uint)((longlong)iVar4 * (longlong)local_1c) >> 0x10 |
               (int)((ulonglong)((longlong)iVar4 * (longlong)local_1c) >> 0x20) << 0x10) *
          (longlong)iStack_14;
  iVar12 = ((uint)((longlong)iVar5 * (longlong)iVar6) >> 0x10 |
           (int)((ulonglong)((longlong)iVar5 * (longlong)iVar6) >> 0x20) << 0x10) +
           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  lVar1 = (longlong)
          (int)((uint)((longlong)iVar5 * (longlong)local_1c) >> 0x10 |
               (int)((ulonglong)((longlong)iVar5 * (longlong)local_1c) >> 0x20) << 0x10) *
          (longlong)iStack_14;
  iVar13 = ((uint)((longlong)iVar4 * (longlong)-iVar6) >> 0x10 |
           (int)((ulonglong)((longlong)iVar4 * (longlong)-iVar6) >> 0x20) << 0x10) +
           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  uVar7 = (uint)((longlong)local_28 * (longlong)iStack_14) >> 0x10 |
          (int)((ulonglong)((longlong)local_28 * (longlong)iStack_14) >> 0x20) << 0x10;
  uVar8 = (uint)((longlong)local_28 * (longlong)iVar4) >> 0x10 |
          (int)((ulonglong)((longlong)local_28 * (longlong)iVar4) >> 0x20) << 0x10;
  uVar9 = (uint)((longlong)local_28 * (longlong)iVar5) >> 0x10 |
          (int)((ulonglong)((longlong)local_28 * (longlong)iVar5) >> 0x20) << 0x10;
  iVar10 = -local_1c;
  lVar1 = (longlong)
          (int)((uint)((longlong)iVar4 * (longlong)local_1c) >> 0x10 |
               (int)((ulonglong)((longlong)iVar4 * (longlong)local_1c) >> 0x20) << 0x10) *
          (longlong)iVar6;
  iVar14 = ((uint)((longlong)iVar5 * (longlong)-iStack_14) >> 0x10 |
           (int)((ulonglong)((longlong)iVar5 * (longlong)-iStack_14) >> 0x20) << 0x10) +
           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  lVar1 = (longlong)
          (int)((uint)((longlong)iVar5 * (longlong)local_1c) >> 0x10 |
               (int)((ulonglong)((longlong)iVar5 * (longlong)local_1c) >> 0x20) << 0x10) *
          (longlong)iVar6;
  iVar4 = ((uint)((longlong)iStack_14 * (longlong)iVar4) >> 0x10 |
          (int)((ulonglong)((longlong)iStack_14 * (longlong)iVar4) >> 0x20) << 0x10) +
          ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  uVar11 = (uint)((longlong)local_28 * (longlong)iVar6) >> 0x10 |
           (int)((ulonglong)((longlong)local_28 * (longlong)iVar6) >> 0x20) << 0x10;
  g_RelativeX = ((uint)((longlong)iVar12 * (longlong)iVar2) >> 0x10 |
                (int)((ulonglong)((longlong)iVar12 * (longlong)iVar2) >> 0x20) << 0x10) +
                ((uint)((longlong)(int)uVar8 * (longlong)iVar3) >> 0x10 |
                (int)((ulonglong)((longlong)(int)uVar8 * (longlong)iVar3) >> 0x20) << 0x10) +
                ((uint)((longlong)iVar14 * (longlong)local_2c) >> 0x10 |
                (int)((ulonglong)((longlong)iVar14 * (longlong)local_2c) >> 0x20) << 0x10);
  g_RelativeY = ((uint)((longlong)iVar13 * (longlong)iVar2) >> 0x10 |
                (int)((ulonglong)((longlong)iVar13 * (longlong)iVar2) >> 0x20) << 0x10) +
                ((uint)((longlong)(int)uVar9 * (longlong)iVar3) >> 0x10 |
                (int)((ulonglong)((longlong)(int)uVar9 * (longlong)iVar3) >> 0x20) << 0x10) +
                ((uint)((longlong)iVar4 * (longlong)local_2c) >> 0x10 |
                (int)((ulonglong)((longlong)iVar4 * (longlong)local_2c) >> 0x20) << 0x10);
  g_RelativeZ = ((uint)((longlong)(int)uVar7 * (longlong)iVar2) >> 0x10 |
                (int)((ulonglong)((longlong)(int)uVar7 * (longlong)iVar2) >> 0x20) << 0x10) +
                ((uint)((longlong)iVar10 * (longlong)iVar3) >> 0x10 |
                (int)((ulonglong)((longlong)iVar10 * (longlong)iVar3) >> 0x20) << 0x10) +
                ((uint)((longlong)(int)uVar11 * (longlong)local_2c) >> 0x10 |
                (int)((ulonglong)((longlong)(int)uVar11 * (longlong)local_2c) >> 0x20) << 0x10);
  g_LightDirectionX =
       ((uint)((longlong)iVar12 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >> 0x10 |
       (int)((ulonglong)((longlong)iVar12 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >>
            0x20) << 0x10) +
       ((uint)((longlong)(int)uVar8 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex]) >> 0x10 |
       (int)((ulonglong)((longlong)(int)uVar8 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex]) >>
            0x20) << 0x10) +
       ((uint)((longlong)iVar14 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex]) >> 0x10 |
       (int)((ulonglong)((longlong)iVar14 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex]) >>
            0x20) << 0x10);
  g_LightDirectionY =
       ((uint)((longlong)iVar13 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >> 0x10 |
       (int)((ulonglong)((longlong)iVar13 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >>
            0x20) << 0x10) +
       ((uint)((longlong)(int)uVar9 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex]) >> 0x10 |
       (int)((ulonglong)((longlong)(int)uVar9 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex]) >>
            0x20) << 0x10) +
       ((uint)((longlong)iVar4 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex]) >> 0x10 |
       (int)((ulonglong)((longlong)iVar4 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex]) >> 0x20
            ) << 0x10);
  g_LightDirectionZ =
       ((uint)((longlong)(int)uVar7 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >> 0x10 |
       (int)((ulonglong)((longlong)(int)uVar7 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >>
            0x20) << 0x10) +
       ((uint)((longlong)iVar10 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex]) >> 0x10 |
       (int)((ulonglong)((longlong)iVar10 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex]) >>
            0x20) << 0x10) +
       ((uint)((longlong)(int)uVar11 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex]) >> 0x10 |
       (int)((ulonglong)((longlong)(int)uVar11 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex])
            >> 0x20) << 0x10);
  g_TransformMatrix.m[0].x =
       ((uint)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)iVar12) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)iVar12) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)(int)uVar8) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)(int)uVar8) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)iVar14) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)iVar14) >> 0x20
            ) << 0x10);
  g_TransformMatrix.m[0].y =
       ((uint)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)iVar12) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)iVar12) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)(int)uVar8) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)(int)uVar8) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)iVar14) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)iVar14) >> 0x20
            ) << 0x10);
  g_TransformMatrix.m[0].z =
       ((uint)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)iVar12) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)iVar12) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)(int)uVar8) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)(int)uVar8) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)iVar14) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)iVar14) >> 0x20
            ) << 0x10);
  g_TransformMatrix.m[1].x =
       ((uint)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)iVar13) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)iVar13) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)(int)uVar9) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)(int)uVar9) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)iVar4) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)iVar4) >> 0x20)
       << 0x10);
  g_TransformMatrix.m[1].y =
       ((uint)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)iVar13) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)iVar13) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)(int)uVar9) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)(int)uVar9) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)iVar4) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)iVar4) >> 0x20)
       << 0x10);
  g_TransformMatrix.m[1].z =
       ((uint)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)iVar13) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)iVar13) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)(int)uVar9) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)(int)uVar9) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)iVar4) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)iVar4) >> 0x20)
       << 0x10);
  g_TransformMatrix.m[2].x =
       ((uint)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)(int)uVar7) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)(int)uVar7) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)iVar10) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)iVar10) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)(int)uVar11) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)(int)uVar11) >>
            0x20) << 0x10);
  g_TransformMatrix.m[2].y =
       ((uint)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)(int)uVar7) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)(int)uVar7) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)iVar10) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)iVar10) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)(int)uVar11) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)(int)uVar11) >>
            0x20) << 0x10);
  g_TransformMatrix.m[2].z =
       ((uint)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)(int)uVar7) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)(int)uVar7) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)iVar10) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)iVar10) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)(int)uVar11) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)(int)uVar11) >>
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

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
  uint extraout_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint extraout_EDX;
  int iVar13;
  int unaff_EBX;
  int unaff_EDI;
  float10 fVar14;
  float10 x;
  double dVar15;
  ushort in_stack_ffffffbc;
  ushort local_30;
  int local_24;
  int local_1c;
  int iStack_18;
  
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
  fVar14 = crt_math_c_atan2_FUN_006013b1((float10)rotation_x,x);
  fVar14 = -fVar14 * (float10)0.31830988619288902 * (float10)65536f;
  dVar15 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX));
  dVar15 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */((int)ROUND(fVar14),SUB84 /* extract 2-byte value */(dVar15,0)));
  iVar2 = engine_matrix_c_interpolatedSin_FUN_0050c5c0((ushort)((ulonglong)dVar15 >> 0x20));
  engine_matrix_c_interpolatedCos_FUN_0050c600(in_stack_ffffffbc);
  iVar3 = engine_matrix_c_interpolatedSin_FUN_0050c5c0(0);
  iVar4 = engine_matrix_c_interpolatedCos_FUN_0050c600(0);
  engine_matrix_c_interpolatedSin_FUN_0050c5c0(local_30);
  iVar5 = engine_matrix_c_interpolatedCos_FUN_0050c600(local_30);
  lVar1 = (longlong)
          (int)((uint)((longlong)iVar3 * (longlong)unaff_EDI) >> 0x10 |
               (int)((ulonglong)((longlong)iVar3 * (longlong)unaff_EDI) >> 0x20) << 0x10) *
          (longlong)unaff_EBX;
  iVar11 = ((uint)((longlong)iVar4 * (longlong)iVar5) >> 0x10 |
           (int)((ulonglong)((longlong)iVar4 * (longlong)iVar5) >> 0x20) << 0x10) +
           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  lVar1 = (longlong)
          (int)((uint)((longlong)iVar4 * (longlong)unaff_EDI) >> 0x10 |
               (int)((ulonglong)((longlong)iVar4 * (longlong)unaff_EDI) >> 0x20) << 0x10) *
          (longlong)unaff_EBX;
  iVar12 = ((uint)((longlong)iVar3 * (longlong)-iVar5) >> 0x10 |
           (int)((ulonglong)((longlong)iVar3 * (longlong)-iVar5) >> 0x20) << 0x10) +
           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  uVar6 = (uint)((longlong)iStack_18 * (longlong)unaff_EBX) >> 0x10 |
          (int)((ulonglong)((longlong)iStack_18 * (longlong)unaff_EBX) >> 0x20) << 0x10;
  uVar7 = (uint)((longlong)iStack_18 * (longlong)iVar3) >> 0x10 |
          (int)((ulonglong)((longlong)iStack_18 * (longlong)iVar3) >> 0x20) << 0x10;
  uVar8 = (uint)((longlong)iStack_18 * (longlong)iVar4) >> 0x10 |
          (int)((ulonglong)((longlong)iStack_18 * (longlong)iVar4) >> 0x20) << 0x10;
  iVar9 = -unaff_EDI;
  lVar1 = (longlong)
          (int)((uint)((longlong)iVar3 * (longlong)unaff_EDI) >> 0x10 |
               (int)((ulonglong)((longlong)iVar3 * (longlong)unaff_EDI) >> 0x20) << 0x10) *
          (longlong)iVar5;
  iVar13 = ((uint)((longlong)iVar4 * (longlong)-unaff_EBX) >> 0x10 |
           (int)((ulonglong)((longlong)iVar4 * (longlong)-unaff_EBX) >> 0x20) << 0x10) +
           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  lVar1 = (longlong)
          (int)((uint)((longlong)iVar4 * (longlong)unaff_EDI) >> 0x10 |
               (int)((ulonglong)((longlong)iVar4 * (longlong)unaff_EDI) >> 0x20) << 0x10) *
          (longlong)iVar5;
  iVar3 = ((uint)((longlong)unaff_EBX * (longlong)iVar3) >> 0x10 |
          (int)((ulonglong)((longlong)unaff_EBX * (longlong)iVar3) >> 0x20) << 0x10) +
          ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  uVar10 = (uint)((longlong)iStack_18 * (longlong)iVar5) >> 0x10 |
           (int)((ulonglong)((longlong)iStack_18 * (longlong)iVar5) >> 0x20) << 0x10;
  g_RelativeX = ((uint)((longlong)iVar11 * (longlong)local_24) >> 0x10 |
                (int)((ulonglong)((longlong)iVar11 * (longlong)local_24) >> 0x20) << 0x10) +
                ((uint)((longlong)(int)uVar7 * (longlong)iVar2) >> 0x10 |
                (int)((ulonglong)((longlong)(int)uVar7 * (longlong)iVar2) >> 0x20) << 0x10) +
                ((uint)((longlong)iVar13 * (longlong)local_1c) >> 0x10 |
                (int)((ulonglong)((longlong)iVar13 * (longlong)local_1c) >> 0x20) << 0x10);
  g_RelativeY = ((uint)((longlong)iVar12 * (longlong)local_24) >> 0x10 |
                (int)((ulonglong)((longlong)iVar12 * (longlong)local_24) >> 0x20) << 0x10) +
                ((uint)((longlong)(int)uVar8 * (longlong)iVar2) >> 0x10 |
                (int)((ulonglong)((longlong)(int)uVar8 * (longlong)iVar2) >> 0x20) << 0x10) +
                ((uint)((longlong)iVar3 * (longlong)local_1c) >> 0x10 |
                (int)((ulonglong)((longlong)iVar3 * (longlong)local_1c) >> 0x20) << 0x10);
  g_RelativeZ = ((uint)((longlong)(int)uVar6 * (longlong)local_24) >> 0x10 |
                (int)((ulonglong)((longlong)(int)uVar6 * (longlong)local_24) >> 0x20) << 0x10) +
                ((uint)((longlong)iVar9 * (longlong)iVar2) >> 0x10 |
                (int)((ulonglong)((longlong)iVar9 * (longlong)iVar2) >> 0x20) << 0x10) +
                ((uint)((longlong)(int)uVar10 * (longlong)local_1c) >> 0x10 |
                (int)((ulonglong)((longlong)(int)uVar10 * (longlong)local_1c) >> 0x20) << 0x10);
  g_LightDirectionX =
       ((uint)((longlong)iVar11 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >> 0x10 |
       (int)((ulonglong)((longlong)iVar11 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >>
            0x20) << 0x10) +
       ((uint)((longlong)(int)uVar7 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex]) >> 0x10 |
       (int)((ulonglong)((longlong)(int)uVar7 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex]) >>
            0x20) << 0x10) +
       ((uint)((longlong)iVar13 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex]) >> 0x10 |
       (int)((ulonglong)((longlong)iVar13 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex]) >>
            0x20) << 0x10);
  g_LightDirectionY =
       ((uint)((longlong)iVar12 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >> 0x10 |
       (int)((ulonglong)((longlong)iVar12 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >>
            0x20) << 0x10) +
       ((uint)((longlong)(int)uVar8 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex]) >> 0x10 |
       (int)((ulonglong)((longlong)(int)uVar8 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex]) >>
            0x20) << 0x10) +
       ((uint)((longlong)iVar3 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex]) >> 0x10 |
       (int)((ulonglong)((longlong)iVar3 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex]) >> 0x20
            ) << 0x10);
  g_LightDirectionZ =
       ((uint)((longlong)(int)uVar6 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >> 0x10 |
       (int)((ulonglong)((longlong)(int)uVar6 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >>
            0x20) << 0x10) +
       ((uint)((longlong)iVar9 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex]) >> 0x10 |
       (int)((ulonglong)((longlong)iVar9 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex]) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)(int)uVar10 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex]) >> 0x10 |
       (int)((ulonglong)((longlong)(int)uVar10 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex])
            >> 0x20) << 0x10);
  g_TransformMatrix.m[0].x =
       ((uint)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)iVar11) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)iVar11) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)(int)uVar7) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)(int)uVar7) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)iVar13) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)iVar13) >> 0x20
            ) << 0x10);
  g_TransformMatrix.m[0].y =
       ((uint)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)iVar11) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)iVar11) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)(int)uVar7) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)(int)uVar7) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)iVar13) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)iVar13) >> 0x20
            ) << 0x10);
  g_TransformMatrix.m[0].z =
       ((uint)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)iVar11) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)iVar11) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)(int)uVar7) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)(int)uVar7) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)iVar13) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)iVar13) >> 0x20
            ) << 0x10);
  g_TransformMatrix.m[1].x =
       ((uint)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)iVar12) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)iVar12) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)(int)uVar8) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)(int)uVar8) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)iVar3) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)iVar3) >> 0x20)
       << 0x10);
  g_TransformMatrix.m[1].y =
       ((uint)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)iVar12) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)iVar12) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)(int)uVar8) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)(int)uVar8) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)iVar3) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)iVar3) >> 0x20)
       << 0x10);
  g_TransformMatrix.m[1].z =
       ((uint)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)iVar12) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)iVar12) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)(int)uVar8) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)(int)uVar8) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)iVar3) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)iVar3) >> 0x20)
       << 0x10);
  g_TransformMatrix.m[2].x =
       ((uint)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)(int)uVar6) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)(int)uVar6) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)iVar9) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)iVar9) >> 0x20)
       << 0x10) +
       ((uint)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)(int)uVar10) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)(int)uVar10) >>
            0x20) << 0x10);
  g_TransformMatrix.m[2].y =
       ((uint)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)(int)uVar6) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)(int)uVar6) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)iVar9) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)iVar9) >> 0x20)
       << 0x10) +
       ((uint)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)(int)uVar10) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)(int)uVar10) >>
            0x20) << 0x10);
  g_TransformMatrix.m[2].z =
       ((uint)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)(int)uVar6) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)(int)uVar6) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)iVar9) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)iVar9) >> 0x20)
       << 0x10) +
       ((uint)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)(int)uVar10) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)(int)uVar10) >>
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

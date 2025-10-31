// Name: engine_matrix.c_matrixPushAndTransform_FUN_0050db00
// Address: 0050db00
// Address Range: [[0050db00, 0050e269]]
// Convention: __cdecl
// Signature: void engine_matrix.c_matrixPushAndTransform_FUN_0050db00(int rotation_x, int rotation_y, int rotation_z)
// Globals:
//   TerminatedCString s_engine_matrix_c_00635aed
//   TerminatedCString s_Matrix_unbalance_00635b00
//   double g_InverseTwoPi = 0.318309886192889
//   double g_FixedPointScale = 32768
//   int g_RelativeX
//   int g_RelativeY
//   int g_RelativeZ
//   int g_LightDirectionX
//   int g_LightDirectionY
//   int g_LightDirectionZ
//   CMatrix3x3i g_TransformMatrix
//   undefined4 g_TransformMatrix[0][1]
//   undefined4 g_TransformMatrix[0][2]
//   undefined4 g_TransformMatrix[1][0]
//   undefined4 g_TransformMatrix[1][1]
//   undefined4 g_TransformMatrix[1][2]
//   undefined4 g_TransformMatrix[2][0]
//   undefined4 g_TransformMatrix[2][1]
//   undefined4 g_TransformMatrix[2][2]
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_MatrixStackIndex
//   int[10] g_MatrixStack_M00
//   int[10] g_MatrixStack_M01
//   int[10] g_MatrixStack_M02
//   int[10] g_MatrixStack_M10
//   int[10] g_MatrixStack_M11
//   int[10] g_MatrixStack_M12
//   int[10] g_MatrixStack_M20
//   int[10] g_MatrixStack_M21
//   int[10] g_MatrixStack_M22
//   int[10] g_MatrixStack_RelX
//   int[10] g_MatrixStack_RelY
//   int[10] g_MatrixStack_RelZ
//   int[10] g_MatrixStack_Unk1
//   int[10] g_MatrixStack_Unk2
//   int[10] g_MatrixStack_Unk3
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_atan2_FUN_006013b1
//   crt_math.c_round_FUN_005fe6b0
//   engine_matrix.c_interpolatedCos_FUN_0050c600
//   engine_matrix.c_interpolatedSin_FUN_0050c5c0

#include "nocturne.h"

void __cdecl
engine_matrix_c_matrixPushAndTransform_FUN_0050db00(int rotation_x,int rotation_y,int rotation_z)

{
  longlong lVar1;
  undefined4 extraout_EAX;
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
  undefined4 extraout_EDX;
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
  g_MatrixStack_M00[iVar2] = g_TransformMatrix.m[0][0];
  g_MatrixStack_M01[iVar2] = g_TransformMatrix.m[0][1];
  g_MatrixStack_M02[iVar2] = g_TransformMatrix.m[0][2];
  g_MatrixStack_M10[iVar2] = g_TransformMatrix.m[1][0];
  g_MatrixStack_M11[iVar2] = g_TransformMatrix.m[1][1];
  g_MatrixStack_M12[iVar2] = g_TransformMatrix.m[1][2];
  g_MatrixStack_M20[iVar2] = g_TransformMatrix.m[2][0];
  g_MatrixStack_M21[iVar2] = g_TransformMatrix.m[2][1];
  g_MatrixStack_M22[iVar2] = g_TransformMatrix.m[2][2];
  crt_math_c_atan2_FUN_006013b1((float10)rotation_x,(float10)rotation_z);
  fVar14 = crt_math_c_atan2_FUN_006013b1((float10)rotation_x,x);
  fVar14 = -fVar14 * (float10)g_InverseTwoPi * (float10)g_FixedPointScale;
  dVar15 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
  dVar15 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44((int)ROUND(fVar14),SUB84(dVar15,0)));
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
  g_TransformMatrix.m[0][0] =
       ((uint)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)iVar11) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)iVar11) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)(int)uVar7) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)(int)uVar7) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)iVar13) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)iVar13) >> 0x20
            ) << 0x10);
  g_TransformMatrix.m[0][1] =
       ((uint)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)iVar11) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)iVar11) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)(int)uVar7) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)(int)uVar7) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)iVar13) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)iVar13) >> 0x20
            ) << 0x10);
  g_TransformMatrix.m[0][2] =
       ((uint)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)iVar11) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)iVar11) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)(int)uVar7) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)(int)uVar7) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)iVar13) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)iVar13) >> 0x20
            ) << 0x10);
  g_TransformMatrix.m[1][0] =
       ((uint)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)iVar12) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)iVar12) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)(int)uVar8) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)(int)uVar8) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)iVar3) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)iVar3) >> 0x20)
       << 0x10);
  g_TransformMatrix.m[1][1] =
       ((uint)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)iVar12) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)iVar12) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)(int)uVar8) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)(int)uVar8) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)iVar3) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)iVar3) >> 0x20)
       << 0x10);
  g_TransformMatrix.m[1][2] =
       ((uint)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)iVar12) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)iVar12) >> 0x20
            ) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)(int)uVar8) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)(int)uVar8) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)iVar3) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)iVar3) >> 0x20)
       << 0x10);
  g_TransformMatrix.m[2][0] =
       ((uint)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)(int)uVar6) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)(int)uVar6) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)iVar9) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)iVar9) >> 0x20)
       << 0x10) +
       ((uint)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)(int)uVar10) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)(int)uVar10) >>
            0x20) << 0x10);
  g_TransformMatrix.m[2][1] =
       ((uint)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)(int)uVar6) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)(int)uVar6) >>
            0x20) << 0x10) +
       ((uint)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)iVar9) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)iVar9) >> 0x20)
       << 0x10) +
       ((uint)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)(int)uVar10) >> 0x10 |
       (int)((ulonglong)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)(int)uVar10) >>
            0x20) << 0x10);
  g_TransformMatrix.m[2][2] =
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


// Assembly code:
// 0050db00: PUSH EBX
//   Label: engine_matrix.c_matrixPushAndTransform_FUN_0050db00
// 0050db01: PUSH ESI
// 0050db02: PUSH EDI
// 0050db03: PUSH EBP
// 0050db04: SUB ESP,0x40
// 0050db07: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050db0c: MOV EDX,dword ptr [0x02d052b8]
//   XREF to: 02d052b8 (READ)
// 0050db12: MOV dword ptr [EAX*0x4 + 0x2f0d52c],EDX
//   XREF to: 02f0d52c (DATA)
// 0050db19: MOV EDX,dword ptr [0x02d052bc]
//   XREF to: 02d052bc (READ)
// 0050db1f: MOV dword ptr [EAX*0x4 + 0x2f0d554],EDX
//   XREF to: 02f0d554 (DATA)
// 0050db26: MOV EDX,dword ptr [0x02d052c0]
//   XREF to: 02d052c0 (READ)
// 0050db2c: MOV dword ptr [EAX*0x4 + 0x2f0d57c],EDX
//   XREF to: 02f0d57c (DATA)
// 0050db33: MOV EDX,dword ptr [0x02d052dc]
//   XREF to: 02d052dc (READ)
// 0050db39: MOV dword ptr [EAX*0x4 + 0x2f0d5a4],EDX
//   XREF to: 02f0d5a4 (DATA)
// 0050db40: MOV EDX,dword ptr [0x02d052e0]
//   XREF to: 02d052e0 (READ)
// 0050db46: MOV dword ptr [EAX*0x4 + 0x2f0d5cc],EDX
//   XREF to: 02f0d5cc (DATA)
// 0050db4d: MOV EDX,dword ptr [0x02d052e4]
//   XREF to: 02d052e4 (READ)
// 0050db53: MOV dword ptr [EAX*0x4 + 0x2f0d5f4],EDX
//   XREF to: 02f0d5f4 (DATA)
// 0050db5a: MOV EDX,dword ptr [0x02d052e8]
//   XREF to: 02d052e8 (READ)
// 0050db60: MOV dword ptr [EAX*0x4 + 0x2f0d3c4],EDX
//   XREF to: 02f0d3c4 (DATA)
// 0050db67: MOV EDX,dword ptr [0x02d052ec]
//   XREF to: 02d052ec (READ)
// 0050db6d: MOV dword ptr [EAX*0x4 + 0x2f0d3ec],EDX
//   XREF to: 02f0d3ec (DATA)
// 0050db74: MOV EDX,dword ptr [0x02d052f0]
//   XREF to: 02d052f0 (READ)
// 0050db7a: MOV dword ptr [EAX*0x4 + 0x2f0d414],EDX
//   XREF to: 02f0d414 (DATA)
// 0050db81: MOV EDX,dword ptr [0x02d052f4]
//   XREF to: 02d052f4 (READ)
// 0050db87: MOV dword ptr [EAX*0x4 + 0x2f0d43c],EDX
//   XREF to: 02f0d43c (DATA)
// 0050db8e: MOV EDX,dword ptr [0x02d052f8]
//   XREF to: 02d052f8 (READ)
// 0050db94: MOV dword ptr [EAX*0x4 + 0x2f0d464],EDX
//   XREF to: 02f0d464 (DATA)
// 0050db9b: MOV EDX,dword ptr [0x02d052fc]
//   XREF to: 02d052fc (READ)
// 0050dba1: MOV dword ptr [EAX*0x4 + 0x2f0d48c],EDX
//   XREF to: 02f0d48c (DATA)
// 0050dba8: MOV EDX,dword ptr [0x02d05300]
//   XREF to: 02d05300 (READ)
// 0050dbae: MOV dword ptr [EAX*0x4 + 0x2f0d4b4],EDX
//   XREF to: 02f0d4b4 (DATA)
// 0050dbb5: MOV EDX,dword ptr [0x02d05304]
//   XREF to: 02d05304 (READ)
// 0050dbbb: MOV dword ptr [EAX*0x4 + 0x2f0d4dc],EDX
//   XREF to: 02f0d4dc (DATA)
// 0050dbc2: MOV EDX,dword ptr [0x02d05308]
//   XREF to: 02d05308 (READ)
// 0050dbc8: FILD dword ptr [ESP + 0x5c]
//   XREF to: Stack[0xc] (READ)
// 0050dbcc: MOV dword ptr [EAX*0x4 + 0x2f0d504],EDX
//   XREF to: 02f0d504 (DATA)
// 0050dbd3: MOV EAX,[0x02d052b8]
//   XREF to: 02d052b8 (READ)
// 0050dbd8: FILD dword ptr [ESP + 0x54]
//   XREF to: Stack[0x4] (READ)
// 0050dbdc: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0050dbe0: MOV EAX,[0x02d052bc]
//   XREF to: 02d052bc (READ)
// 0050dbe5: FLD ST1
// 0050dbe7: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0050dbeb: MOV EAX,[0x02d052c0]
//   XREF to: 02d052c0 (READ)
// 0050dbf0: FXCH
// 0050dbf2: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0050dbf6: CALL crt_math.c_atan2_FUN_006013b1
//   XREF to: 006013b1 (UNCONDITIONAL_CALL)
// 0050dbfb: FLD ST1
// 0050dbfd: FILD dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 0050dc01: CALL crt_math.c_atan2_FUN_006013b1
//   XREF to: 006013b1 (UNCONDITIONAL_CALL)
// 0050dc06: FSTP ST2
// 0050dc08: FXCH
// 0050dc0a: FCHS
// 0050dc0c: FLD double ptr [0x00635b15]
//   XREF to: 00635b15 (READ)
// 0050dc12: FXCH
// 0050dc14: FMUL ST1
// 0050dc16: FXCH ST2
// 0050dc18: FMULP
// 0050dc1a: FXCH
// 0050dc1c: FLD double ptr [0x00635b1d]
//   XREF to: 00635b1d (READ)
// 0050dc22: FXCH
// 0050dc24: FMUL ST1
// 0050dc26: FXCH ST2
// 0050dc28: FMULP
// 0050dc2a: FXCH
// 0050dc2c: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0050dc31: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x50] (WRITE)
// 0050dc35: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x50] (READ)
// 0050dc39: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0050dc3e: PUSH EDX
// 0050dc3f: FISTP dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x48] (WRITE)
// 0050dc43: CALL engine_matrix.c_interpolatedSin_FUN_0050c5c0
//   XREF to: 0050c5c0 (UNCONDITIONAL_CALL)
// 0050dc48: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0050dc4c: ADD ESP,0x4
// 0050dc4f: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x50] (READ)
// 0050dc53: PUSH ECX
// 0050dc54: CALL engine_matrix.c_interpolatedCos_FUN_0050c600
//   XREF to: 0050c600 (UNCONDITIONAL_CALL)
// 0050dc59: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0050dc5d: ADD ESP,0x4
// 0050dc60: PUSH 0x0
// 0050dc62: CALL engine_matrix.c_interpolatedSin_FUN_0050c5c0
//   XREF to: 0050c5c0 (UNCONDITIONAL_CALL)
// 0050dc67: ADD ESP,0x4
// 0050dc6a: PUSH 0x0
// 0050dc6c: MOV EBP,EAX
// 0050dc6e: CALL engine_matrix.c_interpolatedCos_FUN_0050c600
//   XREF to: 0050c600 (UNCONDITIONAL_CALL)
// 0050dc73: ADD ESP,0x4
// 0050dc76: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x48] (READ)
// 0050dc7a: PUSH ESI
// 0050dc7b: MOV EBX,EAX
// 0050dc7d: CALL engine_matrix.c_interpolatedSin_FUN_0050c5c0
//   XREF to: 0050c5c0 (UNCONDITIONAL_CALL)
// 0050dc82: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0050dc86: ADD ESP,0x4
// 0050dc89: PUSH ESI
// 0050dc8a: CALL engine_matrix.c_interpolatedCos_FUN_0050c600
//   XREF to: 0050c600 (UNCONDITIONAL_CALL)
// 0050dc8f: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0050dc93: ADD ESP,0x4
// 0050dc96: MOV EAX,EBX
// 0050dc98: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x20] (READ)
// 0050dc9c: IMUL EDX
// 0050dc9e: SHRD EAX,EDX,0x10
// 0050dca2: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x2c] (READ)
// 0050dca6: MOV ECX,EAX
// 0050dca8: MOV EAX,EBP
// 0050dcaa: IMUL EDX
// 0050dcac: SHRD EAX,EDX,0x10
// 0050dcb0: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x24] (READ)
// 0050dcb4: IMUL EDX
// 0050dcb6: SHRD EAX,EDX,0x10
// 0050dcba: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x20] (READ)
// 0050dcbe: ADD ECX,EAX
// 0050dcc0: NEG EDX
// 0050dcc2: MOV EAX,EBP
// 0050dcc4: MOV dword ptr [ESP + 0x30],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 0050dcc8: IMUL EDX
// 0050dcca: SHRD EAX,EDX,0x10
// 0050dcce: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x2c] (READ)
// 0050dcd2: MOV ECX,EAX
// 0050dcd4: MOV EAX,EBX
// 0050dcd6: IMUL EDX
// 0050dcd8: SHRD EAX,EDX,0x10
// 0050dcdc: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x24] (READ)
// 0050dce0: IMUL EDX
// 0050dce2: SHRD EAX,EDX,0x10
// 0050dce6: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x24] (READ)
// 0050dcea: ADD ECX,EAX
// 0050dcec: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x38] (READ)
// 0050dcf0: MOV dword ptr [ESP + 0x28],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 0050dcf4: IMUL EDX
// 0050dcf6: SHRD EAX,EDX,0x10
// 0050dcfa: MOV ECX,EAX
// 0050dcfc: MOV EDX,EBP
// 0050dcfe: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x38] (READ)
// 0050dd02: IMUL EDX
// 0050dd04: SHRD EAX,EDX,0x10
// 0050dd08: MOV EDI,EAX
// 0050dd0a: MOV EDX,EBX
// 0050dd0c: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x38] (READ)
// 0050dd10: IMUL EDX
// 0050dd12: SHRD EAX,EDX,0x10
// 0050dd16: MOV ESI,EAX
// 0050dd18: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x2c] (READ)
// 0050dd1c: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x24] (READ)
// 0050dd20: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0050dd24: NEG EAX
// 0050dd26: NEG EDX
// 0050dd28: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0050dd2c: MOV EAX,EBX
// 0050dd2e: IMUL EDX
// 0050dd30: SHRD EAX,EDX,0x10
// 0050dd34: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x2c] (READ)
// 0050dd38: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0050dd3c: MOV EAX,EBP
// 0050dd3e: IMUL EDX
// 0050dd40: SHRD EAX,EDX,0x10
// 0050dd44: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x20] (READ)
// 0050dd48: IMUL EDX
// 0050dd4a: SHRD EAX,EDX,0x10
// 0050dd4e: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x4c] (READ)
// 0050dd52: ADD EDX,EAX
// 0050dd54: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x24] (READ)
// 0050dd58: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 0050dd5c: MOV EDX,EBP
// 0050dd5e: IMUL EDX
// 0050dd60: SHRD EAX,EDX,0x10
// 0050dd64: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x2c] (READ)
// 0050dd68: MOV EBP,EAX
// 0050dd6a: MOV EAX,EBX
// 0050dd6c: IMUL EDX
// 0050dd6e: SHRD EAX,EDX,0x10
// 0050dd72: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x20] (READ)
// 0050dd76: IMUL EDX
// 0050dd78: SHRD EAX,EDX,0x10
// 0050dd7c: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x20] (READ)
// 0050dd80: ADD EBP,EAX
// 0050dd82: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x38] (READ)
// 0050dd86: IMUL EDX
// 0050dd88: SHRD EAX,EDX,0x10
// 0050dd8c: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x44] (READ)
// 0050dd90: MOV EBX,EAX
// 0050dd92: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x28] (READ)
// 0050dd96: IMUL EDX
// 0050dd98: SHRD EAX,EDX,0x10
// 0050dd9c: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x40] (READ)
// 0050dda0: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0050dda4: MOV EAX,EDI
// 0050dda6: IMUL EDX
// 0050dda8: SHRD EAX,EDX,0x10
// 0050ddac: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x4c] (READ)
// 0050ddb0: ADD EDX,EAX
// 0050ddb2: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x34] (READ)
// 0050ddb6: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x4c] (WRITE)
// 0050ddba: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x3c] (READ)
// 0050ddbe: IMUL EDX
// 0050ddc0: SHRD EAX,EDX,0x10
// 0050ddc4: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x4c] (READ)
// 0050ddc8: ADD EDX,EAX
// 0050ddca: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x30] (READ)
// 0050ddce: MOV dword ptr [0x02d052b8],EDX
//   XREF to: 02d052b8 (WRITE)
// 0050ddd4: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x44] (READ)
// 0050ddd8: IMUL EDX
// 0050ddda: SHRD EAX,EDX,0x10
// 0050ddde: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x40] (READ)
// 0050dde2: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0050dde6: MOV EAX,ESI
// 0050dde8: IMUL EDX
// 0050ddea: SHRD EAX,EDX,0x10
// 0050ddee: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x4c] (READ)
// 0050ddf2: ADD EDX,EAX
// 0050ddf4: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x4c] (WRITE)
// 0050ddf8: MOV EAX,EBP
// 0050ddfa: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x3c] (READ)
// 0050ddfe: IMUL EDX
// 0050de00: SHRD EAX,EDX,0x10
// 0050de04: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x4c] (READ)
// 0050de08: ADD EDX,EAX
// 0050de0a: MOV dword ptr [0x02d052bc],EDX
//   XREF to: 02d052bc (WRITE)
// 0050de10: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x44] (READ)
// 0050de14: MOV EAX,ECX
// 0050de16: IMUL EDX
// 0050de18: SHRD EAX,EDX,0x10
// 0050de1c: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x40] (READ)
// 0050de20: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0050de24: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x1c] (READ)
// 0050de28: IMUL EDX
// 0050de2a: SHRD EAX,EDX,0x10
// 0050de2e: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x4c] (READ)
// 0050de32: ADD EDX,EAX
// 0050de34: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x4c] (WRITE)
// 0050de38: MOV EAX,EBX
// 0050de3a: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x3c] (READ)
// 0050de3e: IMUL EDX
// 0050de40: SHRD EAX,EDX,0x10
// 0050de44: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x4c] (READ)
// 0050de48: ADD EDX,EAX
// 0050de4a: MOV dword ptr [0x02d052c0],EDX
//   XREF to: 02d052c0 (WRITE)
// 0050de50: MOV EDX,dword ptr [0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050de56: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x28] (READ)
// 0050de5a: MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5a4]
//   XREF to: 02f0d5a4 (DATA)
// 0050de61: IMUL EDX
// 0050de63: SHRD EAX,EDX,0x10
// 0050de67: MOV EDX,dword ptr [0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050de6d: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0050de71: MOV EAX,EDI
// 0050de73: MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5cc]
//   XREF to: 02f0d5cc (DATA)
// 0050de7a: IMUL EDX
// 0050de7c: SHRD EAX,EDX,0x10
// 0050de80: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x4c] (READ)
// 0050de84: ADD EDX,EAX
// 0050de86: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x4c] (WRITE)
// 0050de8a: MOV EDX,dword ptr [0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050de90: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x34] (READ)
// 0050de94: MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5f4]
//   XREF to: 02f0d5f4 (DATA)
// 0050de9b: IMUL EDX
// 0050de9d: SHRD EAX,EDX,0x10
// 0050dea1: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x4c] (READ)
// 0050dea5: ADD EDX,EAX
// 0050dea7: MOV dword ptr [0x02d052dc],EDX
//   XREF to: 02d052dc (WRITE)
// 0050dead: MOV EDX,dword ptr [0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050deb3: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x30] (READ)
// 0050deb7: MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5a4]
//   XREF to: 02f0d5a4 (DATA)
// 0050debe: IMUL EDX
// 0050dec0: SHRD EAX,EDX,0x10
// 0050dec4: MOV EDX,dword ptr [0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050deca: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0050dece: MOV EAX,ESI
// 0050ded0: MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5cc]
//   XREF to: 02f0d5cc (DATA)
// 0050ded7: IMUL EDX
// 0050ded9: SHRD EAX,EDX,0x10
// 0050dedd: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x4c] (READ)
// 0050dee1: ADD EDX,EAX
// 0050dee3: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x4c] (WRITE)
// 0050dee7: MOV EDX,dword ptr [0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050deed: MOV EAX,EBP
// 0050deef: MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5f4]
//   XREF to: 02f0d5f4 (DATA)
// 0050def6: IMUL EDX
// 0050def8: SHRD EAX,EDX,0x10
// 0050defc: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x4c] (READ)
// 0050df00: ADD EDX,EAX
// 0050df02: MOV dword ptr [0x02d052e0],EDX
//   XREF to: 02d052e0 (WRITE)
// 0050df08: MOV EDX,dword ptr [0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050df0e: MOV EAX,ECX
// 0050df10: MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5a4]
//   XREF to: 02f0d5a4 (DATA)
// 0050df17: IMUL EDX
// 0050df19: SHRD EAX,EDX,0x10
// 0050df1d: MOV EDX,dword ptr [0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050df23: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0050df27: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x1c] (READ)
// 0050df2b: MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5cc]
//   XREF to: 02f0d5cc (DATA)
// 0050df32: IMUL EDX
// 0050df34: SHRD EAX,EDX,0x10
// 0050df38: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x4c] (READ)
// 0050df3c: ADD EDX,EAX
// 0050df3e: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x4c] (WRITE)
// 0050df42: MOV EDX,dword ptr [0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050df48: MOV EAX,EBX
// 0050df4a: MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5f4]
//   XREF to: 02f0d5f4 (DATA)
// 0050df51: IMUL EDX
// 0050df53: SHRD EAX,EDX,0x10
// 0050df57: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x4c] (READ)
// 0050df5b: ADD EDX,EAX
// 0050df5d: MOV dword ptr [0x02d052e4],EDX
//   XREF to: 02d052e4 (WRITE)
// 0050df63: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050df68: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x28] (READ)
// 0050df6c: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d3c4]
//   XREF to: 02f0d3c4 (DATA)
// 0050df73: IMUL EDX
// 0050df75: SHRD EAX,EDX,0x10
// 0050df79: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0050df7d: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050df82: MOV EDX,EDI
// 0050df84: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d43c]
//   XREF to: 02f0d43c (DATA)
// 0050df8b: IMUL EDX
// 0050df8d: SHRD EAX,EDX,0x10
// 0050df91: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x4c] (READ)
// 0050df95: ADD EDX,EAX
// 0050df97: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050df9c: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x4c] (WRITE)
// 0050dfa0: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x34] (READ)
// 0050dfa4: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d4b4]
//   XREF to: 02f0d4b4 (DATA)
// 0050dfab: IMUL EDX
// 0050dfad: SHRD EAX,EDX,0x10
// 0050dfb1: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x4c] (READ)
// 0050dfb5: ADD EDX,EAX
// 0050dfb7: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050dfbc: MOV dword ptr [0x02d052e8],EDX
//   XREF to: 02d052e8 (WRITE)
// 0050dfc2: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x28] (READ)
// 0050dfc6: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d3ec]
//   XREF to: 02f0d3ec (DATA)
// 0050dfcd: IMUL EDX
// 0050dfcf: SHRD EAX,EDX,0x10
// 0050dfd3: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0050dfd7: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050dfdc: MOV EDX,EDI
// 0050dfde: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d464]
//   XREF to: 02f0d464 (DATA)
// 0050dfe5: IMUL EDX
// 0050dfe7: SHRD EAX,EDX,0x10
// 0050dfeb: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x4c] (READ)
// 0050dfef: ADD EDX,EAX
// 0050dff1: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050dff6: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x4c] (WRITE)
// 0050dffa: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x34] (READ)
// 0050dffe: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d4dc]
//   XREF to: 02f0d4dc (DATA)
// 0050e005: IMUL EDX
// 0050e007: SHRD EAX,EDX,0x10
// 0050e00b: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x4c] (READ)
// 0050e00f: ADD EDX,EAX
// 0050e011: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050e016: MOV dword ptr [0x02d052ec],EDX
//   XREF to: 02d052ec (WRITE)
// 0050e01c: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x28] (READ)
// 0050e020: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d414]
//   XREF to: 02f0d414 (DATA)
// 0050e027: IMUL EDX
// 0050e029: SHRD EAX,EDX,0x10
// 0050e02d: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0050e031: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050e036: MOV EDX,EDI
// 0050e038: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d48c]
//   XREF to: 02f0d48c (DATA)
// 0050e03f: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x4c] (READ)
// 0050e043: IMUL EDX
// 0050e045: SHRD EAX,EDX,0x10
// 0050e049: ADD EDI,EAX
// 0050e04b: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050e050: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x34] (READ)
// 0050e054: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d504]
//   XREF to: 02f0d504 (DATA)
// 0050e05b: IMUL EDX
// 0050e05d: SHRD EAX,EDX,0x10
// 0050e061: ADD EDI,EAX
// 0050e063: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050e068: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x30] (READ)
// 0050e06c: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d3c4]
//   XREF to: 02f0d3c4 (DATA)
// 0050e073: MOV dword ptr [0x02d052f0],EDI
//   XREF to: 02d052f0 (WRITE)
// 0050e079: IMUL EDX
// 0050e07b: SHRD EAX,EDX,0x10
// 0050e07f: MOV EDI,EAX
// 0050e081: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050e086: MOV EDX,ESI
// 0050e088: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d43c]
//   XREF to: 02f0d43c (DATA)
// 0050e08f: IMUL EDX
// 0050e091: SHRD EAX,EDX,0x10
// 0050e095: ADD EDI,EAX
// 0050e097: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050e09c: MOV EDX,EBP
// 0050e09e: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d4b4]
//   XREF to: 02f0d4b4 (DATA)
// 0050e0a5: IMUL EDX
// 0050e0a7: SHRD EAX,EDX,0x10
// 0050e0ab: ADD EDI,EAX
// 0050e0ad: MOV dword ptr [0x02d052f4],EDI
//   XREF to: 02d052f4 (WRITE)
// 0050e0b3: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050e0b8: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x30] (READ)
// 0050e0bc: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d3ec]
//   XREF to: 02f0d3ec (DATA)
// 0050e0c3: IMUL EDX
// 0050e0c5: SHRD EAX,EDX,0x10
// 0050e0c9: MOV EDI,EAX
// 0050e0cb: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050e0d0: MOV EDX,ESI
// 0050e0d2: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d464]
//   XREF to: 02f0d464 (DATA)
// 0050e0d9: IMUL EDX
// 0050e0db: SHRD EAX,EDX,0x10
// 0050e0df: ADD EDI,EAX
// 0050e0e1: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050e0e6: MOV EDX,EBP
// 0050e0e8: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d4dc]
//   XREF to: 02f0d4dc (DATA)
// 0050e0ef: IMUL EDX
// 0050e0f1: SHRD EAX,EDX,0x10
// 0050e0f5: ADD EDI,EAX
// 0050e0f7: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050e0fc: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x30] (READ)
// 0050e100: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d414]
//   XREF to: 02f0d414 (DATA)
// 0050e107: MOV dword ptr [0x02d052f8],EDI
//   XREF to: 02d052f8 (WRITE)
// 0050e10d: IMUL EDX
// 0050e10f: SHRD EAX,EDX,0x10
// 0050e113: MOV EDI,EAX
// 0050e115: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050e11a: MOV EDX,ESI
// 0050e11c: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d48c]
//   XREF to: 02f0d48c (DATA)
// 0050e123: IMUL EDX
// 0050e125: SHRD EAX,EDX,0x10
// 0050e129: ADD EDI,EAX
// 0050e12b: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050e130: MOV EDX,EBP
// 0050e132: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d504]
//   XREF to: 02f0d504 (DATA)
// 0050e139: IMUL EDX
// 0050e13b: SHRD EAX,EDX,0x10
// 0050e13f: ADD EDI,EAX
// 0050e141: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050e146: MOV EDX,ECX
// 0050e148: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d3c4]
//   XREF to: 02f0d3c4 (DATA)
// 0050e14f: MOV dword ptr [0x02d052fc],EDI
//   XREF to: 02d052fc (WRITE)
// 0050e155: IMUL EDX
// 0050e157: SHRD EAX,EDX,0x10
// 0050e15b: MOV ESI,EAX
// 0050e15d: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050e162: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x1c] (READ)
// 0050e166: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d43c]
//   XREF to: 02f0d43c (DATA)
// 0050e16d: IMUL EDX
// 0050e16f: SHRD EAX,EDX,0x10
// 0050e173: ADD ESI,EAX
// 0050e175: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050e17a: MOV EDX,EBX
// 0050e17c: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d4b4]
//   XREF to: 02f0d4b4 (DATA)
// 0050e183: IMUL EDX
// 0050e185: SHRD EAX,EDX,0x10
// 0050e189: ADD ESI,EAX
// 0050e18b: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050e190: MOV EDX,ECX
// 0050e192: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d3ec]
//   XREF to: 02f0d3ec (DATA)
// 0050e199: MOV dword ptr [0x02d05300],ESI
//   XREF to: 02d05300 (WRITE)
// 0050e19f: IMUL EDX
// 0050e1a1: SHRD EAX,EDX,0x10
// 0050e1a5: MOV ESI,EAX
// 0050e1a7: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050e1ac: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x1c] (READ)
// 0050e1b0: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d464]
//   XREF to: 02f0d464 (DATA)
// 0050e1b7: IMUL EDX
// 0050e1b9: SHRD EAX,EDX,0x10
// 0050e1bd: ADD ESI,EAX
// 0050e1bf: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050e1c4: MOV EDX,EBX
// 0050e1c6: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d4dc]
//   XREF to: 02f0d4dc (DATA)
// 0050e1cd: IMUL EDX
// 0050e1cf: SHRD EAX,EDX,0x10
// 0050e1d3: ADD ESI,EAX
// 0050e1d5: MOV dword ptr [0x02d05304],ESI
//   XREF to: 02d05304 (WRITE)
// 0050e1db: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050e1e0: MOV EDX,ECX
// 0050e1e2: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d414]
//   XREF to: 02f0d414 (DATA)
// 0050e1e9: IMUL EDX
// 0050e1eb: SHRD EAX,EDX,0x10
// 0050e1ef: MOV ECX,EAX
// 0050e1f1: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050e1f6: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x1c] (READ)
// 0050e1fa: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d48c]
//   XREF to: 02f0d48c (DATA)
// 0050e201: IMUL EDX
// 0050e203: SHRD EAX,EDX,0x10
// 0050e207: ADD ECX,EAX
// 0050e209: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050e20e: MOV EDX,EBX
// 0050e210: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d504]
//   XREF to: 02f0d504 (DATA)
// 0050e217: IMUL EDX
// 0050e219: SHRD EAX,EDX,0x10
// 0050e21d: MOV EDX,dword ptr [0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050e223: ADD ECX,EAX
// 0050e225: INC EDX
// 0050e226: MOV dword ptr [0x02d05308],ECX
//   XREF to: 02d05308 (WRITE)
// 0050e22c: MOV dword ptr [0x02f0d3c0],EDX
//   XREF to: 02f0d3c0 (WRITE)
// 0050e232: CMP EDX,0x9
// 0050e235: JG 0x0050e23f
//   XREF to: 0050e23f (CONDITIONAL_JUMP)
// 0050e237: ADD ESP,0x40
// 0050e23a: POP EBP
// 0050e23b: POP EDI
// 0050e23c: POP ESI
// 0050e23d: POP EBX
// 0050e23e: RET
// 0050e23f: MOV EBX,0x635aed
//   Label: LAB_0050e23f
//   XREF to: 00635aed (DATA)
// 0050e244: MOV ESI,0x4c9
// 0050e249: PUSH 0x635b00
//   XREF to: 00635b00 (DATA)
// 0050e24e: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0050e254: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0050e25a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0050e25f: ADD ESP,0x4
// 0050e262: ADD ESP,0x40
// 0050e265: POP EBP
// 0050e266: POP EDI
// 0050e267: POP ESI
// 0050e268: POP EBX
// 0050e269: RET

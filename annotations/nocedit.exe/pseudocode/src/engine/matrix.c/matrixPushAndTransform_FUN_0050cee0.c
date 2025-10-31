// Name: engine_matrix.c_matrixPushAndTransform_FUN_0050cee0
// Address: 0050cee0
// Address Range: [[0050cee0, 0050d61f]]
// Convention: __cdecl
// Signature: void engine_matrix.c_matrixPushAndTransform_FUN_0050cee0(ushort rotX, ushort rotY, ushort rotZ, int translateX, int translateY, int translateZ)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0 (0048c4a0) at 0048c4e0 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 (0048c4f0) at 0048c612 [UNCONDITIONAL_CALL]
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 0045f488 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90 (004a1e90) at 004a1f0a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_matrix_c_00635a4d
//   TerminatedCString s_Matrix_unbalance_00635a60
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
//   uint g_SavedRotationX
//   uint g_SavedRotationY
//   uint g_SavedRotationZ
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
//   engine_matrix.c_interpolatedCos_FUN_0050c600
//   engine_matrix.c_interpolatedSin_FUN_0050c5c0

#include "nocturne.h"

void __cdecl
engine_matrix_c_matrixPushAndTransform_FUN_0050cee0
          (ushort rotX,ushort rotY,ushort rotZ,int translateX,int translateY,int translateZ)

{
  longlong lVar1;
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
  int iVar13;
  int unaff_EBX;
  int unaff_EDI;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000000a;
  undefined2 in_stack_0000000e;
  int local_24;
  int local_1c;
  int local_18;
  
  iVar3 = g_MatrixStackIndex;
  g_MatrixStack_RelX[g_MatrixStackIndex] = g_RelativeX;
  g_MatrixStack_RelY[iVar3] = g_RelativeY;
  g_MatrixStack_RelZ[iVar3] = g_RelativeZ;
  g_MatrixStack_Unk1[iVar3] = g_LightDirectionX;
  g_MatrixStack_Unk2[iVar3] = g_LightDirectionY;
  g_MatrixStack_Unk3[iVar3] = g_LightDirectionZ;
  g_MatrixStack_M00[iVar3] = g_TransformMatrix.m[0][0];
  g_MatrixStack_M01[iVar3] = g_TransformMatrix.m[0][1];
  g_MatrixStack_M02[iVar3] = g_TransformMatrix.m[0][2];
  g_MatrixStack_M10[iVar3] = g_TransformMatrix.m[1][0];
  g_MatrixStack_M11[iVar3] = g_TransformMatrix.m[1][1];
  g_MatrixStack_M12[iVar3] = g_TransformMatrix.m[1][2];
  g_MatrixStack_M20[iVar3] = g_TransformMatrix.m[2][0];
  g_MatrixStack_M21[iVar3] = g_TransformMatrix.m[2][1];
  g_MatrixStack_M22[iVar3] = g_TransformMatrix.m[2][2];
  g_SavedRotationY = _rotY;
  g_SavedRotationZ = _rotZ;
  g_SavedRotationX = _rotX;
  iVar3 = g_RelativeX - translateX;
  iVar4 = g_RelativeY - translateY;
  iVar2 = g_RelativeZ - translateZ;
  if ((_rotX != 0 || _rotY != 0) || _rotZ != 0) {
    iVar2 = engine_matrix_c_interpolatedSin_FUN_0050c5c0(rotX);
    engine_matrix_c_interpolatedCos_FUN_0050c600(rotX);
    iVar3 = engine_matrix_c_interpolatedSin_FUN_0050c5c0(rotY);
    iVar4 = engine_matrix_c_interpolatedCos_FUN_0050c600(rotY);
    engine_matrix_c_interpolatedSin_FUN_0050c5c0(rotZ);
    iVar5 = engine_matrix_c_interpolatedCos_FUN_0050c600(rotZ);
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
    uVar6 = (uint)((longlong)local_1c * (longlong)unaff_EBX) >> 0x10 |
            (int)((ulonglong)((longlong)local_1c * (longlong)unaff_EBX) >> 0x20) << 0x10;
    uVar7 = (uint)((longlong)local_1c * (longlong)iVar3) >> 0x10 |
            (int)((ulonglong)((longlong)local_1c * (longlong)iVar3) >> 0x20) << 0x10;
    uVar8 = (uint)((longlong)local_1c * (longlong)iVar4) >> 0x10 |
            (int)((ulonglong)((longlong)local_1c * (longlong)iVar4) >> 0x20) << 0x10;
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
    iVar4 = ((uint)((longlong)unaff_EBX * (longlong)iVar3) >> 0x10 |
            (int)((ulonglong)((longlong)unaff_EBX * (longlong)iVar3) >> 0x20) << 0x10) +
            ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    uVar10 = (uint)((longlong)local_1c * (longlong)iVar5) >> 0x10 |
             (int)((ulonglong)((longlong)local_1c * (longlong)iVar5) >> 0x20) << 0x10;
    g_LightDirectionX =
         ((uint)((longlong)iVar11 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >> 0x10 |
         (int)((ulonglong)((longlong)iVar11 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >>
              0x20) << 0x10) +
         ((uint)((longlong)(int)uVar7 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex]) >> 0x10 |
         (int)((ulonglong)((longlong)(int)uVar7 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex])
              >> 0x20) << 0x10) +
         ((uint)((longlong)iVar13 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex]) >> 0x10 |
         (int)((ulonglong)((longlong)iVar13 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex]) >>
              0x20) << 0x10);
    g_LightDirectionY =
         ((uint)((longlong)iVar12 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >> 0x10 |
         (int)((ulonglong)((longlong)iVar12 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >>
              0x20) << 0x10) +
         ((uint)((longlong)(int)uVar8 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex]) >> 0x10 |
         (int)((ulonglong)((longlong)(int)uVar8 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex])
              >> 0x20) << 0x10) +
         ((uint)((longlong)iVar4 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex]) >> 0x10 |
         (int)((ulonglong)((longlong)iVar4 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex]) >>
              0x20) << 0x10);
    g_LightDirectionZ =
         ((uint)((longlong)(int)uVar6 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >> 0x10 |
         (int)((ulonglong)((longlong)(int)uVar6 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex])
              >> 0x20) << 0x10) +
         ((uint)((longlong)iVar9 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex]) >> 0x10 |
         (int)((ulonglong)((longlong)iVar9 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex]) >>
              0x20) << 0x10) +
         ((uint)((longlong)(int)uVar10 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex]) >> 0x10 |
         (int)((ulonglong)((longlong)(int)uVar10 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex])
              >> 0x20) << 0x10);
    g_TransformMatrix.m[0][0] =
         ((uint)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)iVar11) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)iVar11) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)(int)uVar7) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)(int)uVar7)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)iVar13) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)iVar13) >>
              0x20) << 0x10);
    g_TransformMatrix.m[0][1] =
         ((uint)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)iVar11) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)iVar11) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)(int)uVar7) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)(int)uVar7)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)iVar13) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)iVar13) >>
              0x20) << 0x10);
    g_TransformMatrix.m[0][2] =
         ((uint)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)iVar11) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)iVar11) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)(int)uVar7) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)(int)uVar7)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)iVar13) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)iVar13) >>
              0x20) << 0x10);
    g_TransformMatrix.m[1][0] =
         ((uint)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)iVar12) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)iVar12) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)(int)uVar8) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)(int)uVar8)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)iVar4) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)iVar4) >>
              0x20) << 0x10);
    g_TransformMatrix.m[1][1] =
         ((uint)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)iVar12) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)iVar12) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)(int)uVar8) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)(int)uVar8)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)iVar4) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)iVar4) >>
              0x20) << 0x10);
    g_TransformMatrix.m[1][2] =
         ((uint)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)iVar12) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)iVar12) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)(int)uVar8) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)(int)uVar8)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)iVar4) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)iVar4) >>
              0x20) << 0x10);
    g_TransformMatrix.m[2][0] =
         ((uint)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)(int)uVar6) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)(int)uVar6)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)iVar9) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)iVar9) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)(int)uVar10) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)(int)uVar10)
              >> 0x20) << 0x10);
    g_TransformMatrix.m[2][1] =
         ((uint)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)(int)uVar6) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)(int)uVar6)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)iVar9) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)iVar9) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)(int)uVar10) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)(int)uVar10)
              >> 0x20) << 0x10);
    g_TransformMatrix.m[2][2] =
         ((uint)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)(int)uVar6) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)(int)uVar6)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)iVar9) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)iVar9) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)(int)uVar10) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)(int)uVar10)
              >> 0x20) << 0x10);
    iVar3 = ((uint)((longlong)iVar11 * (longlong)iVar2) >> 0x10 |
            (int)((ulonglong)((longlong)iVar11 * (longlong)iVar2) >> 0x20) << 0x10) +
            ((uint)((longlong)(int)uVar7 * (longlong)local_24) >> 0x10 |
            (int)((ulonglong)((longlong)(int)uVar7 * (longlong)local_24) >> 0x20) << 0x10) +
            ((uint)((longlong)iVar13 * (longlong)local_18) >> 0x10 |
            (int)((ulonglong)((longlong)iVar13 * (longlong)local_18) >> 0x20) << 0x10);
    iVar4 = ((uint)((longlong)iVar12 * (longlong)iVar2) >> 0x10 |
            (int)((ulonglong)((longlong)iVar12 * (longlong)iVar2) >> 0x20) << 0x10) +
            ((uint)((longlong)(int)uVar8 * (longlong)local_24) >> 0x10 |
            (int)((ulonglong)((longlong)(int)uVar8 * (longlong)local_24) >> 0x20) << 0x10) +
            ((uint)((longlong)iVar4 * (longlong)local_18) >> 0x10 |
            (int)((ulonglong)((longlong)iVar4 * (longlong)local_18) >> 0x20) << 0x10);
    iVar2 = ((uint)((longlong)(int)uVar6 * (longlong)iVar2) >> 0x10 |
            (int)((ulonglong)((longlong)(int)uVar6 * (longlong)iVar2) >> 0x20) << 0x10) +
            ((uint)((longlong)iVar9 * (longlong)local_24) >> 0x10 |
            (int)((ulonglong)((longlong)iVar9 * (longlong)local_24) >> 0x20) << 0x10) +
            ((uint)((longlong)(int)uVar10 * (longlong)local_18) >> 0x10 |
            (int)((ulonglong)((longlong)(int)uVar10 * (longlong)local_18) >> 0x20) << 0x10);
  }
  g_RelativeZ = iVar2;
  g_RelativeY = iVar4;
  g_RelativeX = iVar3;
  g_MatrixStackIndex = g_MatrixStackIndex + 1;
  if (9 < g_MatrixStackIndex) {
    g_CurrentFilename = "..\\engine\\matrix.c";
    g_CurrentLineNumber = 799;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Matrix unbalance");
    return;
  }
  return;
}


// Assembly code:
// 0050cee0: PUSH EBX
//   Label: engine_matrix.c_matrixPushAndTransform_FUN_0050cee0
// 0050cee1: PUSH ESI
// 0050cee2: PUSH EDI
// 0050cee3: PUSH EBP
// 0050cee4: SUB ESP,0x30
// 0050cee7: MOV EDI,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 0050ceeb: MOV EBX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x8] (READ)
// 0050ceef: MOV ESI,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0xc] (READ)
// 0050cef3: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050cef8: MOV EDX,dword ptr [0x02d052b8]
//   XREF to: 02d052b8 (READ)
// 0050cefe: MOV dword ptr [EAX*0x4 + 0x2f0d52c],EDX
//   XREF to: 02f0d52c (DATA)
// 0050cf05: MOV EDX,dword ptr [0x02d052bc]
//   XREF to: 02d052bc (READ)
// 0050cf0b: MOV dword ptr [EAX*0x4 + 0x2f0d554],EDX
//   XREF to: 02f0d554 (DATA)
// 0050cf12: MOV EDX,dword ptr [0x02d052c0]
//   XREF to: 02d052c0 (READ)
// 0050cf18: MOV dword ptr [EAX*0x4 + 0x2f0d57c],EDX
//   XREF to: 02f0d57c (DATA)
// 0050cf1f: MOV EDX,dword ptr [0x02d052dc]
//   XREF to: 02d052dc (READ)
// 0050cf25: MOV dword ptr [EAX*0x4 + 0x2f0d5a4],EDX
//   XREF to: 02f0d5a4 (DATA)
// 0050cf2c: MOV EDX,dword ptr [0x02d052e0]
//   XREF to: 02d052e0 (READ)
// 0050cf32: MOV dword ptr [EAX*0x4 + 0x2f0d5cc],EDX
//   XREF to: 02f0d5cc (DATA)
// 0050cf39: MOV EDX,dword ptr [0x02d052e4]
//   XREF to: 02d052e4 (READ)
// 0050cf3f: MOV dword ptr [EAX*0x4 + 0x2f0d5f4],EDX
//   XREF to: 02f0d5f4 (DATA)
// 0050cf46: MOV EDX,dword ptr [0x02d052e8]
//   XREF to: 02d052e8 (READ)
// 0050cf4c: MOV dword ptr [EAX*0x4 + 0x2f0d3c4],EDX
//   XREF to: 02f0d3c4 (DATA)
// 0050cf53: MOV EDX,dword ptr [0x02d052ec]
//   XREF to: 02d052ec (READ)
// 0050cf59: MOV dword ptr [EAX*0x4 + 0x2f0d3ec],EDX
//   XREF to: 02f0d3ec (DATA)
// 0050cf60: MOV EDX,dword ptr [0x02d052f0]
//   XREF to: 02d052f0 (READ)
// 0050cf66: MOV dword ptr [EAX*0x4 + 0x2f0d414],EDX
//   XREF to: 02f0d414 (DATA)
// 0050cf6d: MOV EDX,dword ptr [0x02d052f4]
//   XREF to: 02d052f4 (READ)
// 0050cf73: MOV dword ptr [EAX*0x4 + 0x2f0d43c],EDX
//   XREF to: 02f0d43c (DATA)
// 0050cf7a: MOV EDX,dword ptr [0x02d052f8]
//   XREF to: 02d052f8 (READ)
// 0050cf80: MOV dword ptr [EAX*0x4 + 0x2f0d464],EDX
//   XREF to: 02f0d464 (DATA)
// 0050cf87: MOV EDX,dword ptr [0x02d052fc]
//   XREF to: 02d052fc (READ)
// 0050cf8d: MOV dword ptr [EAX*0x4 + 0x2f0d48c],EDX
//   XREF to: 02f0d48c (DATA)
// 0050cf94: MOV EDX,dword ptr [0x02d05300]
//   XREF to: 02d05300 (READ)
// 0050cf9a: MOV dword ptr [EAX*0x4 + 0x2f0d4b4],EDX
//   XREF to: 02f0d4b4 (DATA)
// 0050cfa1: MOV EDX,dword ptr [0x02d05304]
//   XREF to: 02d05304 (READ)
// 0050cfa7: MOV dword ptr [EAX*0x4 + 0x2f0d4dc],EDX
//   XREF to: 02f0d4dc (DATA)
// 0050cfae: MOV EDX,dword ptr [0x02d05308]
//   XREF to: 02d05308 (READ)
// 0050cfb4: MOV dword ptr [EAX*0x4 + 0x2f0d504],EDX
//   XREF to: 02f0d504 (DATA)
// 0050cfbb: MOV EDX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x10] (READ)
// 0050cfbf: MOV EAX,[0x02d052b8]
//   XREF to: 02d052b8 (READ)
// 0050cfc4: SUB EAX,EDX
// 0050cfc6: MOV ECX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x14] (READ)
// 0050cfca: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0050cfce: MOV EAX,[0x02d052bc]
//   XREF to: 02d052bc (READ)
// 0050cfd3: SUB EAX,ECX
// 0050cfd5: MOV EBP,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x18] (READ)
// 0050cfd9: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0050cfdd: MOV EAX,[0x02d052c0]
//   XREF to: 02d052c0 (READ)
// 0050cfe2: SUB EAX,EBP
// 0050cfe4: MOV dword ptr [0x02f0d3b4],EBX
//   XREF to: 02f0d3b4 (WRITE)
// 0050cfea: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0050cfee: MOV EAX,EDI
// 0050cff0: MOV dword ptr [0x02f0d3b8],ESI
//   XREF to: 02f0d3b8 (WRITE)
// 0050cff6: OR EAX,EBX
// 0050cff8: MOV dword ptr [0x02f0d3b0],EDI
//   XREF to: 02f0d3b0 (WRITE)
// 0050cffe: OR EAX,ESI
// 0050d000: JNZ 0x0050d03b
//   XREF to: 0050d03b (CONDITIONAL_JUMP)
// 0050d002: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 0050d006: MOV [0x02d052b8],EAX
//   XREF to: 02d052b8 (WRITE)
// 0050d00b: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 0050d00f: MOV [0x02d052bc],EAX
//   XREF to: 02d052bc (WRITE)
// 0050d014: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 0050d018: MOV [0x02d052c0],EAX
//   XREF to: 02d052c0 (WRITE)
// 0050d01d: MOV EDX,dword ptr [0x02f0d3c0]
//   Label: LAB_0050d01d
//   XREF to: 02f0d3c0 (READ)
// 0050d023: INC EDX
// 0050d024: MOV dword ptr [0x02f0d3c0],EDX
//   XREF to: 02f0d3c0 (WRITE)
// 0050d02a: CMP EDX,0x9
// 0050d02d: JG 0x0050d5f5
//   XREF to: 0050d5f5 (CONDITIONAL_JUMP)
// 0050d033: ADD ESP,0x30
// 0050d036: POP EBP
// 0050d037: POP EDI
// 0050d038: POP ESI
// 0050d039: POP EBX
// 0050d03a: RET
// 0050d03b: PUSH EDI
//   Label: LAB_0050d03b
// 0050d03c: CALL engine_matrix.c_interpolatedSin_FUN_0050c5c0
//   XREF to: 0050c5c0 (UNCONDITIONAL_CALL)
// 0050d041: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0050d045: ADD ESP,0x4
// 0050d048: PUSH EDI
// 0050d049: CALL engine_matrix.c_interpolatedCos_FUN_0050c600
//   XREF to: 0050c600 (UNCONDITIONAL_CALL)
// 0050d04e: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0050d052: ADD ESP,0x4
// 0050d055: PUSH EBX
// 0050d056: CALL engine_matrix.c_interpolatedSin_FUN_0050c5c0
//   XREF to: 0050c5c0 (UNCONDITIONAL_CALL)
// 0050d05b: ADD ESP,0x4
// 0050d05e: PUSH EBX
// 0050d05f: MOV EBP,EAX
// 0050d061: CALL engine_matrix.c_interpolatedCos_FUN_0050c600
//   XREF to: 0050c600 (UNCONDITIONAL_CALL)
// 0050d066: ADD ESP,0x4
// 0050d069: PUSH ESI
// 0050d06a: MOV EBX,EAX
// 0050d06c: CALL engine_matrix.c_interpolatedSin_FUN_0050c5c0
//   XREF to: 0050c5c0 (UNCONDITIONAL_CALL)
// 0050d071: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0050d075: ADD ESP,0x4
// 0050d078: PUSH ESI
// 0050d079: CALL engine_matrix.c_interpolatedCos_FUN_0050c600
//   XREF to: 0050c600 (UNCONDITIONAL_CALL)
// 0050d07e: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0050d082: ADD ESP,0x4
// 0050d085: MOV EAX,EBX
// 0050d087: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 0050d08b: IMUL EDX
// 0050d08d: SHRD EAX,EDX,0x10
// 0050d091: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 0050d095: MOV ECX,EAX
// 0050d097: MOV EAX,EBP
// 0050d099: IMUL EDX
// 0050d09b: SHRD EAX,EDX,0x10
// 0050d09f: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 0050d0a3: IMUL EDX
// 0050d0a5: SHRD EAX,EDX,0x10
// 0050d0a9: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 0050d0ad: ADD ECX,EAX
// 0050d0af: NEG EDX
// 0050d0b1: MOV EAX,EBP
// 0050d0b3: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 0050d0b7: IMUL EDX
// 0050d0b9: SHRD EAX,EDX,0x10
// 0050d0bd: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 0050d0c1: MOV ECX,EAX
// 0050d0c3: MOV EAX,EBX
// 0050d0c5: IMUL EDX
// 0050d0c7: SHRD EAX,EDX,0x10
// 0050d0cb: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 0050d0cf: IMUL EDX
// 0050d0d1: SHRD EAX,EDX,0x10
// 0050d0d5: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 0050d0d9: ADD ECX,EAX
// 0050d0db: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (READ)
// 0050d0df: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0050d0e3: IMUL EDX
// 0050d0e5: SHRD EAX,EDX,0x10
// 0050d0e9: MOV ECX,EAX
// 0050d0eb: MOV EDX,EBP
// 0050d0ed: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (READ)
// 0050d0f1: IMUL EDX
// 0050d0f3: SHRD EAX,EDX,0x10
// 0050d0f7: MOV ESI,EAX
// 0050d0f9: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (READ)
// 0050d0fd: MOV EDX,EBX
// 0050d0ff: IMUL EDX
// 0050d101: SHRD EAX,EDX,0x10
// 0050d105: MOV EDI,EAX
// 0050d107: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 0050d10b: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 0050d10f: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0050d113: NEG EAX
// 0050d115: NEG EDX
// 0050d117: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0050d11b: MOV EAX,EBX
// 0050d11d: IMUL EDX
// 0050d11f: SHRD EAX,EDX,0x10
// 0050d123: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 0050d127: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x40] (DATA)
// 0050d12a: MOV EAX,EBP
// 0050d12c: IMUL EDX
// 0050d12e: SHRD EAX,EDX,0x10
// 0050d132: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 0050d136: IMUL EDX
// 0050d138: SHRD EAX,EDX,0x10
// 0050d13c: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0050d13f: ADD EDX,EAX
// 0050d141: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 0050d145: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0050d149: MOV EDX,EBP
// 0050d14b: IMUL EDX
// 0050d14d: SHRD EAX,EDX,0x10
// 0050d151: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 0050d155: MOV EBP,EAX
// 0050d157: MOV EAX,EBX
// 0050d159: IMUL EDX
// 0050d15b: SHRD EAX,EDX,0x10
// 0050d15f: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 0050d163: IMUL EDX
// 0050d165: SHRD EAX,EDX,0x10
// 0050d169: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 0050d16d: ADD EBP,EAX
// 0050d16f: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (READ)
// 0050d173: IMUL EDX
// 0050d175: SHRD EAX,EDX,0x10
// 0050d179: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 0050d17d: MOV EBX,EAX
// 0050d17f: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 0050d183: IMUL EDX
// 0050d185: SHRD EAX,EDX,0x10
// 0050d189: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 0050d18d: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x40] (DATA)
// 0050d190: MOV EAX,ESI
// 0050d192: IMUL EDX
// 0050d194: SHRD EAX,EDX,0x10
// 0050d198: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0050d19b: ADD EDX,EAX
// 0050d19d: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 0050d1a1: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x40] (DATA)
// 0050d1a4: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 0050d1a8: IMUL EDX
// 0050d1aa: SHRD EAX,EDX,0x10
// 0050d1ae: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0050d1b1: ADD EDX,EAX
// 0050d1b3: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 0050d1b7: MOV dword ptr [0x02d052b8],EDX
//   XREF to: 02d052b8 (WRITE)
// 0050d1bd: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 0050d1c1: IMUL EDX
// 0050d1c3: SHRD EAX,EDX,0x10
// 0050d1c7: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 0050d1cb: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x40] (DATA)
// 0050d1ce: MOV EAX,EDI
// 0050d1d0: IMUL EDX
// 0050d1d2: SHRD EAX,EDX,0x10
// 0050d1d6: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0050d1d9: ADD EDX,EAX
// 0050d1db: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x40] (DATA)
// 0050d1de: MOV EAX,EBP
// 0050d1e0: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 0050d1e4: IMUL EDX
// 0050d1e6: SHRD EAX,EDX,0x10
// 0050d1ea: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0050d1ed: ADD EDX,EAX
// 0050d1ef: MOV dword ptr [0x02d052bc],EDX
//   XREF to: 02d052bc (WRITE)
// 0050d1f5: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 0050d1f9: MOV EAX,ECX
// 0050d1fb: IMUL EDX
// 0050d1fd: SHRD EAX,EDX,0x10
// 0050d201: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 0050d205: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x40] (DATA)
// 0050d208: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (READ)
// 0050d20c: IMUL EDX
// 0050d20e: SHRD EAX,EDX,0x10
// 0050d212: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0050d215: ADD EDX,EAX
// 0050d217: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x40] (DATA)
// 0050d21a: MOV EAX,EBX
// 0050d21c: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 0050d220: IMUL EDX
// 0050d222: SHRD EAX,EDX,0x10
// 0050d226: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0050d229: ADD EDX,EAX
// 0050d22b: MOV dword ptr [0x02d052c0],EDX
//   XREF to: 02d052c0 (WRITE)
// 0050d231: MOV EDX,dword ptr [0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d237: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 0050d23b: MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5a4]
//   XREF to: 02f0d5a4 (DATA)
// 0050d242: IMUL EDX
// 0050d244: SHRD EAX,EDX,0x10
// 0050d248: MOV EDX,dword ptr [0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d24e: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x40] (DATA)
// 0050d251: MOV EAX,ESI
// 0050d253: MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5cc]
//   XREF to: 02f0d5cc (DATA)
// 0050d25a: IMUL EDX
// 0050d25c: SHRD EAX,EDX,0x10
// 0050d260: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0050d263: ADD EDX,EAX
// 0050d265: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x40] (DATA)
// 0050d268: MOV EDX,dword ptr [0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d26e: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 0050d272: MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5f4]
//   XREF to: 02f0d5f4 (DATA)
// 0050d279: IMUL EDX
// 0050d27b: SHRD EAX,EDX,0x10
// 0050d27f: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0050d282: ADD EDX,EAX
// 0050d284: MOV dword ptr [0x02d052dc],EDX
//   XREF to: 02d052dc (WRITE)
// 0050d28a: MOV EDX,dword ptr [0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d290: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 0050d294: MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5a4]
//   XREF to: 02f0d5a4 (DATA)
// 0050d29b: IMUL EDX
// 0050d29d: SHRD EAX,EDX,0x10
// 0050d2a1: MOV EDX,dword ptr [0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d2a7: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x40] (DATA)
// 0050d2aa: MOV EAX,EDI
// 0050d2ac: MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5cc]
//   XREF to: 02f0d5cc (DATA)
// 0050d2b3: IMUL EDX
// 0050d2b5: SHRD EAX,EDX,0x10
// 0050d2b9: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0050d2bc: ADD EDX,EAX
// 0050d2be: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x40] (DATA)
// 0050d2c1: MOV EDX,dword ptr [0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d2c7: MOV EAX,EBP
// 0050d2c9: MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5f4]
//   XREF to: 02f0d5f4 (DATA)
// 0050d2d0: IMUL EDX
// 0050d2d2: SHRD EAX,EDX,0x10
// 0050d2d6: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0050d2d9: ADD EDX,EAX
// 0050d2db: MOV dword ptr [0x02d052e0],EDX
//   XREF to: 02d052e0 (WRITE)
// 0050d2e1: MOV EDX,dword ptr [0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d2e7: MOV EAX,ECX
// 0050d2e9: MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5a4]
//   XREF to: 02f0d5a4 (DATA)
// 0050d2f0: IMUL EDX
// 0050d2f2: SHRD EAX,EDX,0x10
// 0050d2f6: MOV EDX,dword ptr [0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d2fc: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x40] (DATA)
// 0050d2ff: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (READ)
// 0050d303: MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5cc]
//   XREF to: 02f0d5cc (DATA)
// 0050d30a: IMUL EDX
// 0050d30c: SHRD EAX,EDX,0x10
// 0050d310: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0050d313: ADD EDX,EAX
// 0050d315: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x40] (DATA)
// 0050d318: MOV EDX,dword ptr [0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d31e: MOV EAX,EBX
// 0050d320: MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5f4]
//   XREF to: 02f0d5f4 (DATA)
// 0050d327: IMUL EDX
// 0050d329: SHRD EAX,EDX,0x10
// 0050d32d: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0050d330: ADD EDX,EAX
// 0050d332: MOV dword ptr [0x02d052e4],EDX
//   XREF to: 02d052e4 (WRITE)
// 0050d338: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d33d: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 0050d341: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d3c4]
//   XREF to: 02f0d3c4 (DATA)
// 0050d348: IMUL EDX
// 0050d34a: SHRD EAX,EDX,0x10
// 0050d34e: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x40] (DATA)
// 0050d351: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d356: MOV EDX,ESI
// 0050d358: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d43c]
//   XREF to: 02f0d43c (DATA)
// 0050d35f: IMUL EDX
// 0050d361: SHRD EAX,EDX,0x10
// 0050d365: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0050d368: ADD EDX,EAX
// 0050d36a: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d36f: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x40] (DATA)
// 0050d372: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 0050d376: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d4b4]
//   XREF to: 02f0d4b4 (DATA)
// 0050d37d: IMUL EDX
// 0050d37f: SHRD EAX,EDX,0x10
// 0050d383: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0050d386: ADD EDX,EAX
// 0050d388: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d38d: MOV dword ptr [0x02d052e8],EDX
//   XREF to: 02d052e8 (WRITE)
// 0050d393: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 0050d397: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d3ec]
//   XREF to: 02f0d3ec (DATA)
// 0050d39e: IMUL EDX
// 0050d3a0: SHRD EAX,EDX,0x10
// 0050d3a4: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x40] (DATA)
// 0050d3a7: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d3ac: MOV EDX,ESI
// 0050d3ae: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d464]
//   XREF to: 02f0d464 (DATA)
// 0050d3b5: IMUL EDX
// 0050d3b7: SHRD EAX,EDX,0x10
// 0050d3bb: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0050d3be: ADD EDX,EAX
// 0050d3c0: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d3c5: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x40] (DATA)
// 0050d3c8: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 0050d3cc: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d4dc]
//   XREF to: 02f0d4dc (DATA)
// 0050d3d3: IMUL EDX
// 0050d3d5: SHRD EAX,EDX,0x10
// 0050d3d9: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0050d3dc: ADD EDX,EAX
// 0050d3de: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d3e3: MOV dword ptr [0x02d052ec],EDX
//   XREF to: 02d052ec (WRITE)
// 0050d3e9: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 0050d3ed: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d414]
//   XREF to: 02f0d414 (DATA)
// 0050d3f4: IMUL EDX
// 0050d3f6: SHRD EAX,EDX,0x10
// 0050d3fa: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x40] (DATA)
// 0050d3fd: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d402: MOV EDX,ESI
// 0050d404: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d48c]
//   XREF to: 02f0d48c (DATA)
// 0050d40b: MOV ESI,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0050d40e: IMUL EDX
// 0050d410: SHRD EAX,EDX,0x10
// 0050d414: ADD ESI,EAX
// 0050d416: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d41b: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 0050d41f: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d504]
//   XREF to: 02f0d504 (DATA)
// 0050d426: IMUL EDX
// 0050d428: SHRD EAX,EDX,0x10
// 0050d42c: ADD ESI,EAX
// 0050d42e: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d433: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 0050d437: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d3c4]
//   XREF to: 02f0d3c4 (DATA)
// 0050d43e: MOV dword ptr [0x02d052f0],ESI
//   XREF to: 02d052f0 (WRITE)
// 0050d444: IMUL EDX
// 0050d446: SHRD EAX,EDX,0x10
// 0050d44a: MOV ESI,EAX
// 0050d44c: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d451: MOV EDX,EDI
// 0050d453: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d43c]
//   XREF to: 02f0d43c (DATA)
// 0050d45a: IMUL EDX
// 0050d45c: SHRD EAX,EDX,0x10
// 0050d460: ADD ESI,EAX
// 0050d462: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d467: MOV EDX,EBP
// 0050d469: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d4b4]
//   XREF to: 02f0d4b4 (DATA)
// 0050d470: IMUL EDX
// 0050d472: SHRD EAX,EDX,0x10
// 0050d476: ADD ESI,EAX
// 0050d478: MOV dword ptr [0x02d052f4],ESI
//   XREF to: 02d052f4 (WRITE)
// 0050d47e: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d483: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 0050d487: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d3ec]
//   XREF to: 02f0d3ec (DATA)
// 0050d48e: IMUL EDX
// 0050d490: SHRD EAX,EDX,0x10
// 0050d494: MOV ESI,EAX
// 0050d496: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d49b: MOV EDX,EDI
// 0050d49d: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d464]
//   XREF to: 02f0d464 (DATA)
// 0050d4a4: IMUL EDX
// 0050d4a6: SHRD EAX,EDX,0x10
// 0050d4aa: ADD ESI,EAX
// 0050d4ac: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d4b1: MOV EDX,EBP
// 0050d4b3: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d4dc]
//   XREF to: 02f0d4dc (DATA)
// 0050d4ba: IMUL EDX
// 0050d4bc: SHRD EAX,EDX,0x10
// 0050d4c0: ADD ESI,EAX
// 0050d4c2: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d4c7: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 0050d4cb: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d414]
//   XREF to: 02f0d414 (DATA)
// 0050d4d2: MOV dword ptr [0x02d052f8],ESI
//   XREF to: 02d052f8 (WRITE)
// 0050d4d8: IMUL EDX
// 0050d4da: SHRD EAX,EDX,0x10
// 0050d4de: MOV ESI,EAX
// 0050d4e0: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d4e5: MOV EDX,EDI
// 0050d4e7: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d48c]
//   XREF to: 02f0d48c (DATA)
// 0050d4ee: IMUL EDX
// 0050d4f0: SHRD EAX,EDX,0x10
// 0050d4f4: ADD ESI,EAX
// 0050d4f6: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d4fb: MOV EDX,EBP
// 0050d4fd: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d504]
//   XREF to: 02f0d504 (DATA)
// 0050d504: IMUL EDX
// 0050d506: SHRD EAX,EDX,0x10
// 0050d50a: ADD ESI,EAX
// 0050d50c: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d511: MOV EDX,ECX
// 0050d513: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d3c4]
//   XREF to: 02f0d3c4 (DATA)
// 0050d51a: MOV dword ptr [0x02d052fc],ESI
//   XREF to: 02d052fc (WRITE)
// 0050d520: IMUL EDX
// 0050d522: SHRD EAX,EDX,0x10
// 0050d526: MOV ESI,EAX
// 0050d528: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d52d: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (READ)
// 0050d531: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d43c]
//   XREF to: 02f0d43c (DATA)
// 0050d538: IMUL EDX
// 0050d53a: SHRD EAX,EDX,0x10
// 0050d53e: ADD ESI,EAX
// 0050d540: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d545: MOV EDX,EBX
// 0050d547: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d4b4]
//   XREF to: 02f0d4b4 (DATA)
// 0050d54e: IMUL EDX
// 0050d550: SHRD EAX,EDX,0x10
// 0050d554: ADD ESI,EAX
// 0050d556: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d55b: MOV EDX,ECX
// 0050d55d: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d3ec]
//   XREF to: 02f0d3ec (DATA)
// 0050d564: MOV dword ptr [0x02d05300],ESI
//   XREF to: 02d05300 (WRITE)
// 0050d56a: IMUL EDX
// 0050d56c: SHRD EAX,EDX,0x10
// 0050d570: MOV ESI,EAX
// 0050d572: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d577: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (READ)
// 0050d57b: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d464]
//   XREF to: 02f0d464 (DATA)
// 0050d582: IMUL EDX
// 0050d584: SHRD EAX,EDX,0x10
// 0050d588: ADD ESI,EAX
// 0050d58a: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d58f: MOV EDX,EBX
// 0050d591: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d4dc]
//   XREF to: 02f0d4dc (DATA)
// 0050d598: IMUL EDX
// 0050d59a: SHRD EAX,EDX,0x10
// 0050d59e: ADD ESI,EAX
// 0050d5a0: MOV dword ptr [0x02d05304],ESI
//   XREF to: 02d05304 (WRITE)
// 0050d5a6: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d5ab: MOV EDX,ECX
// 0050d5ad: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d414]
//   XREF to: 02f0d414 (DATA)
// 0050d5b4: IMUL EDX
// 0050d5b6: SHRD EAX,EDX,0x10
// 0050d5ba: MOV ECX,EAX
// 0050d5bc: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d5c1: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (READ)
// 0050d5c5: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d48c]
//   XREF to: 02f0d48c (DATA)
// 0050d5cc: IMUL EDX
// 0050d5ce: SHRD EAX,EDX,0x10
// 0050d5d2: ADD ECX,EAX
// 0050d5d4: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050d5d9: MOV EDX,EBX
// 0050d5db: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d504]
//   XREF to: 02f0d504 (DATA)
// 0050d5e2: IMUL EDX
// 0050d5e4: SHRD EAX,EDX,0x10
// 0050d5e8: ADD ECX,EAX
// 0050d5ea: MOV dword ptr [0x02d05308],ECX
//   XREF to: 02d05308 (WRITE)
// 0050d5f0: JMP 0x0050d01d
//   XREF to: 0050d01d (UNCONDITIONAL_JUMP)
// 0050d5f5: MOV EBX,0x635a4d
//   Label: LAB_0050d5f5
//   XREF to: 00635a4d (PARAM)
// 0050d5fa: MOV ESI,0x31f
// 0050d5ff: PUSH 0x635a60
//   XREF to: 00635a60 (DATA)
// 0050d604: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0050d60a: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0050d610: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0050d615: ADD ESP,0x4
// 0050d618: ADD ESP,0x30
// 0050d61b: POP EBP
// 0050d61c: POP EDI
// 0050d61d: POP ESI
// 0050d61e: POP EBX
// 0050d61f: RET

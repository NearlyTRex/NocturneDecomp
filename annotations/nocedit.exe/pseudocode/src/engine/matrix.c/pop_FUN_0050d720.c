// Name: engine_matrix.c_pop_FUN_0050d720
// Address: 0050d720
// Address Range: [[0050d720, 0050d828]]
// Convention: __cdecl
// Signature: void engine_matrix.c_pop_FUN_0050d720(void)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 (0048c640) at 0048c640 [UNCONDITIONAL_JUMP]
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 00460720 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90 (004a1e90) at 004a1f28 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_matrix_c_00635a95
//   TerminatedCString s_Matrix_unbalance2_00635aa8
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

#include "nocturne.h"

void __cdecl engine_matrix_c_pop_FUN_0050d720(void)

{
  g_MatrixStackIndex = g_MatrixStackIndex + -1;
  if (g_MatrixStackIndex < 0) {
    g_CurrentFilename = "..\\engine\\matrix.c";
    g_CurrentLineNumber = 0x358;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Matrix unbalance2");
  }
  g_TransformMatrix.m[0].x = g_MatrixStack_M00[g_MatrixStackIndex];
  g_TransformMatrix.m[0].y = g_MatrixStack_M01[g_MatrixStackIndex];
  g_TransformMatrix.m[0].z = g_MatrixStack_M02[g_MatrixStackIndex];
  g_TransformMatrix.m[1].x = g_MatrixStack_M10[g_MatrixStackIndex];
  g_TransformMatrix.m[1].y = g_MatrixStack_M11[g_MatrixStackIndex];
  g_TransformMatrix.m[1].z = g_MatrixStack_M12[g_MatrixStackIndex];
  g_TransformMatrix.m[2].x = g_MatrixStack_M20[g_MatrixStackIndex];
  g_TransformMatrix.m[2].y = g_MatrixStack_M21[g_MatrixStackIndex];
  g_TransformMatrix.m[2].z = g_MatrixStack_M22[g_MatrixStackIndex];
  g_RelativeX = g_MatrixStack_RelX[g_MatrixStackIndex];
  g_RelativeY = g_MatrixStack_RelY[g_MatrixStackIndex];
  g_RelativeZ = g_MatrixStack_RelZ[g_MatrixStackIndex];
  g_LightDirectionX = g_MatrixStack_Unk1[g_MatrixStackIndex];
  g_LightDirectionY = g_MatrixStack_Unk2[g_MatrixStackIndex];
  g_LightDirectionZ = g_MatrixStack_Unk3[g_MatrixStackIndex];
  return;
}


// Assembly code:
// 0050d720: MOV EDX,dword ptr [0x02f0d3c0]
//   Label: engine_matrix.c_pop_FUN_0050d720
//   XREF to: 02f0d3c0 (READ)
// 0050d726: DEC EDX
// 0050d727: MOV dword ptr [0x02f0d3c0],EDX
//   XREF to: 02f0d3c0 (WRITE)
// 0050d72d: TEST EDX,EDX
// 0050d72f: JL 0x0050d7fd
//   XREF to: 0050d7fd (CONDITIONAL_JUMP)
// 0050d735: MOV EAX,[0x02f0d3c0]
//   Label: LAB_0050d735
//   XREF to: 02f0d3c0 (READ)
// 0050d73a: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d3c4]
//   XREF to: 02f0d3c4 (DATA)
// 0050d741: MOV dword ptr [0x02d052e8],EDX
//   XREF to: 02d052e8 (WRITE)
// 0050d747: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d3ec]
//   XREF to: 02f0d3ec (DATA)
// 0050d74e: MOV dword ptr [0x02d052ec],EDX
//   XREF to: 02d052ec (WRITE)
// 0050d754: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d414]
//   XREF to: 02f0d414 (DATA)
// 0050d75b: MOV dword ptr [0x02d052f0],EDX
//   XREF to: 02d052f0 (WRITE)
// 0050d761: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d43c]
//   XREF to: 02f0d43c (DATA)
// 0050d768: MOV dword ptr [0x02d052f4],EDX
//   XREF to: 02d052f4 (WRITE)
// 0050d76e: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d464]
//   XREF to: 02f0d464 (DATA)
// 0050d775: MOV dword ptr [0x02d052f8],EDX
//   XREF to: 02d052f8 (WRITE)
// 0050d77b: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d48c]
//   XREF to: 02f0d48c (DATA)
// 0050d782: MOV dword ptr [0x02d052fc],EDX
//   XREF to: 02d052fc (WRITE)
// 0050d788: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d4b4]
//   XREF to: 02f0d4b4 (DATA)
// 0050d78f: MOV dword ptr [0x02d05300],EDX
//   XREF to: 02d05300 (WRITE)
// 0050d795: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d4dc]
//   XREF to: 02f0d4dc (DATA)
// 0050d79c: MOV dword ptr [0x02d05304],EDX
//   XREF to: 02d05304 (WRITE)
// 0050d7a2: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d504]
//   XREF to: 02f0d504 (DATA)
// 0050d7a9: MOV dword ptr [0x02d05308],EDX
//   XREF to: 02d05308 (WRITE)
// 0050d7af: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d52c]
//   XREF to: 02f0d52c (DATA)
// 0050d7b6: MOV dword ptr [0x02d052b8],EDX
//   XREF to: 02d052b8 (WRITE)
// 0050d7bc: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d554]
//   XREF to: 02f0d554 (DATA)
// 0050d7c3: MOV dword ptr [0x02d052bc],EDX
//   XREF to: 02d052bc (WRITE)
// 0050d7c9: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d57c]
//   XREF to: 02f0d57c (DATA)
// 0050d7d0: MOV dword ptr [0x02d052c0],EDX
//   XREF to: 02d052c0 (WRITE)
// 0050d7d6: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d5a4]
//   XREF to: 02f0d5a4 (DATA)
// 0050d7dd: MOV dword ptr [0x02d052dc],EDX
//   XREF to: 02d052dc (WRITE)
// 0050d7e3: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d5cc]
//   XREF to: 02f0d5cc (DATA)
// 0050d7ea: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d5f4]
//   XREF to: 02f0d5f4 (DATA)
// 0050d7f1: MOV dword ptr [0x02d052e0],EDX
//   XREF to: 02d052e0 (WRITE)
// 0050d7f7: MOV [0x02d052e4],EAX
//   XREF to: 02d052e4 (WRITE)
// 0050d7fc: RET
// 0050d7fd: PUSH ESI
//   Label: LAB_0050d7fd
// 0050d7fe: PUSH EBX
// 0050d7ff: MOV EBX,0x635a95
//   XREF to: 00635a95 (PARAM)
// 0050d804: MOV ESI,0x358
// 0050d809: PUSH 0x635aa8
//   XREF to: 00635aa8 (DATA)
// 0050d80e: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0050d814: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0050d81a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0050d81f: ADD ESP,0x4
// 0050d822: POP EBX
// 0050d823: POP ESI
// 0050d824: JMP 0x0050d735
//   XREF to: 0050d735 (UNCONDITIONAL_JUMP)

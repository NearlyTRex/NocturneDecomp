// Name: engine_matrix.c_matrixPush_FUN_0050d620
// Address: 0050d620
// Address Range: [[0050d620, 0050d71e]]
// Convention: __cdecl
// Signature: void engine_matrix.c_matrixPush_FUN_0050d620(void)
// Cross-references:
//   core_mimic.cpp_CMimic_FUN_005205f0 (005205f0) at 0052069f [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051f130 (0051f130) at 0051f133 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_matrixPush_FUN_0050d620 (0048c630) at 0048c630 [UNCONDITIONAL_JUMP]
// Globals:
//   TerminatedCString s_engine_matrix_c_00635a71
//   TerminatedCString s_Matrix_unbalance_00635a84
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

void __cdecl engine_matrix_c_matrixPush_FUN_0050d620(void)

{
  g_MatrixStack_RelX[g_MatrixStackIndex] = g_RelativeX;
  g_MatrixStack_RelY[g_MatrixStackIndex] = g_RelativeY;
  g_MatrixStack_RelZ[g_MatrixStackIndex] = g_RelativeZ;
  g_MatrixStack_Unk1[g_MatrixStackIndex] = g_LightDirectionX;
  g_MatrixStack_Unk2[g_MatrixStackIndex] = g_LightDirectionY;
  g_MatrixStack_Unk3[g_MatrixStackIndex] = g_LightDirectionZ;
  g_MatrixStack_M00[g_MatrixStackIndex] = g_TransformMatrix.m[0].x;
  g_MatrixStack_M01[g_MatrixStackIndex] = g_TransformMatrix.m[0].y;
  g_MatrixStack_M02[g_MatrixStackIndex] = g_TransformMatrix.m[0].z;
  g_MatrixStack_M10[g_MatrixStackIndex] = g_TransformMatrix.m[1].x;
  g_MatrixStack_M11[g_MatrixStackIndex] = g_TransformMatrix.m[1].y;
  g_MatrixStack_M12[g_MatrixStackIndex] = g_TransformMatrix.m[1].z;
  g_MatrixStack_M20[g_MatrixStackIndex] = g_TransformMatrix.m[2].x;
  g_MatrixStack_M21[g_MatrixStackIndex] = g_TransformMatrix.m[2].y;
  g_MatrixStack_M22[g_MatrixStackIndex] = g_TransformMatrix.m[2].z;
  g_MatrixStackIndex = g_MatrixStackIndex + 1;
  if (g_MatrixStackIndex < 10) {
    return;
  }
  g_CurrentFilename = "..\\engine\\matrix.c";
  g_CurrentLineNumber = 0x34b;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Matrix unbalance");
  return;
}


// Assembly code:
// 0050d620: MOV EAX,[0x02f0d3c0]
//   Label: engine_matrix.c_matrixPush_FUN_0050d620
//   XREF to: 02f0d3c0 (READ)
// 0050d625: MOV EDX,dword ptr [0x02d052b8]
//   XREF to: 02d052b8 (READ)
// 0050d62b: MOV dword ptr [EAX*0x4 + 0x2f0d52c],EDX
//   XREF to: 02f0d52c (DATA)
// 0050d632: MOV EDX,dword ptr [0x02d052bc]
//   XREF to: 02d052bc (READ)
// 0050d638: MOV dword ptr [EAX*0x4 + 0x2f0d554],EDX
//   XREF to: 02f0d554 (DATA)
// 0050d63f: MOV EDX,dword ptr [0x02d052c0]
//   XREF to: 02d052c0 (READ)
// 0050d645: MOV dword ptr [EAX*0x4 + 0x2f0d57c],EDX
//   XREF to: 02f0d57c (DATA)
// 0050d64c: MOV EDX,dword ptr [0x02d052dc]
//   XREF to: 02d052dc (READ)
// 0050d652: MOV dword ptr [EAX*0x4 + 0x2f0d5a4],EDX
//   XREF to: 02f0d5a4 (DATA)
// 0050d659: MOV EDX,dword ptr [0x02d052e0]
//   XREF to: 02d052e0 (READ)
// 0050d65f: MOV dword ptr [EAX*0x4 + 0x2f0d5cc],EDX
//   XREF to: 02f0d5cc (DATA)
// 0050d666: MOV EDX,dword ptr [0x02d052e4]
//   XREF to: 02d052e4 (READ)
// 0050d66c: MOV dword ptr [EAX*0x4 + 0x2f0d5f4],EDX
//   XREF to: 02f0d5f4 (DATA)
// 0050d673: MOV EDX,dword ptr [0x02d052e8]
//   XREF to: 02d052e8 (READ)
// 0050d679: MOV dword ptr [EAX*0x4 + 0x2f0d3c4],EDX
//   XREF to: 02f0d3c4 (DATA)
// 0050d680: MOV EDX,dword ptr [0x02d052ec]
//   XREF to: 02d052ec (READ)
// 0050d686: MOV dword ptr [EAX*0x4 + 0x2f0d3ec],EDX
//   XREF to: 02f0d3ec (DATA)
// 0050d68d: MOV EDX,dword ptr [0x02d052f0]
//   XREF to: 02d052f0 (READ)
// 0050d693: MOV dword ptr [EAX*0x4 + 0x2f0d414],EDX
//   XREF to: 02f0d414 (DATA)
// 0050d69a: MOV EDX,dword ptr [0x02d052f4]
//   XREF to: 02d052f4 (READ)
// 0050d6a0: MOV dword ptr [EAX*0x4 + 0x2f0d43c],EDX
//   XREF to: 02f0d43c (DATA)
// 0050d6a7: MOV EDX,dword ptr [0x02d052f8]
//   XREF to: 02d052f8 (READ)
// 0050d6ad: MOV dword ptr [EAX*0x4 + 0x2f0d464],EDX
//   XREF to: 02f0d464 (DATA)
// 0050d6b4: MOV EDX,dword ptr [0x02d052fc]
//   XREF to: 02d052fc (READ)
// 0050d6ba: MOV dword ptr [EAX*0x4 + 0x2f0d48c],EDX
//   XREF to: 02f0d48c (DATA)
// 0050d6c1: MOV EDX,dword ptr [0x02d05300]
//   XREF to: 02d05300 (READ)
// 0050d6c7: MOV dword ptr [EAX*0x4 + 0x2f0d4b4],EDX
//   XREF to: 02f0d4b4 (DATA)
// 0050d6ce: MOV EDX,dword ptr [0x02d05304]
//   XREF to: 02d05304 (READ)
// 0050d6d4: MOV dword ptr [EAX*0x4 + 0x2f0d4dc],EDX
//   XREF to: 02f0d4dc (DATA)
// 0050d6db: MOV EDX,dword ptr [0x02d05308]
//   XREF to: 02d05308 (READ)
// 0050d6e1: MOV dword ptr [EAX*0x4 + 0x2f0d504],EDX
//   XREF to: 02f0d504 (DATA)
// 0050d6e8: LEA EDX,[EAX + 0x1]
// 0050d6eb: MOV dword ptr [0x02f0d3c0],EDX
//   XREF to: 02f0d3c0 (WRITE)
// 0050d6f1: CMP EDX,0x9
// 0050d6f4: JG 0x0050d6f7
//   XREF to: 0050d6f7 (CONDITIONAL_JUMP)
// 0050d6f6: RET
// 0050d6f7: PUSH ESI
//   Label: LAB_0050d6f7
// 0050d6f8: PUSH EBX
// 0050d6f9: MOV EBX,0x635a71
//   XREF to: 00635a71 (PARAM)
// 0050d6fe: MOV ESI,0x34b
// 0050d703: PUSH 0x635a84
//   XREF to: 00635a84 (DATA)
// 0050d708: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0050d70e: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0050d714: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0050d719: ADD ESP,0x4
// 0050d71c: POP EBX
// 0050d71d: POP ESI
// 0050d71e: RET

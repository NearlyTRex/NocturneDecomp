// Name: engine_matrix.c_popMatrixRelativeOffset_FUN_0050e6f0
// Address: 0050e6f0
// Address Range: [[0050e6f0, 0050e755]]
// Convention: __cdecl
// Signature: void engine_matrix.c_popMatrixRelativeOffset_FUN_0050e6f0(void)
// Globals:
//   TerminatedCString s_engine_matrix_c_00635b98
//   TerminatedCString s_Matrix_unbalance4_00635bab
//   int g_RelativeX
//   int g_RelativeY
//   int g_RelativeZ
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_MatrixStackIndex
//   int[10] g_MatrixStack_RelX
//   int[10] g_MatrixStack_RelY
//   int[10] g_MatrixStack_RelZ
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl engine_matrix_c_popMatrixRelativeOffset_FUN_0050e6f0(void)

{
  g_MatrixStackIndex = g_MatrixStackIndex + -1;
  if (g_MatrixStackIndex < 0) {
    g_CurrentFilename = "..\\engine\\matrix.c";
    g_CurrentLineNumber = 0x5d9;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Matrix unbalance4");
  }
  g_RelativeX = g_MatrixStack_RelX[g_MatrixStackIndex];
  g_RelativeY = g_MatrixStack_RelY[g_MatrixStackIndex];
  g_RelativeZ = g_MatrixStack_RelZ[g_MatrixStackIndex];
  return;
}


// Assembly code:
// 0050e6f0: MOV EDX,dword ptr [0x02f0d3c0]
//   Label: engine_matrix.c_popMatrixRelativeOffset_FUN_0050e6f0
//   XREF to: 02f0d3c0 (READ)
// 0050e6f6: DEC EDX
// 0050e6f7: MOV dword ptr [0x02f0d3c0],EDX
//   XREF to: 02f0d3c0 (WRITE)
// 0050e6fd: TEST EDX,EDX
// 0050e6ff: JL 0x0050e72d
//   XREF to: 0050e72d (CONDITIONAL_JUMP)
// 0050e701: MOV EAX,[0x02f0d3c0]
//   Label: LAB_0050e701
//   XREF to: 02f0d3c0 (READ)
// 0050e706: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d52c]
//   XREF to: 02f0d52c (DATA)
// 0050e70d: MOV dword ptr [0x02d052b8],EDX
//   XREF to: 02d052b8 (WRITE)
// 0050e713: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d554]
//   XREF to: 02f0d554 (DATA)
// 0050e71a: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d57c]
//   XREF to: 02f0d57c (DATA)
// 0050e721: MOV dword ptr [0x02d052bc],EDX
//   XREF to: 02d052bc (WRITE)
// 0050e727: MOV [0x02d052c0],EAX
//   XREF to: 02d052c0 (WRITE)
// 0050e72c: RET
// 0050e72d: PUSH ESI
//   Label: LAB_0050e72d
// 0050e72e: PUSH EBX
// 0050e72f: MOV EBX,0x635b98
//   XREF to: 00635b98 (DATA)
// 0050e734: MOV ESI,0x5d9
// 0050e739: PUSH 0x635bab
//   XREF to: 00635bab (DATA)
// 0050e73e: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0050e744: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0050e74a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0050e74f: ADD ESP,0x4
// 0050e752: POP EBX
// 0050e753: POP ESI
// 0050e754: JMP 0x0050e701
//   XREF to: 0050e701 (UNCONDITIONAL_JUMP)

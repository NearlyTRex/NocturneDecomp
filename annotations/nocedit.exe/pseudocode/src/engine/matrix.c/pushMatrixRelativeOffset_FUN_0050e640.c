// Name: engine_matrix.c_pushMatrixRelativeOffset_FUN_0050e640
// Address: 0050e640
// Address Range: [[0050e640, 0050e6e0]]
// Convention: __cdecl
// Signature: void engine_matrix.c_pushMatrixRelativeOffset_FUN_0050e640(int offset_x, int offset_y, int offset_z)
// Globals:
//   TerminatedCString s_engine_matrix_c_00635b73
//   TerminatedCString s_Matrix_unbalance3_00635b86
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

void __cdecl
engine_matrix_c_pushMatrixRelativeOffset_FUN_0050e640(int offset_x,int offset_y,int offset_z)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = g_MatrixStackIndex;
  iVar1 = g_RelativeY;
  g_MatrixStack_RelX[g_MatrixStackIndex] = g_RelativeX;
  iVar2 = g_RelativeZ;
  g_MatrixStack_RelY[iVar3] = g_RelativeY;
  g_MatrixStack_RelZ[iVar3] = g_RelativeZ;
  g_MatrixStackIndex = g_MatrixStackIndex + 1;
  g_RelativeX = g_RelativeX - offset_x;
  g_RelativeY = iVar1 - offset_y;
  g_RelativeZ = iVar2 - offset_z;
  if (g_MatrixStackIndex < 10) {
    return;
  }
  g_CurrentFilename = "..\\engine\\matrix.c";
  g_CurrentLineNumber = 0x5cc;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Matrix unbalance3");
  return;
}


// Assembly code:
// 0050e640: PUSH EBX
//   Label: engine_matrix.c_pushMatrixRelativeOffset_FUN_0050e640
// 0050e641: PUSH ESI
// 0050e642: PUSH EBP
// 0050e643: MOV EAX,[0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050e648: MOV EDX,dword ptr [0x02d052b8]
//   XREF to: 02d052b8 (READ)
// 0050e64e: MOV ECX,dword ptr [0x02d052bc]
//   XREF to: 02d052bc (READ)
// 0050e654: MOV dword ptr [EAX*0x4 + 0x2f0d52c],EDX
//   XREF to: 02f0d52c (DATA)
// 0050e65b: MOV EDX,dword ptr [0x02d052bc]
//   XREF to: 02d052bc (READ)
// 0050e661: MOV EBX,dword ptr [0x02d052c0]
//   XREF to: 02d052c0 (READ)
// 0050e667: MOV dword ptr [EAX*0x4 + 0x2f0d554],EDX
//   XREF to: 02f0d554 (DATA)
// 0050e66e: MOV EDX,dword ptr [0x02d052c0]
//   XREF to: 02d052c0 (READ)
// 0050e674: MOV ESI,dword ptr [0x02f0d3c0]
//   XREF to: 02f0d3c0 (READ)
// 0050e67a: MOV dword ptr [EAX*0x4 + 0x2f0d57c],EDX
//   XREF to: 02f0d57c (DATA)
// 0050e681: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0050e685: MOV EDX,dword ptr [0x02d052b8]
//   XREF to: 02d052b8 (READ)
// 0050e68b: INC ESI
// 0050e68c: SUB EDX,EAX
// 0050e68e: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0050e692: MOV dword ptr [0x02f0d3c0],ESI
//   XREF to: 02f0d3c0 (WRITE)
// 0050e698: SUB ECX,EAX
// 0050e69a: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0050e69e: MOV dword ptr [0x02d052b8],EDX
//   XREF to: 02d052b8 (WRITE)
// 0050e6a4: SUB EBX,EAX
// 0050e6a6: MOV dword ptr [0x02d052bc],ECX
//   XREF to: 02d052bc (WRITE)
// 0050e6ac: MOV dword ptr [0x02d052c0],EBX
//   XREF to: 02d052c0 (WRITE)
// 0050e6b2: CMP ESI,0x9
// 0050e6b5: JG 0x0050e6bb
//   XREF to: 0050e6bb (CONDITIONAL_JUMP)
// 0050e6b7: POP EBP
// 0050e6b8: POP ESI
// 0050e6b9: POP EBX
// 0050e6ba: RET
// 0050e6bb: MOV EBP,0x635b73
//   Label: LAB_0050e6bb
//   XREF to: 00635b73 (DATA)
// 0050e6c0: MOV EAX,0x5cc
// 0050e6c5: PUSH 0x635b86
//   XREF to: 00635b86 (DATA)
// 0050e6ca: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 0050e6d0: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0050e6d5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0050e6da: ADD ESP,0x4
// 0050e6dd: POP EBP
// 0050e6de: POP ESI
// 0050e6df: POP EBX
// 0050e6e0: RET

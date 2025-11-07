// Name: shape_meshlod.cpp_FUN_00515ca0
// Address: 00515ca0
// Address Range: [[00515ca0, 00515d05]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_00515ca0()
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_FUN_00517630 (00517630) at 00517fba [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_buildEdges_FUN_00515ba0 (00515ba0) at 00515c5d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Too_many_adj_faces_00637466
//   TerminatedCString s_shape_meshlod_cpp_0063747a
//   TerminatedCString s_Too_many_adj_faces_0063748f
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740

#include "nocturne.h"

void shape_meshlod_cpp_FUN_00515ca0(void)

{
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  
  if (*(int *)(in_stack_00000004 + 0x24) < 0x32) {
    *(undefined4 *)(in_stack_00000004 + 0x28 + *(int *)(in_stack_00000004 + 0x24) * 4) =
         in_stack_00000008;
    *(int *)(in_stack_00000004 + 0x24) = *(int *)(in_stack_00000004 + 0x24) + 1;
    return;
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Too many adj faces!");
  g_CurrentFilename = "..\\shape\\meshlod.cpp";
  g_CurrentLineNumber = 0x281;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Too many adj faces!");
  *(undefined4 *)(in_stack_00000004 + 0x28 + *(int *)(in_stack_00000004 + 0x24) * 4) =
       in_stack_00000010;
  *(int *)(in_stack_00000004 + 0x24) = *(int *)(in_stack_00000004 + 0x24) + 1;
  return;
}


// Assembly code:
// 00515ca0: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_00515ca0
// 00515ca1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00515ca5: CMP dword ptr [EBX + 0x24],0x32
// 00515ca9: JGE 0x00515cbb
//   XREF to: 00515cbb (CONDITIONAL_JUMP)
// 00515cab: MOV EAX,dword ptr [EBX + 0x24]
// 00515cae: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00515cb2: MOV dword ptr [EBX + EAX*0x4 + 0x28],EDX
// 00515cb6: INC dword ptr [EBX + 0x24]
// 00515cb9: POP EBX
// 00515cba: RET
// 00515cbb: PUSH EDI
//   Label: LAB_00515cbb
// 00515cbc: PUSH ESI
// 00515cbd: PUSH 0x637466
//   XREF to: 00637466 (DATA)
// 00515cc2: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00515cc8: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00515cc9: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00515cce: ADD ESP,0x8
// 00515cd1: MOV ESI,0x63747a
//   XREF to: 0063747a (DATA)
// 00515cd6: MOV EDI,0x281
// 00515cdb: PUSH 0x63748f
//   XREF to: 0063748f (DATA)
// 00515ce0: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 00515ce6: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00515cec: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00515cf1: ADD ESP,0x4
// 00515cf4: POP ESI
// 00515cf5: POP EDI
// 00515cf6: MOV EAX,dword ptr [EBX + 0x24]
// 00515cf9: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00515cfd: MOV dword ptr [EBX + EAX*0x4 + 0x28],EDX
// 00515d01: INC dword ptr [EBX + 0x24]
// 00515d04: POP EBX
// 00515d05: RET

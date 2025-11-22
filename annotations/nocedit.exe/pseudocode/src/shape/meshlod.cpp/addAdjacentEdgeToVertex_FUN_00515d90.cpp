// Name: shape_meshlod.cpp_addAdjacentEdgeToVertex_FUN_00515d90
// Address: 00515d90
// Address Range: [[00515d90, 00515df3]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_addAdjacentEdgeToVertex_FUN_00515d90(SLodVert * vertex_ptr, int edge_index)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_FUN_00517630 (00517630) at 005181bd [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0 (00515ec0) at 00515fe9 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Too_many_adj_edges_006374a3
//   TerminatedCString s_shape_meshlod_cpp_006374b7
//   TerminatedCString s_Too_many_adj_edges_006374cc
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_addAdjacentEdgeToVertex_FUN_00515d90(SLodVert *vertex_ptr,int edge_index)

{
  int in_stack_00000010;
  
  if (0x31 < vertex_ptr->adjacent_edge_count) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Too many adj edges!");
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x2c1;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many adj edges!");
  }
  vertex_ptr->adjacent_edge_indices[vertex_ptr->adjacent_edge_count] = in_stack_00000010;
  vertex_ptr->adjacent_edge_count = vertex_ptr->adjacent_edge_count + 1;
  return;
}


// Assembly code:
// 00515d90: PUSH EBX
//   Label: shape_meshlod.cpp_addAdjacentEdgeToVertex_FUN_00515d90
// 00515d91: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00515d95: CMP dword ptr [EBX + 0x3f8],0x32
// 00515d9c: JGE 0x00515db7
//   XREF to: 00515db7 (CONDITIONAL_JUMP)
// 00515d9e: MOV EAX,dword ptr [EBX + 0x3f8]
//   Label: LAB_00515d9e
// 00515da4: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00515da8: MOV dword ptr [EBX + EAX*0x4 + 0x3fc],EDX
// 00515daf: INC dword ptr [EBX + 0x3f8]
// 00515db5: POP EBX
// 00515db6: RET
// 00515db7: PUSH EDI
//   Label: LAB_00515db7
// 00515db8: PUSH ESI
// 00515db9: PUSH 0x6374a3
//   XREF to: 006374a3 (DATA)
// 00515dbe: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00515dc4: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00515dc5: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00515dca: ADD ESP,0x8
// 00515dcd: MOV ESI,0x6374b7
//   XREF to: 006374b7 (DATA)
// 00515dd2: MOV EDI,0x2c1
// 00515dd7: PUSH 0x6374cc
//   XREF to: 006374cc (DATA)
// 00515ddc: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 00515de2: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00515de8: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00515ded: ADD ESP,0x4
// 00515df0: POP ESI
// 00515df1: POP EDI
// 00515df2: JMP 0x00515d9e
//   XREF to: 00515d9e (UNCONDITIONAL_JUMP)

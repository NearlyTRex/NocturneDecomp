// Name: shape_meshlod.cpp_CLodMesh_drawVertexIndexLabel_FUN_0051ecd0
// Address: 0051ecd0
// Address Range: [[0051ecd0, 0051ed2b]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_drawVertexIndexLabel_FUN_0051ecd0(CLodMesh * this_ptr, int vertex_index)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_drawVertexLabels_FUN_0051ed30 (0051ed30) at 0051ed40 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520 (0051d520) at 0051d629 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_0063852d
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_drawText_FUN_00401fd0

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_drawVertexIndexLabel_FUN_0051ecd0(CLodMesh *this_ptr,int vertex_index)

{
  SRenderVertex *pSVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char local_28 [4];
  char acStack_24 [36];
  
  pSVar1 = g_CDemonRendererPtr->vertex_buffer_ptr;
  if ((int)(pSVar1[vertex_index].projected_vertex.screen_x & -0x80000000) != 0) {
    return;
  }
  iVar2 = pSVar1[vertex_index].projected_vertex.screen_x;
  iVar3 = pSVar1[vertex_index].projected_vertex.screen_y;
  crt_stdio_c_sprintf_FUN_005fdbd0(local_28,"%d",vertex_index);
  engine_2d_c_drawText_FUN_00401fd0(acStack_24,iVar2 >> 0x10,iVar3 >> 0x10);
  return;
}


// Assembly code:
// 0051ecd0: SUB ESP,0x28
//   Label: shape_meshlod.cpp_CLodMesh_drawVertexIndexLabel_FUN_0051ecd0
// 0051ecd3: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 0051ecd7: LEA EDX,[ECX*0x4 + 0x0]
// 0051ecde: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0051ece3: SUB EDX,ECX
// 0051ece5: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0051ece7: SHL EDX,0x4
// 0051ecea: ADD EAX,EDX
// 0051ecec: TEST byte ptr [EAX + 0x13],0x80
// 0051ecf0: JZ 0x0051ecf6
//   XREF to: 0051ecf6 (CONDITIONAL_JUMP)
// 0051ecf2: ADD ESP,0x28
// 0051ecf5: RET
// 0051ecf6: PUSH ESI
//   Label: LAB_0051ecf6
// 0051ecf7: PUSH EBX
// 0051ecf8: PUSH ECX
// 0051ecf9: MOV EBX,dword ptr [EAX + 0x10]
// 0051ecfc: PUSH 0x63852d
//   XREF to: 0063852d (DATA)
// 0051ed01: MOV ESI,dword ptr [EAX + 0x14]
// 0051ed04: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x28] (DATA)
// 0051ed08: PUSH EAX
// 0051ed09: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0051ed0e: ADD ESP,0xc
// 0051ed11: SAR ESI,0x10
// 0051ed14: PUSH ESI
// 0051ed15: SAR EBX,0x10
// 0051ed18: PUSH EBX
// 0051ed19: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x28] (DATA)
// 0051ed1d: PUSH EAX
// 0051ed1e: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0051ed23: ADD ESP,0xc
// 0051ed26: POP EBX
// 0051ed27: POP ESI
// 0051ed28: ADD ESP,0x28
// 0051ed2b: RET

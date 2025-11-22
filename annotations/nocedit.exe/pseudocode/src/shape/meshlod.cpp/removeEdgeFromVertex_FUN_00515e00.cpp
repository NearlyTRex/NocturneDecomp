// Name: shape_meshlod.cpp_removeEdgeFromVertex_FUN_00515e00
// Address: 00515e00
// Address Range: [[00515e00, 00515e46]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_removeEdgeFromVertex_FUN_00515e00(SLodVert * vertex_ptr, int edge_index)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_FUN_00517630 (00517630) at 00517764 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_removeEdgeFromTriangle_FUN_005183e0 (005183e0) at 00518462 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_memmove_FUN_005fe5e0
//   shape_meshlod.cpp_findEdgeInVertex_FUN_00515e50

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_removeEdgeFromVertex_FUN_00515e00(SLodVert *vertex_ptr,int edge_index)

{
  int iVar1;
  int iVar2;
  
  iVar1 = shape_meshlod_cpp_findEdgeInVertex_FUN_00515e50(vertex_ptr,edge_index);
  if (iVar1 < 0) {
    return;
  }
  iVar2 = vertex_ptr->adjacent_edge_count + -1;
  vertex_ptr->adjacent_edge_count = iVar2;
  crt_string_c_memmove_FUN_005fe5e0
            (vertex_ptr->adjacent_edge_indices + iVar1,vertex_ptr->adjacent_edge_indices + iVar1 + 1
             ,(iVar2 - iVar1) * 4);
  return;
}


// Assembly code:
// 00515e00: PUSH EBX
//   Label: shape_meshlod.cpp_removeEdgeFromVertex_FUN_00515e00
// 00515e01: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00515e05: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00515e09: PUSH EDX
// 00515e0a: PUSH EBX
// 00515e0b: CALL shape_meshlod.cpp_findEdgeInVertex_FUN_00515e50
//   XREF to: 00515e50 (UNCONDITIONAL_CALL)
// 00515e10: ADD ESP,0x8
// 00515e13: TEST EAX,EAX
// 00515e15: JGE 0x00515e19
//   XREF to: 00515e19 (CONDITIONAL_JUMP)
// 00515e17: POP EBX
// 00515e18: RET
// 00515e19: MOV ECX,dword ptr [EBX + 0x3f8]
//   Label: LAB_00515e19
// 00515e1f: DEC ECX
// 00515e20: MOV EDX,ECX
// 00515e22: SUB EDX,EAX
// 00515e24: ADD EBX,0x3fc
// 00515e2a: SHL EDX,0x2
// 00515e2d: SHL EAX,0x2
// 00515e30: PUSH EDX
// 00515e31: LEA EDX,[EAX + 0x4]
// 00515e34: ADD EDX,EBX
// 00515e36: PUSH EDX
// 00515e37: ADD EAX,EBX
// 00515e39: PUSH EAX
// 00515e3a: MOV dword ptr [EBX + -0x4],ECX
// 00515e3d: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 00515e42: ADD ESP,0xc
// 00515e45: POP EBX
// 00515e46: RET

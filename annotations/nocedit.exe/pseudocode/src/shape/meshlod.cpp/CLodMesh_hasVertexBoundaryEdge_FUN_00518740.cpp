// Name: shape_meshlod.cpp_CLodMesh_hasVertexBoundaryEdge_FUN_00518740
// Address: 00518740
// Address Range: [[00518740, 00518789]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_CLodMesh_hasVertexBoundaryEdge_FUN_00518740(CLodMesh * this_ptr, int vertex_idx)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_validateEdgeCollapse_FUN_00518490 (00518490) at 00518593 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl
shape_meshlod_cpp_CLodMesh_hasVertexBoundaryEdge_FUN_00518740(CLodMesh *this_ptr,int vertex_idx)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  while( true ) {
    if (this_ptr->vertex_data[vertex_idx].adjacent_edge_count <= iVar1) {
      return 0;
    }
    if (this_ptr->edges_ptr
        [*(int *)((int)this_ptr->vertex_data[vertex_idx].adjacent_edge_indices + iVar2)].
        adjacent_tri_count < 2) break;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 4;
  }
  return 1;
}


// Assembly code:
// 00518740: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_hasVertexBoundaryEdge_FUN_00518740
// 00518741: PUSH ESI
// 00518742: PUSH EDI
// 00518743: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00518747: IMUL EDI,dword ptr [ESP + 0x14],0x4c4
//   XREF to: Stack[0x8] (READ)
// 0051874f: XOR EAX,EAX
// 00518751: XOR EDX,EDX
// 00518753: MOV ECX,dword ptr [ESI + 0x4]
//   Label: LAB_00518753
// 00518756: ADD ECX,EDI
// 00518758: CMP EAX,dword ptr [ECX + 0x3f8]
// 0051875e: JGE 0x00518784
//   XREF to: 00518784 (CONDITIONAL_JUMP)
// 00518760: IMUL ECX,dword ptr [ECX + EDX*0x1 + 0x3fc],0xf0
// 0051876b: MOV EBX,dword ptr [ESI + 0x48]
// 0051876e: CMP dword ptr [ECX + EBX*0x1 + 0x24],0x2
// 00518773: JL 0x0051877b
//   XREF to: 0051877b (CONDITIONAL_JUMP)
// 00518775: INC EAX
// 00518776: ADD EDX,0x4
// 00518779: JMP 0x00518753
//   XREF to: 00518753 (UNCONDITIONAL_JUMP)
// 0051877b: MOV EAX,0x1
//   Label: LAB_0051877b
// 00518780: POP EDI
// 00518781: POP ESI
// 00518782: POP EBX
// 00518783: RET
// 00518784: XOR EAX,EAX
//   Label: LAB_00518784
// 00518786: POP EDI
// 00518787: POP ESI
// 00518788: POP EBX
// 00518789: RET

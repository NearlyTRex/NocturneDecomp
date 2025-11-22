// Name: shape_meshlod.cpp_findTriangleInEdge_FUN_00515d60
// Address: 00515d60
// Address Range: [[00515d60, 00515d8c]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_findTriangleInEdge_FUN_00515d60(SLodEdge * edge_ptr, int tri_index)
// Cross-references:
//   shape_meshlod.cpp_removeTriangleFromEdge_FUN_00515d10 (00515d10) at 00515d1b [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_findTriangleInEdge_FUN_00515d60(SLodEdge *edge_ptr,int tri_index)

{
  int iVar1;
  SLodEdge *pSVar2;
  
  iVar1 = 0;
  pSVar2 = edge_ptr;
  if (0 < edge_ptr->adjacent_tri_count) {
    do {
      if (tri_index == pSVar2->adjacent_tri_indices[0]) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      pSVar2 = (SLodEdge *)&pSVar2->vertex_idx_2;
    } while (iVar1 < edge_ptr->adjacent_tri_count);
  }
  return -1;
}


// Assembly code:
// 00515d60: PUSH EBX
//   Label: shape_meshlod.cpp_findTriangleInEdge_FUN_00515d60
// 00515d61: PUSH ESI
// 00515d62: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00515d66: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00515d6a: MOV EDX,dword ptr [ECX + 0x24]
// 00515d6d: XOR EAX,EAX
// 00515d6f: TEST EDX,EDX
// 00515d71: JLE 0x00515d85
//   XREF to: 00515d85 (CONDITIONAL_JUMP)
// 00515d73: MOV EDX,ECX
// 00515d75: CMP EBX,dword ptr [EDX + 0x28]
//   Label: LAB_00515d75
// 00515d78: JZ 0x00515d8a
//   XREF to: 00515d8a (CONDITIONAL_JUMP)
// 00515d7a: INC EAX
// 00515d7b: MOV ESI,dword ptr [ECX + 0x24]
// 00515d7e: ADD EDX,0x4
// 00515d81: CMP EAX,ESI
// 00515d83: JL 0x00515d75
//   XREF to: 00515d75 (CONDITIONAL_JUMP)
// 00515d85: MOV EAX,0xffffffff
//   Label: LAB_00515d85
// 00515d8a: POP ESI
//   Label: LAB_00515d8a
// 00515d8b: POP EBX
// 00515d8c: RET

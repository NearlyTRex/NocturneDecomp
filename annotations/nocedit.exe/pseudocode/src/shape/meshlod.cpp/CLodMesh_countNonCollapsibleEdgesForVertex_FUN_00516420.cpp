// Name: shape_meshlod.cpp_CLodMesh_countNonCollapsibleEdgesForVertex_FUN_00516420
// Address: 00516420
// Address Range: [[00516420, 00516471]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_CLodMesh_countNonCollapsibleEdgesForVertex_FUN_00516420(CLodMesh * this_ptr, int vertex_index)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_validateEdgeCollapse_FUN_00518490 (00518490) at 00518686 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl
shape_meshlod_cpp_CLodMesh_countNonCollapsibleEdgesForVertex_FUN_00516420
          (CLodMesh *this_ptr,int vertex_index)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  for (iVar1 = 0; iVar1 < this_ptr->vertex_data[vertex_index].adjacent_edge_count; iVar1 = iVar1 + 1
      ) {
    if (this_ptr->edges_ptr
        [*(int *)((int)this_ptr->vertex_data[vertex_index].adjacent_edge_indices + iVar2)].
        collapse_viability != 0) {
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar2 + 4;
  }
  return iVar3;
}


// Assembly code:
// 00516420: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_countNonCollapsibleEdgesForVertex_FUN_00516420
// 00516421: PUSH ESI
// 00516422: PUSH EDI
// 00516423: SUB ESP,0x4
// 00516426: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051642a: IMUL EDX,dword ptr [ESP + 0x18],0x4c4
//   XREF to: Stack[0x8] (READ)
// 00516432: XOR EAX,EAX
// 00516434: XOR EBX,EBX
// 00516436: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x10] (DATA)
// 00516439: XOR EDX,EDX
// 0051643b: MOV ESI,dword ptr [ESP]
//   Label: LAB_0051643b
//   XREF to: Stack[-0x10] (DATA)
// 0051643e: MOV ECX,dword ptr [EDI + 0x4]
// 00516441: ADD ECX,ESI
// 00516443: CMP EAX,dword ptr [ECX + 0x3f8]
// 00516449: JGE 0x00516469
//   XREF to: 00516469 (CONDITIONAL_JUMP)
// 0051644b: IMUL ECX,dword ptr [ECX + EDX*0x1 + 0x3fc],0xf0
// 00516456: MOV ESI,dword ptr [EDI + 0x48]
// 00516459: CMP dword ptr [ECX + ESI*0x1 + 0x18],0x0
// 0051645e: JNZ 0x00516466
//   XREF to: 00516466 (CONDITIONAL_JUMP)
// 00516460: INC EAX
//   Label: LAB_00516460
// 00516461: ADD EDX,0x4
// 00516464: JMP 0x0051643b
//   XREF to: 0051643b (UNCONDITIONAL_JUMP)
// 00516466: INC EBX
//   Label: LAB_00516466
// 00516467: JMP 0x00516460
//   XREF to: 00516460 (UNCONDITIONAL_JUMP)
// 00516469: MOV EAX,EBX
//   Label: LAB_00516469
// 0051646b: ADD ESP,0x4
// 0051646e: POP EDI
// 0051646f: POP ESI
// 00516470: POP EBX
// 00516471: RET

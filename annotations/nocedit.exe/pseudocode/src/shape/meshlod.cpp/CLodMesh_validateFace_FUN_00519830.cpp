// Name: shape_meshlod.cpp_CLodMesh_validateFace_FUN_00519830
// Address: 00519830
// Address Range: [[00519830, 0051986a]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_CLodMesh_validateFace_FUN_00519830(CLodMesh * this_ptr, CLodFace * face)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_collapseEdge_FUN_00517630 (00517630) at 0051827a [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_computeEdgeCollapseCost_FUN_00518910 (00518910) at 0051926b [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_validateAndRemoveInvalidFaces_FUN_005197c0 (005197c0) at 005197f9 [UNCONDITIONAL_CALL]
// Function calls:
//   shape_meshlod.cpp_CLodFace_computeNormalAndPlane_FUN_00519870

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodMesh_validateFace_FUN_00519830(CLodMesh *this_ptr,CLodFace *face)

{
  CLodVert *pCVar1;
  int iVar2;
  
  pCVar1 = this_ptr->vertex_data;
  iVar2 = shape_meshlod_cpp_CLodFace_computeNormalAndPlane_FUN_00519870
                    (face,&pCVar1[face->vertex_idx_0].position,&pCVar1[face->vertex_idx_1].position,
                     &pCVar1[face->vertex_idx_2].position);
  return iVar2;
}


// Assembly code:
// 00519830: PUSH ESI
//   Label: shape_meshlod.cpp_CLodMesh_validateFace_FUN_00519830
// 00519831: PUSH EDI
// 00519832: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00519836: IMUL ECX,dword ptr [EDX + 0x18],0x4c4
// 0051983d: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00519841: MOV EAX,dword ptr [EAX + 0x4]
// 00519844: ADD ECX,EAX
// 00519846: MOV ESI,dword ptr [EDX + 0x14]
// 00519849: PUSH ECX
// 0051984a: IMUL ECX,ESI,0x4c4
// 00519850: ADD ECX,EAX
// 00519852: MOV EDI,dword ptr [EDX + 0x10]
// 00519855: PUSH ECX
// 00519856: IMUL ECX,EDI,0x4c4
// 0051985c: ADD EAX,ECX
// 0051985e: PUSH EAX
// 0051985f: PUSH EDX
// 00519860: CALL shape_meshlod.cpp_CLodFace_computeNormalAndPlane_FUN_00519870
//   XREF to: 00519870 (UNCONDITIONAL_CALL)
// 00519865: ADD ESP,0x10
// 00519868: POP EDI
// 00519869: POP ESI
// 0051986a: RET

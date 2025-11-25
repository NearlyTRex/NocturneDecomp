// Name: shape_meshlod.cpp_CLodEdge_removeFace_FUN_00515d10
// Address: 00515d10
// Address Range: [[00515d10, 00515d50]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodEdge_removeFace_FUN_00515d10(CLodEdge * this_ptr, int tri_index)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_removeEdgeFromFace_FUN_005183e0 (005183e0) at 00518419 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_memmove_FUN_005fe5e0
//   shape_meshlod.cpp_CLodEdge_findFace_FUN_00515d60

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodEdge_removeFace_FUN_00515d10(CLodEdge *this_ptr,int tri_index)

{
  int iVar1;
  int iVar2;
  
  iVar1 = shape_meshlod_cpp_CLodEdge_findFace_FUN_00515d60(this_ptr,tri_index);
  if (iVar1 < 0) {
    return;
  }
  iVar2 = this_ptr->adjacent_tri_count + -1;
  this_ptr->adjacent_tri_count = iVar2;
  crt_string_c_memmove_FUN_005fe5e0
            (this_ptr->adjacent_tri_indices + iVar1,this_ptr->adjacent_tri_indices + iVar1 + 1,
             (iVar2 - iVar1) * 4);
  return;
}


// Assembly code:
// 00515d10: PUSH EBX
//   Label: shape_meshlod.cpp_CLodEdge_removeFace_FUN_00515d10
// 00515d11: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00515d15: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00515d19: PUSH EDX
// 00515d1a: PUSH EBX
// 00515d1b: CALL shape_meshlod.cpp_CLodEdge_findFace_FUN_00515d60
//   XREF to: 00515d60 (UNCONDITIONAL_CALL)
// 00515d20: ADD ESP,0x8
// 00515d23: TEST EAX,EAX
// 00515d25: JGE 0x00515d29
//   XREF to: 00515d29 (CONDITIONAL_JUMP)
// 00515d27: POP EBX
// 00515d28: RET
// 00515d29: MOV ECX,dword ptr [EBX + 0x24]
//   Label: LAB_00515d29
// 00515d2c: DEC ECX
// 00515d2d: MOV EDX,ECX
// 00515d2f: SUB EDX,EAX
// 00515d31: ADD EBX,0x28
// 00515d34: SHL EDX,0x2
// 00515d37: SHL EAX,0x2
// 00515d3a: PUSH EDX
// 00515d3b: LEA EDX,[EAX + 0x4]
// 00515d3e: ADD EDX,EBX
// 00515d40: PUSH EDX
// 00515d41: ADD EAX,EBX
// 00515d43: PUSH EAX
// 00515d44: MOV dword ptr [EBX + -0x4],ECX
// 00515d47: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 00515d4c: ADD ESP,0xc
// 00515d4f: POP EBX
// 00515d50: RET

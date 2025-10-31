// Name: engine_drender.cpp_calculateVertexLight_FUN_0048c740
// Address: 0048c740
// Address Range: [[0048c740, 0048c752]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_calculateVertexLight_FUN_0048c740(int vertex_index, CVector3i * vertex_position)
// Function calls:
//   engine_light.cpp_calculateAndStoreVertexLight_FUN_00505850

#include "nocturne.h"

void __cdecl
engine_drender_cpp_calculateVertexLight_FUN_0048c740(int vertex_index,CVector3i *vertex_position)

{
  CVector3i *in_stack_0000000c;
  
  engine_light_cpp_calculateAndStoreVertexLight_FUN_00505850((int)vertex_position,in_stack_0000000c)
  ;
  return;
}


// Assembly code:
// 0048c740: MOV EDX,dword ptr [ESP + 0xc]
//   Label: engine_drender.cpp_calculateVertexLight_FUN_0048c740
//   XREF to: Stack[0xc] (READ)
// 0048c744: PUSH EDX
// 0048c745: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0048c749: PUSH ECX
// 0048c74a: CALL engine_light.cpp_calculateAndStoreVertexLight_FUN_00505850
//   XREF to: 00505850 (UNCONDITIONAL_CALL)
// 0048c74f: ADD ESP,0x8
// 0048c752: RET

// Name: engine_drender.cpp_calculateVertexLight_FUN_0048c740
// Address: 0048c740
// Address Range: [[0048c740, 0048c752]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_calculateVertexLight_FUN_0048c740(int vertex_index,CVector3i *vertex_position)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_calculateVertexLight_FUN_0048c740(int vertex_index,CVector3i *vertex_position)

{
  CVector3i *in_stack_0000000c;
  
  engine_light_cpp_calculateAndStoreVertexLight_FUN_00505850((int)vertex_position,in_stack_0000000c)
  ;
  return;
}

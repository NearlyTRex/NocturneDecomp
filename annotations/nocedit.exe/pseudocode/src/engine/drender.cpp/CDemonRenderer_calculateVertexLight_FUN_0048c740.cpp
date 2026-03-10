// Name: engine_drender.cpp_CDemonRenderer_calculateVertexLight_FUN_0048c740
// Address: 0048c740
// Address Range: [[0048c740, 0048c752]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_calculateVertexLight_FUN_0048c740(CDemonRenderer *this_ptr,int vertex_index,CVector3i *vertex_position)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_calculateVertexLight_FUN_0048c740(CDemonRenderer *this_ptr,int vertex_index,CVector3i *vertex_position)

{
  engine_light_cpp_calculateAndStoreVertexLight_FUN_00505850(vertex_index,vertex_position);
  return;
}

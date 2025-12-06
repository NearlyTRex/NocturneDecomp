// Name: shape_meshlod.cpp_CLodFace_containsVertex_FUN_0051ee30
// Address: 0051ee30
// Address Range: [[0051ee30, 0051ee4c]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_CLodFace_containsVertex_FUN_0051ee30(CLodFace * this_ptr, int vertex_index)

#include "nocturne.h"

int __cdecl
shape_meshlod_cpp_CLodFace_containsVertex_FUN_0051ee30(CLodFace *this_ptr,int vertex_index)

{
  int iVar1;
  
  iVar1 = shape_meshlod_cpp_CLodFace_findVertexIndex_FUN_00515e90(this_ptr,vertex_index);
  return (uint)(-1 < iVar1);
}

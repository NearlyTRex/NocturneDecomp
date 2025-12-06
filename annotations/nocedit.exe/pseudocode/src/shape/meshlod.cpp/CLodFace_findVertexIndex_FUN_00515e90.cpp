// Name: shape_meshlod.cpp_CLodFace_findVertexIndex_FUN_00515e90
// Address: 00515e90
// Address Range: [[00515e90, 00515eba]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_CLodFace_findVertexIndex_FUN_00515e90(CLodFace * this_ptr, int vertex_index)

#include "nocturne.h"

int __cdecl
shape_meshlod_cpp_CLodFace_findVertexIndex_FUN_00515e90(CLodFace *this_ptr,int vertex_index)

{
  if (vertex_index == this_ptr->vertex_idx_0) {
    return 0;
  }
  if (vertex_index != this_ptr->vertex_idx_1) {
    if (vertex_index == this_ptr->vertex_idx_2) {
      return 2;
    }
    return -1;
  }
  return 1;
}

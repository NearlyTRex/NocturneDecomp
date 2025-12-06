// Name: shape_meshlod.cpp_CLodMesh_drawVertexLabels_FUN_0051ed30
// Address: 0051ed30
// Address Range: [[0051ed30, 0051ed52]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_drawVertexLabels_FUN_0051ed30(CLodMesh * this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_drawVertexLabels_FUN_0051ed30(CLodMesh *this_ptr)

{
  int vertex_index;
  
  vertex_index = 0;
  if (0 < this_ptr->vertex_count) {
    do {
      shape_meshlod_cpp_CLodMesh_drawVertexIndexLabel_FUN_0051ecd0(this_ptr,vertex_index);
      vertex_index = vertex_index + 1;
    } while (vertex_index < this_ptr->vertex_count);
  }
  return;
}

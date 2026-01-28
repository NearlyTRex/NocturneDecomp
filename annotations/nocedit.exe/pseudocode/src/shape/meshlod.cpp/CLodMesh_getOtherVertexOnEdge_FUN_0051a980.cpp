// Name: shape_meshlod.cpp_CLodMesh_getOtherVertexOnEdge_FUN_0051a980
// Address: 0051a980
// Address Range: [[0051a980, 0051a9c0]]
// Convention: __cdecl
// Signature: int __cdecl shape_meshlod_cpp_CLodMesh_getOtherVertexOnEdge_FUN_0051a980 (CLodMesh *this_ptr,int vertex_index,int edge_array_index)

#include "nocturne.h"

int __cdecl
shape_meshlod_cpp_CLodMesh_getOtherVertexOnEdge_FUN_0051a980
          (CLodMesh *this_ptr,int vertex_index,int edge_array_index)

{
  int iVar1;
  
  iVar1 = this_ptr->edges_ptr
          [this_ptr->vertex_data[vertex_index].adjacent_edge_indices[edge_array_index]].vertex_idx_1
  ;
  if (iVar1 == vertex_index) {
    iVar1 = this_ptr->edges_ptr
            [this_ptr->vertex_data[vertex_index].adjacent_edge_indices[edge_array_index]].
            vertex_idx_2;
  }
  return iVar1;
}

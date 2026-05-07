// Name: shape_meshlod.cpp_CLodMesh_hasVertexBoundaryEdge_FUN_00518740
// Address: 00518740
// MANUAL RECONSTRUCTION
// Address Range: [[00518740, 00518789]]
// Convention: __cdecl
// Signature: int __cdecl shape_meshlod_cpp_CLodMesh_hasVertexBoundaryEdge_FUN_00518740(CLodMesh *this_ptr,int vertex_idx)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodMesh_hasVertexBoundaryEdge_FUN_00518740(CLodMesh *this_ptr,int vertex_idx)

{
  int iVar1;

  for (iVar1 = 0; iVar1 < this_ptr->vertex_data[vertex_idx].adjacent_edge_count;
       iVar1 = iVar1 + 1) {
    if (this_ptr->edges_ptr
        [this_ptr->vertex_data[vertex_idx].adjacent_edge_indices[iVar1]].
        adjacent_tri_count < 2) {
      return 1;
    }
  }
  return 0;
}

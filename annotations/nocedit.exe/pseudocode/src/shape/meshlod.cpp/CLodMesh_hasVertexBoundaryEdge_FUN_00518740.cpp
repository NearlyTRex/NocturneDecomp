// Name: shape_meshlod.cpp_CLodMesh_hasVertexBoundaryEdge_FUN_00518740
// Address: 00518740
// Address Range: [[00518740, 00518789]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_CLodMesh_hasVertexBoundaryEdge_FUN_00518740(CLodMesh * this_ptr, int vertex_idx)

#include "nocturne.h"

int __cdecl
shape_meshlod_cpp_CLodMesh_hasVertexBoundaryEdge_FUN_00518740(CLodMesh *this_ptr,int vertex_idx)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  while( true ) {
    if (this_ptr->vertex_data[vertex_idx].adjacent_edge_count <= iVar1) {
      return 0;
    }
    if (this_ptr->edges_ptr
        [*(int *)((int)this_ptr->vertex_data[vertex_idx].adjacent_edge_indices + iVar2)].
        adjacent_tri_count < 2) break;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 4;
  }
  return 1;
}

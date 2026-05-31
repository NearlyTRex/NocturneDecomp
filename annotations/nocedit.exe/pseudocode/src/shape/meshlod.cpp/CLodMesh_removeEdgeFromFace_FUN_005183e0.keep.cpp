// Name: shape_meshlod.cpp_CLodMesh_removeEdgeFromFace_FUN_005183e0
// Address: 005183e0
// MANUAL RECONSTRUCTION
// Address Range: [[005183e0, 00518481]]
// Convention: __cdecl
// Signature: int __cdecl shape_meshlod_cpp_CLodMesh_removeEdgeFromFace_FUN_005183e0(CLodMesh *this_ptr,int tri_index,int edge_index)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodMesh_removeEdgeFromFace_FUN_005183e0(CLodMesh *this_ptr,int tri_index,int edge_index)

{
  int iVar1;
  int iVar3;
  CLodEdge *this_ptr_00;
  CLodFace *pCVar4;
  
  pCVar4 = this_ptr->tri_data + tri_index;
  this_ptr_00 = this_ptr->edges_ptr + edge_index;
  shape_meshlod_cpp_CLodEdge_removeFace_FUN_00515d10(this_ptr_00,tri_index);
  if (this_ptr_00->adjacent_tri_count == 0) {
    this_ptr_00->deletion_flag = 1;
    shape_meshlod_cpp_CLodVert_removeEdge_FUN_00515e00
              (this_ptr->vertex_data + this_ptr_00->vertex_idx_1,edge_index);
    shape_meshlod_cpp_CLodVert_removeEdge_FUN_00515e00
              (this_ptr->vertex_data + this_ptr_00->vertex_idx_2,edge_index);
  }
  iVar3 = 0;
  iVar1 = pCVar4->edge_idx_0;
  while (edge_index != iVar1) {
    iVar3 = iVar3 + 1;
    if (2 < iVar3) break;
    iVar1 = (&pCVar4->edge_idx_0)[iVar3];
  }
  (&pCVar4->edge_idx_0)[iVar3] = -1;
  return iVar3;
}

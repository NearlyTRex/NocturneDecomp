// Name: shape_meshlod.cpp_CLodMesh_weldVertices_FUN_0051a150
// Address: 0051a150
// MANUAL RECONSTRUCTION
// Address Range: [[0051a150, 0051a2f2]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_weldVertices_FUN_0051a150(CLodMesh *this_ptr,float weld_threshold)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_weldVertices_FUN_0051a150(CLodMesh *this_ptr,float weld_threshold)

{
  int iVar3;
  int iVar5;
  int local_1c;
  CLodVert *vi;
  CLodVert *vj;

  for (iVar5 = 0; iVar5 < this_ptr->vertex_count; iVar5 = iVar5 + 1) {
    this_ptr->vertex_data[iVar5].vertex_remapping_index = iVar5;
  }
  for (iVar3 = 0; iVar3 < this_ptr->vertex_count; iVar3 = iVar3 + 1) {
    if (iVar3 == this_ptr->vertex_data[iVar3].vertex_remapping_index) {
      vi = &this_ptr->vertex_data[iVar3];
      for (local_1c = iVar3 + 1; local_1c < this_ptr->vertex_count; local_1c = local_1c + 1) {
        vj = &this_ptr->vertex_data[local_1c];
        if ((local_1c == vj->vertex_remapping_index) &&
           ((vi->position.z - vj->position.z) * (vi->position.z - vj->position.z) +
            (vi->position.x - vj->position.x) * (vi->position.x - vj->position.x) +
            (vi->position.y - vj->position.y) * (vi->position.y - vj->position.y) <=
            weld_threshold * weld_threshold)) {
          vj->vertex_remapping_index = iVar3;
        }
      }
    }
  }
  for (iVar3 = 0; iVar3 < this_ptr->tri_count; iVar3 = iVar3 + 1) {
    this_ptr->tri_data[iVar3].vertex_idx_0 =
         this_ptr->vertex_data[this_ptr->tri_data[iVar3].vertex_idx_0].vertex_remapping_index;
    this_ptr->tri_data[iVar3].vertex_idx_1 =
         this_ptr->vertex_data[this_ptr->tri_data[iVar3].vertex_idx_1].vertex_remapping_index;
    this_ptr->tri_data[iVar3].vertex_idx_2 =
         this_ptr->vertex_data[this_ptr->tri_data[iVar3].vertex_idx_2].vertex_remapping_index;
  }
  for (iVar3 = 0; iVar3 < this_ptr->edge_count; iVar3 = iVar3 + 1) {
    this_ptr->edges_ptr[iVar3].vertex_idx_1 =
         this_ptr->vertex_data[this_ptr->edges_ptr[iVar3].vertex_idx_1].vertex_remapping_index;
    this_ptr->edges_ptr[iVar3].vertex_idx_2 =
         this_ptr->vertex_data[this_ptr->edges_ptr[iVar3].vertex_idx_2].vertex_remapping_index;
  }
  return;
}

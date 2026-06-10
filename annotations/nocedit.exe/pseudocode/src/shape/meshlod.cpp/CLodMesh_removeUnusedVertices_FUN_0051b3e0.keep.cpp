// Name: shape_meshlod.cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0
// Address: 0051b3e0
// MANUAL RECONSTRUCTION
// Address Range: [[0051b3e0, 0051b568]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0(CLodMesh *this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0(CLodMesh *this_ptr)

{
  int iVar1;
  int iVar3;
  int iVar6;
  int local_18;
  int local_14;

  for (iVar3 = 0; iVar3 < this_ptr->vertex_count; iVar3 = iVar3 + 1) {
    this_ptr->vertex_data[iVar3].vertex_remapping_index = 0;
  }
  for (local_18 = 0; local_18 < this_ptr->tri_count; local_18 = local_18 + 1) {
    if (this_ptr->tri_data[local_18].processed_flag == 0) {
      this_ptr->vertex_data[this_ptr->tri_data[local_18].vertex_idx_0].vertex_remapping_index = 1;
      this_ptr->vertex_data[this_ptr->tri_data[local_18].vertex_idx_1].vertex_remapping_index = 1;
      this_ptr->vertex_data[this_ptr->tri_data[local_18].vertex_idx_2].vertex_remapping_index = 1;
    }
  }
  iVar6 = 0;
  for (iVar1 = 0; iVar1 < this_ptr->vertex_count; iVar1 = iVar1 + 1) {
    if (this_ptr->vertex_data[iVar1].vertex_remapping_index == 0) {
      this_ptr->vertex_data[iVar1].vertex_remapping_index = -1;
    }
    else {
      this_ptr->vertex_data[iVar1].vertex_remapping_index = iVar6;
      iVar6 = iVar6 + 1;
    }
  }
  for (local_14 = 0; local_14 < this_ptr->tri_count; local_14 = local_14 + 1) {
    if (this_ptr->tri_data[local_14].processed_flag == 0) {
      this_ptr->tri_data[local_14].vertex_idx_0 =
           this_ptr->vertex_data[this_ptr->tri_data[local_14].vertex_idx_0].vertex_remapping_index;
      this_ptr->tri_data[local_14].vertex_idx_1 =
           this_ptr->vertex_data[this_ptr->tri_data[local_14].vertex_idx_1].vertex_remapping_index;
      this_ptr->tri_data[local_14].vertex_idx_2 =
           this_ptr->vertex_data[this_ptr->tri_data[local_14].vertex_idx_2].vertex_remapping_index;
    }
  }
  iVar6 = 0;
  for (iVar1 = 0; iVar1 < this_ptr->vertex_count; iVar1 = iVar1 + 1) {
    if (-1 < this_ptr->vertex_data[iVar1].vertex_remapping_index) {
      if (iVar6 < iVar1) {
        this_ptr->vertex_data[iVar6] = this_ptr->vertex_data[iVar1];
      }
      iVar6 = iVar6 + 1;
    }
  }
  this_ptr->vertex_count = iVar6;
  return;
}

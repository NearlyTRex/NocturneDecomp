// Name: shape_meshlod.cpp_CLodMesh_weldVertices_FUN_0051a150
// Address: 0051a150
// Address Range: [[0051a150, 0051a2f2]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_weldVertices_FUN_0051a150(CLodMesh *this_ptr,float weld_threshold)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_weldVertices_FUN_0051a150(CLodMesh *this_ptr,float weld_threshold)

{
  int iVar2;
  int iVar1;
  float fVar3;
  char *pcVar4;
  int iVar5;
  int iVar3;
  int local_24;
  int local_20;
  int local_1c;
  char *pcVar1;
  
  iVar5 = 0;
  if (0 < this_ptr->vertex_count) {
    iVar2 = 0;
    do {
      *(int *)((int)this_ptr->vertex_data->adjacent_edge_indices + iVar2 + -8) = iVar5;
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + 0x4c4;
    } while (iVar5 < this_ptr->vertex_count);
  }
  iVar3 = 0;
  if (0 < this_ptr->vertex_count) {
    local_1c = 0;
    do {
      iVar1 = *(int *)((int)this_ptr->vertex_data->adjacent_edge_indices + local_1c + -8);
      if ((iVar3 == iVar1) && (fVar3 = (float)(iVar1 + 1), (int)fVar3 < this_ptr->vertex_count)) {
        iVar1 = (int)fVar3 * 0x4c4;
        do {
          pcVar1 = this_ptr->vertex_data->lod_workspace + iVar1 + -0x10;
          if ((fVar3 == *(float *)(pcVar1 + 0x3f4)) &&
             (pcVar4 = this_ptr->vertex_data->lod_workspace + local_1c + -0x10,
             (*(float *)(pcVar4 + 8) - *(float *)(pcVar1 + 8)) *
             (*(float *)(pcVar4 + 8) - *(float *)(pcVar1 + 8)) +
             (*(float *)pcVar4 - *(float *)pcVar1) * (*(float *)pcVar4 - *(float *)pcVar1) +
             (*(float *)(pcVar4 + 4) - *(float *)(pcVar1 + 4)) *
             (*(float *)(pcVar4 + 4) - *(float *)(pcVar1 + 4)) <= weld_threshold * weld_threshold))
          {
            *(int *)((int)this_ptr->vertex_data->adjacent_edge_indices + iVar1 + -8) = iVar3;
          }
          fVar3 = (float)((int)fVar3 + 1);
          iVar1 = iVar1 + 0x4c4;
        } while ((int)fVar3 < this_ptr->vertex_count);
      }
      iVar3 = iVar3 + 1;
      local_1c = local_1c + 0x4c4;
    } while (iVar3 < this_ptr->vertex_count);
  }
  local_20 = 0;
  if (0 < this_ptr->tri_count) {
    local_24 = 0;
    do {
      iVar3 = 0;
      do {
        iVar1 = iVar3 + local_24;
        iVar3 = iVar3 + 4;
        *(int *)((int)(this_ptr->tri_data->uv_coords + -2) + iVar3 + local_24) =
             this_ptr->vertex_data[*(int *)((int)(this_ptr->tri_data->uv_coords + -2) + iVar1 + 4)].
             vertex_remapping_index;
      } while (iVar3 != 0xc);
      local_24 = local_24 + 0x8c;
      local_20 = local_20 + 1;
    } while (local_20 < this_ptr->tri_count);
  }
  iVar3 = 0;
  if (0 < this_ptr->edge_count) {
    iVar1 = 0;
    do {
      *(int *)((int)this_ptr->edges_ptr->adjacent_tri_indices + iVar1 + -0x28) =
           this_ptr->vertex_data
           [*(int *)((int)this_ptr->edges_ptr->adjacent_tri_indices + iVar1 + -0x28)].
           vertex_remapping_index;
      *(int *)((int)this_ptr->edges_ptr->adjacent_tri_indices + iVar1 + -0x24) =
           this_ptr->vertex_data
           [*(int *)((int)this_ptr->edges_ptr->adjacent_tri_indices + iVar1 + -0x24)].
           vertex_remapping_index;
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0xf0;
    } while (iVar3 < this_ptr->edge_count);
  }
  return;
}

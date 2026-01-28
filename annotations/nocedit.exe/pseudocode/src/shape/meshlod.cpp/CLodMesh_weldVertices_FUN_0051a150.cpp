// Name: shape_meshlod.cpp_CLodMesh_weldVertices_FUN_0051a150
// Address: 0051a150
// Address Range: [[0051a150, 0051a2f2]]
// Convention: __cdecl
// Signature: int __cdecl shape_meshlod_cpp_CLodMesh_weldVertices_FUN_0051a150(CLodMesh *this_ptr,float weld_threshold)

#include "nocturne.h"

int __cdecl
shape_meshlod_cpp_CLodMesh_weldVertices_FUN_0051a150(CLodMesh *this_ptr,float weld_threshold)

{
  char *pcVar1;
  int in_EAX;
  float fVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar5 = 0;
  if (0 < this_ptr->vertex_count) {
    in_EAX = 0;
    do {
      *(int *)((int)this_ptr->vertex_data->adjacent_edge_indices + in_EAX + -8) = iVar5;
      iVar5 = iVar5 + 1;
      in_EAX = in_EAX + 0x4c4;
    } while (iVar5 < this_ptr->vertex_count);
  }
  iVar5 = 0;
  if (0 < this_ptr->vertex_count) {
    local_1c = 0;
    do {
      iVar3 = *(int *)((int)this_ptr->vertex_data->adjacent_edge_indices + local_1c + -8);
      if ((iVar5 == iVar3) && (fVar2 = (float)(iVar3 + 1), (int)fVar2 < this_ptr->vertex_count)) {
        iVar3 = (int)fVar2 * 0x4c4;
        do {
          pcVar1 = this_ptr->vertex_data->lod_workspace + iVar3 + -0x10;
          if ((fVar2 == *(float *)(pcVar1 + 0x3f4)) &&
             (pcVar4 = this_ptr->vertex_data->lod_workspace + local_1c + -0x10,
             (*(float *)(pcVar4 + 8) - *(float *)(pcVar1 + 8)) *
             (*(float *)(pcVar4 + 8) - *(float *)(pcVar1 + 8)) +
             (*(float *)pcVar4 - *(float *)pcVar1) * (*(float *)pcVar4 - *(float *)pcVar1) +
             (*(float *)(pcVar4 + 4) - *(float *)(pcVar1 + 4)) *
             (*(float *)(pcVar4 + 4) - *(float *)(pcVar1 + 4)) <= weld_threshold * weld_threshold))
          {
            *(int *)((int)this_ptr->vertex_data->adjacent_edge_indices + iVar3 + -8) = iVar5;
          }
          fVar2 = (float)((int)fVar2 + 1);
          iVar3 = iVar3 + 0x4c4;
        } while ((int)fVar2 < this_ptr->vertex_count);
      }
      iVar5 = iVar5 + 1;
      local_1c = local_1c + 0x4c4;
      in_EAX = this_ptr->vertex_count;
    } while (iVar5 < in_EAX);
  }
  local_20 = 0;
  if (0 < this_ptr->tri_count) {
    local_24 = 0;
    do {
      iVar5 = 0;
      do {
        iVar3 = iVar5 + local_24;
        iVar5 = iVar5 + 4;
        *(int *)((int)(this_ptr->tri_data->uv_coords + -2) + iVar5 + local_24) =
             this_ptr->vertex_data[*(int *)((int)(this_ptr->tri_data->uv_coords + -2) + iVar3 + 4)].
             vertex_remapping_index;
      } while (iVar5 != 0xc);
      in_EAX = local_24 + 0x8c;
      local_20 = local_20 + 1;
      local_24 = in_EAX;
    } while (local_20 < this_ptr->tri_count);
  }
  iVar5 = 0;
  if (0 < this_ptr->edge_count) {
    in_EAX = 0;
    do {
      *(int *)((int)this_ptr->edges_ptr->adjacent_tri_indices + in_EAX + -0x28) =
           this_ptr->vertex_data
           [*(int *)((int)this_ptr->edges_ptr->adjacent_tri_indices + in_EAX + -0x28)].
           vertex_remapping_index;
      *(int *)((int)this_ptr->edges_ptr->adjacent_tri_indices + in_EAX + -0x24) =
           this_ptr->vertex_data
           [*(int *)((int)this_ptr->edges_ptr->adjacent_tri_indices + in_EAX + -0x24)].
           vertex_remapping_index;
      iVar5 = iVar5 + 1;
      in_EAX = in_EAX + 0xf0;
    } while (iVar5 < this_ptr->edge_count);
  }
  return in_EAX;
}

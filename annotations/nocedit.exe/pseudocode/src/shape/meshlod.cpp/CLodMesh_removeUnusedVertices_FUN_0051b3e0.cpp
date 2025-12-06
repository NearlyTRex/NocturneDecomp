// Name: shape_meshlod.cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0
// Address: 0051b3e0
// Address Range: [[0051b3e0, 0051b568]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0(CLodMesh * this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0(CLodMesh *this_ptr)

{
  CLodVert *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar3 = 0;
  if (0 < this_ptr->vertex_count) {
    iVar2 = 0;
    do {
      *(uint *)((int)this_ptr->vertex_data->adjacent_edge_indices + iVar2 + -8) = 0;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x4c4;
    } while (iVar3 < this_ptr->vertex_count);
  }
  iVar3 = 0;
  local_18 = 0;
  if (0 < this_ptr->tri_count) {
    do {
      if (*(int *)((int)this_ptr->tri_data->edge_perpendiculars + iVar3 + -0x14) == 0) {
        iVar2 = 0;
        do {
          iVar4 = iVar2 + iVar3;
          iVar2 = iVar2 + 4;
          this_ptr->vertex_data[*(int *)((int)(this_ptr->tri_data->uv_coords + -2) + iVar4 + 4)].
          vertex_remapping_index = 1;
        } while (iVar2 != 0xc);
      }
      iVar3 = iVar3 + 0x8c;
      local_18 = local_18 + 1;
    } while (local_18 < this_ptr->tri_count);
  }
  iVar2 = 0;
  iVar3 = 0;
  if (0 < this_ptr->vertex_count) {
    iVar4 = 0;
    do {
      pCVar1 = this_ptr->vertex_data;
      if (*(int *)((int)pCVar1->adjacent_edge_indices + iVar4 + -8) == 0) {
        *(uint *)((int)pCVar1->adjacent_edge_indices + iVar4 + -8) = 0xffffffff;
      }
      else {
        *(int *)((int)pCVar1->adjacent_edge_indices + iVar4 + -8) = iVar3;
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0x4c4;
    } while (iVar2 < this_ptr->vertex_count);
  }
  local_14 = 0;
  if (0 < this_ptr->tri_count) {
    iVar3 = 0;
    do {
      if (*(int *)((int)this_ptr->tri_data->edge_perpendiculars + iVar3 + -0x14) == 0) {
        iVar2 = 0;
        do {
          iVar4 = iVar2 + 4;
          *(int *)((int)(this_ptr->tri_data->uv_coords + -2) + iVar2 + iVar3 + 4) =
               this_ptr->vertex_data
               [*(int *)((int)(this_ptr->tri_data->uv_coords + -2) + iVar2 + iVar3 + 4)].
               vertex_remapping_index;
          iVar2 = iVar4;
        } while (iVar4 != 0xc);
      }
      iVar3 = iVar3 + 0x8c;
      local_14 = local_14 + 1;
    } while (local_14 < this_ptr->tri_count);
  }
  iVar2 = 0;
  iVar3 = 0;
  if (0 < this_ptr->vertex_count) {
    local_20 = 0;
    local_1c = 0;
    do {
      pcVar5 = this_ptr->vertex_data->lod_workspace + local_1c + -0x10;
      if (-1 < *(int *)(pcVar5 + 0x3f4)) {
        if (iVar3 < iVar2) {
          pcVar6 = this_ptr->vertex_data->lod_workspace + local_20 + -0x10;
          for (iVar4 = 0x131; iVar4 != 0; iVar4 = iVar4 + -1) {
            *(uint *)pcVar6 = *(uint *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar6 = pcVar6 + 4;
          }
          for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
            *pcVar6 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar6 = pcVar6 + 1;
          }
        }
        local_20 = local_20 + 0x4c4;
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 + 1;
      local_1c = local_1c + 0x4c4;
    } while (iVar2 < this_ptr->vertex_count);
  }
  this_ptr->vertex_count = iVar3;
  return;
}

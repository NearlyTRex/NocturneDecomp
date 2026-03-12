// Name: shape_meshlod.cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0
// Address: 0051b3e0
// Address Range: [[0051b3e0, 0051b568]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0(CLodMesh *this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0(CLodMesh *this_ptr)

{
  int iVar2;
  int iVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar5;
  int iVar6;
  char *pcVar6;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  CLodVert *pCVar1;
  
  iVar3 = 0;
  if (0 < this_ptr->vertex_count) {
    iVar2 = 0;
    do {
      *(uint *)((int)this_ptr->vertex_data->adjacent_edge_indices + iVar2 + -8) = 0;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x4c4;
    } while (iVar3 < this_ptr->vertex_count);
  }
  iVar6 = 0;
  local_18 = 0;
  if (0 < this_ptr->tri_count) {
    do {
      if (*(int *)((int)this_ptr->tri_data->edge_perpendiculars + iVar6 + -0x14) == 0) {
        iVar1 = 0;
        do {
          iVar5 = iVar1 + iVar6;
          iVar1 = iVar1 + 4;
          this_ptr->vertex_data[*(int *)((int)(this_ptr->tri_data->uv_coords + -2) + iVar5 + 4)].
          vertex_remapping_index = 1;
        } while (iVar1 != 0xc);
      }
      iVar6 = iVar6 + 0x8c;
      local_18 = local_18 + 1;
    } while (local_18 < this_ptr->tri_count);
  }
  iVar1 = 0;
  iVar6 = 0;
  if (0 < this_ptr->vertex_count) {
    iVar4 = 0;
    do {
      pCVar1 = this_ptr->vertex_data;
      if (*(int *)((int)pCVar1->adjacent_edge_indices + iVar4 + -8) == 0) {
        *(uint *)((int)pCVar1->adjacent_edge_indices + iVar4 + -8) = 0xffffffff;
      }
      else {
        *(int *)((int)pCVar1->adjacent_edge_indices + iVar4 + -8) = iVar6;
        iVar6 = iVar6 + 1;
      }
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + 0x4c4;
    } while (iVar1 < this_ptr->vertex_count);
  }
  local_14 = 0;
  if (0 < this_ptr->tri_count) {
    iVar6 = 0;
    do {
      if (*(int *)((int)this_ptr->tri_data->edge_perpendiculars + iVar6 + -0x14) == 0) {
        iVar1 = 0;
        do {
          iVar5 = iVar1 + 4;
          *(int *)((int)(this_ptr->tri_data->uv_coords + -2) + iVar1 + iVar6 + 4) =
               this_ptr->vertex_data
               [*(int *)((int)(this_ptr->tri_data->uv_coords + -2) + iVar1 + iVar6 + 4)].
               vertex_remapping_index;
          iVar1 = iVar5;
        } while (iVar5 != 0xc);
      }
      iVar6 = iVar6 + 0x8c;
      local_14 = local_14 + 1;
    } while (local_14 < this_ptr->tri_count);
  }
  iVar1 = 0;
  iVar6 = 0;
  if (0 < this_ptr->vertex_count) {
    local_20 = 0;
    local_1c = 0;
    do {
      pcVar5 = this_ptr->vertex_data->lod_workspace + local_1c + -0x10;
      if (-1 < *(int *)(pcVar5 + 0x3f4)) {
        if (iVar6 < iVar1) {
          pcVar6 = this_ptr->vertex_data->lod_workspace + local_20 + -0x10;
          for (iVar5 = 0x131; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(uint *)pcVar6 = *(uint *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar6 = pcVar6 + 4;
          }
          for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
            *pcVar6 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar6 = pcVar6 + 1;
          }
        }
        local_20 = local_20 + 0x4c4;
        iVar6 = iVar6 + 1;
      }
      iVar1 = iVar1 + 1;
      local_1c = local_1c + 0x4c4;
    } while (iVar1 < this_ptr->vertex_count);
  }
  this_ptr->vertex_count = iVar6;
  return;
}

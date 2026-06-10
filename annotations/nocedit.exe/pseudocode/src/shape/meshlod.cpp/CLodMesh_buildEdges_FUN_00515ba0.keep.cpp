// Name: shape_meshlod.cpp_CLodMesh_buildEdges_FUN_00515ba0
// Address: 00515ba0
// MANUAL RECONSTRUCTION
// Address Range: [[00515ba0, 00515c98]]
// Convention: __cdecl
// Signature: int __cdecl shape_meshlod_cpp_CLodMesh_buildEdges_FUN_00515ba0(CLodMesh *this_ptr)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodMesh_buildEdges_FUN_00515ba0(CLodMesh *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar6;
  int iVar4;
  CLodFace *face;
  int local_1c;
  int local_18;

  local_1c = 0;
  if (0 < this_ptr->vertex_count) {
    do {
      this_ptr->vertex_data[local_1c].adjacent_edge_count = 0;
      local_1c = local_1c + 1;
    } while (local_1c < this_ptr->vertex_count);
  }
  this_ptr->edge_count = 0;
  local_18 = 0;
  if (0 < this_ptr->tri_count) {
    local_1c = 0;
    do {
      face = this_ptr->tri_data + local_18;
      if (face->processed_flag == 0) {
        iVar4 = 0;
        do {
          iVar1 = iVar4 + 1;
          if (2 < iVar1) {
            iVar1 = 0;
          }
          iVar2 = shape_meshlod_cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0
                            (this_ptr,(&face->vertex_idx_0)[iVar4],(&face->vertex_idx_0)[iVar1],1);
          iVar6 = iVar4 + -1;
          if (iVar6 < 0) {
            iVar6 = 2;
          }
          (&face->edge_idx_0)[iVar6] = iVar2;
          iVar4 = iVar4 + 1;
          shape_meshlod_cpp_CLodEdge_addAdjacentFace_FUN_00515ca0
                    (this_ptr->edges_ptr + iVar2,local_18);
        } while (iVar4 < 3);
      }
      local_1c = local_1c + 0x8c;
      local_18 = local_18 + 1;
    } while (local_18 < this_ptr->tri_count);
  }
  return local_1c;
}

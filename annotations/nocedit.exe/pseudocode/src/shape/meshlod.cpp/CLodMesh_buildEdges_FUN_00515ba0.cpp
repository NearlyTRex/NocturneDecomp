// Name: shape_meshlod.cpp_CLodMesh_buildEdges_FUN_00515ba0
// Address: 00515ba0
// Address Range: [[00515ba0, 00515c98]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_CLodMesh_buildEdges_FUN_00515ba0(CLodMesh * this_ptr)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodMesh_buildEdges_FUN_00515ba0(CLodMesh *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_18;
  
  iVar1 = 0;
  if (0 < this_ptr->vertex_count) {
    iVar3 = 0;
    do {
      *(uint *)((int)this_ptr->vertex_data->adjacent_edge_indices + iVar3 + -4) = 0;
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x4c4;
    } while (iVar1 < this_ptr->vertex_count);
  }
  this_ptr->edge_count = 0;
  local_18 = 0;
  if (0 < this_ptr->tri_count) {
    iVar1 = 0;
    do {
      iVar3 = (int)this_ptr->tri_data->attribute_indices + iVar1;
      if (*(int *)(iVar3 + 0x40) == 0) {
        iVar4 = 0;
        iVar5 = iVar3;
        do {
          iVar1 = iVar4 + 1;
          if (2 < iVar1) {
            iVar1 = 0;
          }
          iVar2 = shape_meshlod_cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0
                            (this_ptr,*(int *)(iVar5 + 0x10),*(int *)(iVar1 * 4 + iVar3 + 0x10),1);
          iVar1 = iVar4 + -1;
          if (iVar1 < 0) {
            iVar1 = 2;
          }
          *(int *)(iVar1 * 4 + iVar3 + 0x34) = iVar2;
          iVar5 = iVar5 + 4;
          iVar4 = iVar4 + 1;
          iVar1 = local_18;
          shape_meshlod_cpp_CLodEdge_addAdjacentFace_FUN_00515ca0
                    (this_ptr->edges_ptr + iVar2,local_18);
        } while (iVar4 < 3);
      }
      iVar1 = iVar1 + 0x8c;
      local_18 = local_18 + 1;
    } while (local_18 < this_ptr->tri_count);
  }
  return iVar1;
}

// Name: shape_meshlod.cpp_CLodMesh_countNonCollapsibleEdgesForVertex_FUN_00516420
// Address: 00516420
// Address Range: [[00516420, 00516471]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_CLodMesh_countNonCollapsibleEdgesForVertex_FUN_00516420(CLodMesh * this_ptr, int vertex_index)

#include "nocturne.h"

int __cdecl
shape_meshlod_cpp_CLodMesh_countNonCollapsibleEdgesForVertex_FUN_00516420
          (CLodMesh *this_ptr,int vertex_index)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  for (iVar1 = 0; iVar1 < this_ptr->vertex_data[vertex_index].adjacent_edge_count; iVar1 = iVar1 + 1
      ) {
    if (this_ptr->edges_ptr
        [*(int *)((int)this_ptr->vertex_data[vertex_index].adjacent_edge_indices + iVar2)].
        collapse_viability != 0) {
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar2 + 4;
  }
  return iVar3;
}

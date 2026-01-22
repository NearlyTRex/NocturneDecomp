// Name: shape_meshlod.cpp_CLodMesh_findMinimumCostEdge_FUN_00519680
// Address: 00519680
// Address Range: [[00519680, 0051970e]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_CLodMesh_findMinimumCostEdge_FUN_00519680(CLodMesh * this_ptr)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodMesh_findMinimumCostEdge_FUN_00519680(CLodMesh *this_ptr)

{
  CLodEdge *pCVar1;
  int edge_index;
  int iVar2;
  uint local_20;
  uint uStack_1c;
  int local_18;
  
  edge_index = 0;
  local_20 = 9.9999999999999997e+34._0_4_;
  local_18 = -1;
  uStack_1c = 9.9999999999999997e+34._4_4_;
  if (0 < this_ptr->edge_count) {
    iVar2 = 0;
    do {
      if (*(int *)((int)this_ptr->edges_ptr->adjacent_tri_indices + iVar2 + -0x14) == 0) {
        if (*(int *)((int)this_ptr->edges_ptr->adjacent_tri_indices + iVar2 + -8) != 0) {
          shape_meshlod_cpp_CLodMesh_computeEdgeCollapseCost_FUN_00518910(this_ptr,edge_index);
        }
        pCVar1 = this_ptr->edges_ptr;
        if (*(double *)((int)pCVar1->adjacent_tri_indices + iVar2 + -0x20) <
            (double)CONCAT44(uStack_1c,local_20)) {
          local_20 = *(uint *)((int)pCVar1->adjacent_tri_indices + iVar2 + -0x20);
          uStack_1c = *(uint *)((int)pCVar1->adjacent_tri_indices + iVar2 + -0x1c);
          local_18 = edge_index;
        }
      }
      edge_index = edge_index + 1;
      iVar2 = iVar2 + 0xf0;
    } while (edge_index < this_ptr->edge_count);
  }
  return local_18;
}

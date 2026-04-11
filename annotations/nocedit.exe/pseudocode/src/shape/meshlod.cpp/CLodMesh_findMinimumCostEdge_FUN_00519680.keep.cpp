// Name: shape_meshlod.cpp_CLodMesh_findMinimumCostEdge_FUN_00519680
// Address: 00519680
// MANUAL RECONSTRUCTION
// Address Range: [[00519680, 0051970e]]
// Convention: __cdecl
// Signature: int __cdecl shape_meshlod_cpp_CLodMesh_findMinimumCostEdge_FUN_00519680(CLodMesh *this_ptr)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodMesh_findMinimumCostEdge_FUN_00519680(CLodMesh *this_ptr)

{
  int edge_index;
  double min_cost;
  int local_18;
  CLodEdge *edge;

  edge_index = 0;
  min_cost = 9.9999999999999997e+34;
  local_18 = -1;
  if (0 < this_ptr->edge_count) {
    do {
      edge = this_ptr->edges_ptr + edge_index;
      if (edge->deletion_flag == 0) {
        if (edge->needs_recalc_flag != 0) {
          shape_meshlod_cpp_CLodMesh_computeEdgeCollapseCost_FUN_00518910(this_ptr,edge_index);
        }
        if (edge->collapse_cost < min_cost) {
          min_cost = edge->collapse_cost;
          local_18 = edge_index;
        }
      }
      edge_index = edge_index + 1;
    } while (edge_index < this_ptr->edge_count);
  }
  return local_18;
}

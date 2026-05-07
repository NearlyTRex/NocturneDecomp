// Name: shape_superopt.cpp_CComplexPolygon_free_FUN_005c79f0
// Address: 005c79f0
// MANUAL RECONSTRUCTION
// Address Range: [[005c79f0, 005c7a89]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CComplexPolygon_free_FUN_005c79f0(CComplexPolygon *this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CComplexPolygon_free_FUN_005c79f0(CComplexPolygon *this_ptr)

{
  uint uVar2;

  this_ptr->polygon_count = 0;
  if (this_ptr->polygon_list != (CPoly **)0x0) {
    free(this_ptr->polygon_list);
  }
  this_ptr->polygon_list = (CPoly **)0x0;
  for (uVar2 = 0; uVar2 < (uint)this_ptr->edge_count; uVar2 = uVar2 + 1) {
    shape_memdbg_cpp_free_FUN_005fe659(this_ptr->edge_array[uVar2].edges);
  }
  this_ptr->edge_count = 0;
  if (this_ptr->edge_array != (SEdgeChainEntry *)0x0) {
    free(this_ptr->edge_array);
  }
  this_ptr->edge_array = (SEdgeChainEntry *)0x0;
  this_ptr->expanded_edge_count = 0;
  shape_memdbg_cpp_free_FUN_005fe659(this_ptr->expanded_edges);
  this_ptr->expanded_edges = (SExpandedEdge *)0x0;
  return;
}

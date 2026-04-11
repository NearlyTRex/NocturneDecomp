// Name: shape_superopt.cpp_CComplexPolygon_ctor_FUN_005c79a0
// Address: 005c79a0
// Address Range: [[005c79a0, 005c79cd]]
// Convention: __cdecl
// Signature: CComplexPolygon * __cdecl shape_superopt_cpp_CComplexPolygon_ctor_FUN_005c79a0(CComplexPolygon *this_ptr)

#include "nocturne.h"

CComplexPolygon * __cdecl shape_superopt_cpp_CComplexPolygon_ctor_FUN_005c79a0(CComplexPolygon *this_ptr)

{
  this_ptr->polygon_list = (CPoly **)0x0;
  this_ptr->edge_count = 0;
  this_ptr->edge_array = (SEdgeChainEntry *)0x0;
  this_ptr->expanded_edge_count = 0;
  this_ptr->expanded_edges = (SExpandedEdge *)0x0;
  this_ptr->polygon_count = 0;
  return this_ptr;
}

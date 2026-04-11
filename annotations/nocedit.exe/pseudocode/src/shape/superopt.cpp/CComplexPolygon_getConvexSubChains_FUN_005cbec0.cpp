// Name: shape_superopt.cpp_CComplexPolygon_getConvexSubChains_FUN_005cbec0
// Address: 005cbec0
// Address Range: [[005cbec0, 005cbed0]]
// Convention: __cdecl
// Signature: SEdgeChainEntry * __cdecl shape_superopt_cpp_CComplexPolygon_getConvexSubChains_FUN_005cbec0(CComplexPolygon *this_ptr,int *out_count)

#include "nocturne.h"

SEdgeChainEntry * __cdecl shape_superopt_cpp_CComplexPolygon_getConvexSubChains_FUN_005cbec0(CComplexPolygon *this_ptr,int *out_count)

{
  *out_count = this_ptr->edge_count;
  return this_ptr->edge_array;
}

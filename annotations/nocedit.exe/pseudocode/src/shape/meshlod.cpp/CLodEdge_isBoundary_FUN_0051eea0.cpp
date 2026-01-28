// Name: shape_meshlod.cpp_CLodEdge_isBoundary_FUN_0051eea0
// Address: 0051eea0
// Address Range: [[0051eea0, 0051eeb0]]
// Convention: __cdecl
// Signature: int __cdecl shape_meshlod_cpp_CLodEdge_isBoundary_FUN_0051eea0(CLodEdge *this_ptr)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodEdge_isBoundary_FUN_0051eea0(CLodEdge *this_ptr)

{
  return (uint)(this_ptr->adjacent_tri_count < 2);
}

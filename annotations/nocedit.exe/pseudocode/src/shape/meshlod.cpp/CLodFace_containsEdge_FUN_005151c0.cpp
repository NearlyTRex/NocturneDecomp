// Name: shape_meshlod.cpp_CLodFace_containsEdge_FUN_005151c0
// Address: 005151c0
// Address Range: [[005151c0, 005151df]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_CLodFace_containsEdge_FUN_005151c0(CLodFace * this_ptr, int edge_index)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodFace_containsEdge_FUN_005151c0(CLodFace *this_ptr,int edge_index)

{
  if (((edge_index != this_ptr->edge_idx_0) && (edge_index != this_ptr->edge_idx_1)) &&
     (edge_index != this_ptr->edge_idx_2)) {
    return 0;
  }
  return 1;
}

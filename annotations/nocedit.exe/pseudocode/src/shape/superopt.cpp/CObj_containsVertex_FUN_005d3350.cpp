// Name: shape_superopt.cpp_CObj_containsVertex_FUN_005d3350
// Address: 005d3350
// Address Range: [[005d3350, 005d337d]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_containsVertex_FUN_005d3350(CObj * this_ptr, CVert * vertex_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_containsVertex_FUN_005d3350(CObj *this_ptr,CVert *vertex_ptr)

{
  if ((this_ptr->vertex_data <= vertex_ptr) &&
     (vertex_ptr < this_ptr->vertex_data + this_ptr->vertex_count)) {
    return 1;
  }
  return 0;
}

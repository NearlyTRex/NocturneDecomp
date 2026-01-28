// Name: shape_superopt.cpp_CObj_containsPolygon_FUN_005d3400
// Address: 005d3400
// Address Range: [[005d3400, 005d3433]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CObj_containsPolygon_FUN_005d3400(CObj *this_ptr,CPoly *poly_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_containsPolygon_FUN_005d3400(CObj *this_ptr,CPoly *poly_ptr)

{
  if ((this_ptr->poly_array <= poly_ptr) && (poly_ptr < this_ptr->poly_array + this_ptr->poly_count)
     ) {
    return 1;
  }
  return 0;
}

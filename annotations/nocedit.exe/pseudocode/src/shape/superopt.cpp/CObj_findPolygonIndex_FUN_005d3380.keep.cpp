// Name: shape_superopt.cpp_CObj_findPolygonIndex_FUN_005d3380
// Address: 005d3380
// MANUAL RECONSTRUCTION
// Address Range: [[005d3380, 005d33c4]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CObj_findPolygonIndex_FUN_005d3380(CObj *this_ptr,CPoly *poly_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_findPolygonIndex_FUN_005d3380(CObj *this_ptr,CPoly *poly_ptr)

{
  if ((this_ptr->poly_array <= poly_ptr) &&
     (poly_ptr <= this_ptr->poly_array + this_ptr->poly_count + -1)) {
    return ((intptr_t)poly_ptr - (intptr_t)this_ptr->poly_array) / (int)sizeof(CPoly);
  }
  return -1;
}

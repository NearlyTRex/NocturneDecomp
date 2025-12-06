// Name: shape_superopt.cpp_CObj_reset_FUN_005d2280
// Address: 005d2280
// Address Range: [[005d2280, 005d22ad]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_reset_FUN_005d2280(CObj * this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_reset_FUN_005d2280(CObj *this_ptr)

{
  this_ptr->vertex_data = (CVert *)0x0;
  this_ptr->poly_count = 0;
  this_ptr->poly_array = (CPoly *)0x0;
  this_ptr->flags = 0;
  this_ptr->is_valid = 1;
  this_ptr->vertex_count = 0;
  return;
}

// Name: shape_superopt.cpp_CObj_isValid_FUN_005d22b0
// Address: 005d22b0
// Address Range: [[005d22b0, 005d22c6]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_isValid_FUN_005d22b0(CObj * this_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_isValid_FUN_005d22b0(CObj *this_ptr)

{
  if ((this_ptr->vertex_data != (CVert *)0x0) && (this_ptr->poly_array != (CPoly *)0x0)) {
    return this_ptr->is_valid;
  }
  return 0;
}

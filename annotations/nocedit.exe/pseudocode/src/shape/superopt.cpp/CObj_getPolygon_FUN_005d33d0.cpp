// Name: shape_superopt.cpp_CObj_getPolygon_FUN_005d33d0
// Address: 005d33d0
// Address Range: [[005d33d0, 005d33f6]]
// Convention: __cdecl
// Signature: CPoly * shape_superopt.cpp_CObj_getPolygon_FUN_005d33d0(CObj * this_ptr, uint index)

#include "nocturne.h"

CPoly * __cdecl shape_superopt_cpp_CObj_getPolygon_FUN_005d33d0(CObj *this_ptr,uint index)

{
  if ((uint)this_ptr->poly_count < index) {
    return (CPoly *)0x0;
  }
  return this_ptr->poly_array + index;
}

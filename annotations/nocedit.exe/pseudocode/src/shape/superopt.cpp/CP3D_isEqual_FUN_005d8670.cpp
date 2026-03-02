// Name: shape_superopt.cpp_CP3D_isEqual_FUN_005d8670
// Address: 005d8670
// Address Range: [[005d8670, 005d869f]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CP3D_isEqual_FUN_005d8670(CP3D *this_ptr,CP3D *other)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CP3D_isEqual_FUN_005d8670(CP3D *this_ptr,CP3D *other)

{
  if ((((this_ptr->impl).x == (other->impl).x) && ((this_ptr->impl).y == (other->impl).y)) &&
     ((this_ptr->impl).z == (other->impl).z)) {
    return 1;
  }
  return 0;
}

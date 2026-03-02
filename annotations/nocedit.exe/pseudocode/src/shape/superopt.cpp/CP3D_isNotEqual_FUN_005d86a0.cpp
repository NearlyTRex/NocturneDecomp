// Name: shape_superopt.cpp_CP3D_isNotEqual_FUN_005d86a0
// Address: 005d86a0
// Address Range: [[005d86a0, 005d86cf]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CP3D_isNotEqual_FUN_005d86a0(CP3D *this_ptr,CP3D *other)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CP3D_isNotEqual_FUN_005d86a0(CP3D *this_ptr,CP3D *other)

{
  if ((((this_ptr->impl).x == (other->impl).x) && ((this_ptr->impl).y == (other->impl).y)) &&
     ((this_ptr->impl).z == (other->impl).z)) {
    return 0;
  }
  return 1;
}

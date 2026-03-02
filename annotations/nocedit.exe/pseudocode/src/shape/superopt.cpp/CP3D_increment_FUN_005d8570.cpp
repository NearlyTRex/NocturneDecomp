// Name: shape_superopt.cpp_CP3D_increment_FUN_005d8570
// Address: 005d8570
// Address Range: [[005d8570, 005d8590]]
// Convention: __cdecl
// Signature: CP3D * __cdecl shape_superopt_cpp_CP3D_increment_FUN_005d8570(CP3D *this_ptr,CP3D *other)

#include "nocturne.h"

CP3D * __cdecl shape_superopt_cpp_CP3D_increment_FUN_005d8570(CP3D *this_ptr,CP3D *other)

{
  (this_ptr->impl).x = (other->impl).x + (this_ptr->impl).x;
  (this_ptr->impl).y = (other->impl).y + (this_ptr->impl).y;
  (this_ptr->impl).z = (other->impl).z + (this_ptr->impl).z;
  return this_ptr;
}

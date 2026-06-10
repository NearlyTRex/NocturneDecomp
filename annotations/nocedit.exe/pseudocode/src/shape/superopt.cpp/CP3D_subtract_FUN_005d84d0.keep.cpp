// Name: shape_superopt.cpp_CP3D_subtract_FUN_005d84d0
// Address: 005d84d0
// MANUAL RECONSTRUCTION
// Address Range: [[005d84d0, 005d8512]]
// Convention: __stack2_esi
// Signature: CP3D * __stack2_esi shape_superopt_cpp_CP3D_subtract_FUN_005d84d0(CP3D *this_ptr,CP3D *a,CP3D *b)

#include "nocturne.h"

CP3D * __stack2_esi shape_superopt_cpp_CP3D_subtract_FUN_005d84d0(CP3D *this_ptr,CP3D *a,CP3D *b)

{
  (b->impl).x = (this_ptr->impl).x - (a->impl).x;
  (b->impl).y = (this_ptr->impl).y - (a->impl).y;
  (b->impl).z = (this_ptr->impl).z - (a->impl).z;
  return b;
}

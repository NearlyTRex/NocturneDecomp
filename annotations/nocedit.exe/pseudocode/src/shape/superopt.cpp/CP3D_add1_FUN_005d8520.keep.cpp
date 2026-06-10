// Name: shape_superopt.cpp_CP3D_add1_FUN_005d8520
// Address: 005d8520
// MANUAL RECONSTRUCTION
// Address Range: [[005d8520, 005d8562]]
// Convention: __stack2_esi
// Signature: CP3D * __stack2_esi shape_superopt_cpp_CP3D_add1_FUN_005d8520(CP3D *this_ptr,CP3D *a,CP3D *b)

#include "nocturne.h"

CP3D * __stack2_esi shape_superopt_cpp_CP3D_add1_FUN_005d8520(CP3D *this_ptr,CP3D *a,CP3D *b)

{
  (b->impl).x = (this_ptr->impl).x + (a->impl).x;
  (b->impl).y = (this_ptr->impl).y + (a->impl).y;
  (b->impl).z = (this_ptr->impl).z + (a->impl).z;
  return b;
}

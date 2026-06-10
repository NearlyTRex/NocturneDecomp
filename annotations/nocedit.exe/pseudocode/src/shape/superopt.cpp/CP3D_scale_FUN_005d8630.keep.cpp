// Name: shape_superopt.cpp_CP3D_scale_FUN_005d8630
// Address: 005d8630
// MANUAL RECONSTRUCTION
// Address Range: [[005d8630, 005d866c]]
// Convention: __stackdbl_esi
// Signature: CP3D * __stackdbl_esi shape_superopt_cpp_CP3D_scale_FUN_005d8630(CP3D *this_ptr,double scalar,CP3D *result)

#include "nocturne.h"

CP3D * __stackdbl_esi shape_superopt_cpp_CP3D_scale_FUN_005d8630(CP3D *this_ptr,double scalar,CP3D *result)

{
  (result->impl).x = (this_ptr->impl).x * scalar;
  (result->impl).y = (this_ptr->impl).y * scalar;
  (result->impl).z = (this_ptr->impl).z * scalar;
  return result;
}

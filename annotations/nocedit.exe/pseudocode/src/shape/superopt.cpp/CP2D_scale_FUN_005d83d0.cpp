// Name: shape_superopt.cpp_CP2D_scale_FUN_005d83d0
// Address: 005d83d0
// Address Range: [[005d83d0, 005d8400] [00604ea5, 00604ec7]]
// Convention: __stackdbl_esi
// Signature: CP2D * __stackdbl_esi shape_superopt_cpp_CP2D_scale_FUN_005d83d0(CP2D *this_ptr,double scale,CP2D *result)

#include "nocturne.h"

CP2D * __stackdbl_esi shape_superopt_cpp_CP2D_scale_FUN_005d83d0(CP2D *this_ptr,double scale,CP2D *result)

{
  double dVar1;
  
  dVar1 = (this_ptr->impl).y;
  (result->impl).x = (this_ptr->impl).x * scale;
  (result->impl).y = dVar1 * scale;
  return result;
}

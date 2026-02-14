// Name: core_glass.cpp_CGlass_getBoundingBox_FUN_004ea030
// Address: 004ea030
// Address Range: [[004ea030, 004ea083]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_glass_cpp_CGlass_getBoundingBox_FUN_004ea030(CGlass *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_glass_cpp_CGlass_getBoundingBox_FUN_004ea030(CGlass *this_ptr,CBoundingBox3D *out_box)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (this_ptr->glass_size).x;
  fVar2 = (float)0.5;
  (out_box->min).y = -0.1;
  (out_box->min).x = -fVar1 * fVar2;
  (out_box->min).z = -(this_ptr->glass_size).z * fVar2;
  (out_box->max).x = (this_ptr->glass_size).x * fVar2;
  (out_box->max).y = (this_ptr->glass_size).y + (float)0.10000000000000001;
  (out_box->max).z = fVar2 * (this_ptr->glass_size).z;
  return out_box;
}

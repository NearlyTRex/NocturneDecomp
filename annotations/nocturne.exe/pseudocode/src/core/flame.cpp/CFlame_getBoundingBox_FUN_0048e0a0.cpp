// Name: core_flame.cpp_CFlame_getBoundingBox_FUN_0048e0a0
// Address: 0048e0a0
// Address Range: [[0048e0a0, 0048e0f3]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_flame_cpp_CFlame_getBoundingBox_FUN_0048e0a0(CFlame *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_flame_cpp_CFlame_getBoundingBox_FUN_0048e0a0(CFlame *this_ptr,CBoundingBox3D *out_box)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (this_ptr->flame_size).x;
  fVar2 = (float)0.5;
  (out_box->min).y = -0.1;
  (out_box->min).x = -fVar1 * fVar2;
  (out_box->min).z = -(this_ptr->flame_size).z * fVar2;
  (out_box->max).x = (this_ptr->flame_size).x * fVar2;
  (out_box->max).y = (this_ptr->flame_size).y + (float)0.10000000000000001;
  (out_box->max).z = fVar2 * (this_ptr->flame_size).z;
  return out_box;
}

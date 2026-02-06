// Name: core_flame.cpp_CFlame_getBoundingBox_FUN_004cac00
// Address: 004cac00
// Address Range: [[004cac00, 004cac53]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_flame_cpp_CFlame_getBoundingBox_FUN_004cac00(CFlame *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl
core_flame_cpp_CFlame_getBoundingBox_FUN_004cac00(CFlame *this_ptr,CBoundingBox3D *out_box)

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

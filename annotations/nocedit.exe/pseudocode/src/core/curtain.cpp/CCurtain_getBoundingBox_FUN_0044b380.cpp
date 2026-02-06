// Name: core_curtain.cpp_CCurtain_getBoundingBox_FUN_0044b380
// Address: 0044b380
// Address Range: [[0044b380, 0044b3d3]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_curtain_cpp_CCurtain_getBoundingBox_FUN_0044b380(CCurtain *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl
core_curtain_cpp_CCurtain_getBoundingBox_FUN_0044b380(CCurtain *this_ptr,CBoundingBox3D *out_box)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (this_ptr->curtain_size).x;
  fVar2 = (float)0.5;
  (out_box->min).y = -0.1;
  (out_box->min).x = -fVar1 * fVar2;
  (out_box->min).z = -(this_ptr->curtain_size).z * fVar2;
  (out_box->max).x = (this_ptr->curtain_size).x * fVar2;
  (out_box->max).y = (this_ptr->curtain_size).y + (float)0.10000000000000001;
  (out_box->max).z = fVar2 * (this_ptr->curtain_size).z;
  return out_box;
}

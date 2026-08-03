// Name: core_litecone.cpp_CLightCone_getBoundingBox_FUN_004c8290
// Address: 004c8290
// Address Range: [[004c8290, 004c82d6]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_litecone_cpp_CLightCone_getBoundingBox_FUN_004c8290(CLightCone *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_litecone_cpp_CLightCone_getBoundingBox_FUN_004c8290(CLightCone *this_ptr,CBoundingBox3D *out_box)

{
  float fVar1;
  
  fVar1 = ((float)18 / this_ptr->fov) * this_ptr->falloff;
  (out_box->min).z = 0.0;
  (out_box->max).x = fVar1;
  (out_box->max).y = fVar1;
  (out_box->min).x = -fVar1;
  (out_box->min).y = -fVar1;
  (out_box->max).z = this_ptr->falloff;
  return out_box;
}

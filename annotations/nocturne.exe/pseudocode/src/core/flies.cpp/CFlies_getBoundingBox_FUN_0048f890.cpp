// Name: core_flies.cpp_CFlies_getBoundingBox_FUN_0048f890
// Address: 0048f890
// Address Range: [[0048f890, 0048f8df]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_flies_cpp_CFlies_getBoundingBox_FUN_0048f890(CFlies *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_flies_cpp_CFlies_getBoundingBox_FUN_0048f890(CFlies *this_ptr,CBoundingBox3D *out_box)

{
  float fVar1;
  float fVar2;
  
  (out_box->min).y = 0.0;
  (out_box->max).y = (this_ptr->box_size).y;
  fVar1 = (float)-0.5;
  (out_box->min).x = (this_ptr->box_size).x * fVar1;
  fVar2 = (float)0.5;
  (out_box->max).x = (this_ptr->box_size).x * fVar2;
  (out_box->min).z = (this_ptr->box_size).z * fVar1;
  (out_box->max).z = fVar2 * (this_ptr->box_size).z;
  return out_box;
}

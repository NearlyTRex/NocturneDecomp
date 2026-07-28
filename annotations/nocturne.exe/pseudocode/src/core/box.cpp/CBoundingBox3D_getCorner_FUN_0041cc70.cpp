// Name: core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70
// Address: 0041cc70
// Address Range: [[0041cc70, 0041ccd8]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70(CBoundingBox3D *this_ptr,CVector3f *out_point,uint corner_index)

#include "nocturne.h"

CVector3f * __cdecl core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70(CBoundingBox3D *this_ptr,CVector3f *out_point,uint corner_index)

{
  float fVar1;
  
  if ((corner_index & 1) == 0) {
    fVar1 = (this_ptr->min).x;
  }
  else {
    fVar1 = (this_ptr->max).x;
  }
  out_point->x = fVar1;
  if ((corner_index & 2) == 0) {
    fVar1 = (this_ptr->min).y;
  }
  else {
    fVar1 = (this_ptr->max).y;
  }
  out_point->y = fVar1;
  if ((corner_index & 4) != 0) {
    out_point->z = (this_ptr->max).z;
    return out_point;
  }
  out_point->z = (this_ptr->min).z;
  return out_point;
}

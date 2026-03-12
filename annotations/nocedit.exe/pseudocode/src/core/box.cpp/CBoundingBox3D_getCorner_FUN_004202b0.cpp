// Name: core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
// Address: 004202b0
// Address Range: [[004202b0, 00420318]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(CBoundingBox3D *this_ptr,CVector3f *out_point,uint corner_index)

#include "nocturne.h"

CVector3f * __cdecl core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(CBoundingBox3D *this_ptr,CVector3f *out_point,uint corner_index)

{
  float fVar2;
  float fVar1;
  
  if ((corner_index & 1) == 0) {
    fVar2 = (this_ptr->min).x;
  }
  else {
    fVar2 = (this_ptr->max).x;
  }
  out_point->x = fVar2;
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

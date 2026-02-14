// Name: core_box.cpp_CBoundingBox3D_clampPoint_FUN_00421550
// Address: 00421550
// Address Range: [[00421550, 004215e1]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_box_cpp_CBoundingBox3D_clampPoint_FUN_00421550(CBoundingBox3D *this_ptr,CVector3f *out_point,CVector3f *in_point)

#include "nocturne.h"

CVector3f * __cdecl core_box_cpp_CBoundingBox3D_clampPoint_FUN_00421550(CBoundingBox3D *this_ptr,CVector3f *out_point,CVector3f *in_point)

{
  out_point->x = in_point->x;
  out_point->y = in_point->y;
  out_point->z = in_point->z;
  if (out_point->x < (this_ptr->min).x) {
    out_point->x = (this_ptr->min).x;
  }
  if ((this_ptr->max).x < out_point->x) {
    out_point->x = (this_ptr->max).x;
  }
  if (out_point->y < (this_ptr->min).y) {
    out_point->y = (this_ptr->min).y;
  }
  if ((this_ptr->max).y < out_point->y) {
    out_point->y = (this_ptr->max).y;
  }
  if (out_point->z < (this_ptr->min).z) {
    out_point->z = (this_ptr->min).z;
  }
  if (out_point->z <= (this_ptr->max).z) {
    return out_point;
  }
  out_point->z = (this_ptr->max).z;
  return out_point;
}

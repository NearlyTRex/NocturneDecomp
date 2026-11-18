// Name: core_box.cpp_CBoundingBox3D_clampPoint_FUN_0041ee30
// Address: 0041ee30
// Address Range: [[0041ee30, 0041eecc]]
// Convention: __stack2_esi
// Signature: CVector3f * __stack2_esi core_box_cpp_CBoundingBox3D_clampPoint_FUN_0041ee30(CBoundingBox3D *this_ptr,CVector3f *in_point,CVector3f *out_point)

#include "nocturne.h"

CVector3f * __stack2_esi core_box_cpp_CBoundingBox3D_clampPoint_FUN_0041ee30(CBoundingBox3D *this_ptr,CVector3f *in_point,CVector3f *out_point)

{
  float fVar1;
  float local_10;
  float local_c;
  float local_8;
  
  local_10 = in_point->x;
  local_c = in_point->y;
  local_8 = in_point->z;
  if (local_10 < (this_ptr->min).x) {
    local_10 = (this_ptr->min).x;
  }
  if ((this_ptr->max).x < local_10) {
    local_10 = (this_ptr->max).x;
  }
  if (local_c < (this_ptr->min).y) {
    local_c = (this_ptr->min).y;
  }
  if ((this_ptr->max).y < local_c) {
    local_c = (this_ptr->max).y;
  }
  if (local_8 < (this_ptr->min).z) {
    local_8 = (this_ptr->min).z;
  }
  if (local_8 <= (this_ptr->max).z) {
    out_point->x = local_10;
    out_point->y = local_c;
    out_point->z = local_8;
    return out_point;
  }
  fVar1 = (this_ptr->max).z;
  out_point->x = local_10;
  out_point->y = local_c;
  out_point->z = fVar1;
  return out_point;
}

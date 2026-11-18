// Name: core_box.cpp_CBoundingBox3D_getCorner_FUN_0041a600
// Address: 0041a600
// Address Range: [[0041a600, 0041a664]]
// Convention: __stack2_esi
// Signature: CVector3f * __stack2_esi core_box_cpp_CBoundingBox3D_getCorner_FUN_0041a600(CBoundingBox3D *this_ptr,uint corner_index,CVector3f *out_point)

#include "nocturne.h"

CVector3f * __stack2_esi core_box_cpp_CBoundingBox3D_getCorner_FUN_0041a600(CBoundingBox3D *this_ptr,uint corner_index,CVector3f *out_point)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((corner_index & 1) == 0) {
    fVar2 = (this_ptr->min).x;
  }
  else {
    fVar2 = (this_ptr->max).x;
  }
  if ((corner_index & 2) == 0) {
    fVar3 = (this_ptr->min).y;
  }
  else {
    fVar3 = (this_ptr->max).y;
  }
  if ((corner_index & 4) == 0) {
    fVar1 = (this_ptr->min).z;
  }
  else {
    fVar1 = (this_ptr->max).z;
  }
  out_point->x = fVar2;
  out_point->y = fVar3;
  out_point->z = fVar1;
  return out_point;
}

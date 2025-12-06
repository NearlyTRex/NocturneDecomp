// Name: core_box.cpp_CBoundingBox3D_expand_FUN_00420240
// Address: 00420240
// Address Range: [[00420240, 004202ab]]
// Convention: __cdecl
// Signature: void core_box.cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D * this_ptr, CVector3f * point)

#include "nocturne.h"

void __cdecl
core_box_cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D *this_ptr,CVector3f *point)

{
  if (point->x < (this_ptr->min).x) {
    (this_ptr->min).x = point->x;
  }
  if ((this_ptr->max).x < point->x) {
    (this_ptr->max).x = point->x;
  }
  if (point->y < (this_ptr->min).y) {
    (this_ptr->min).y = point->y;
  }
  if ((this_ptr->max).y < point->y) {
    (this_ptr->max).y = point->y;
  }
  if (point->z < (this_ptr->min).z) {
    (this_ptr->min).z = point->z;
  }
  if (point->z <= (this_ptr->max).z) {
    return;
  }
  (this_ptr->max).z = point->z;
  return;
}

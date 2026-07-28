// Name: core_box.cpp_CBoundingBox3D_doesBoxIntersect_FUN_0041dc20
// Address: 0041dc20
// Address Range: [[0041dc20, 0041dc6a]]
// Convention: __cdecl
// Signature: int __cdecl core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_0041dc20(CBoundingBox3D *this_ptr,CBoundingBox3D *other)

#include "nocturne.h"

int __cdecl core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_0041dc20(CBoundingBox3D *this_ptr,CBoundingBox3D *other)

{
  if (((((this_ptr->min).x <= (other->max).x) && ((other->min).x <= (this_ptr->max).x)) &&
      ((this_ptr->min).y <= (other->max).y)) &&
     ((((other->min).y <= (this_ptr->max).y && ((this_ptr->min).z <= (other->max).z)) &&
      ((other->min).z <= (this_ptr->max).z)))) {
    return 1;
  }
  return 0;
}

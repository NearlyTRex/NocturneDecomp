// Name: core_box.cpp_FUN_004215d0
// Address: 004215d0
// Address Range: [[004215c4, 004215c9] [004215d0, 0042161a]]
// Convention: __cdecl
// Signature: int __cdecl core_box_cpp_FUN_004215d0(CBoundingBox3D *this_ptr,CBoundingBox3D *other)

#include "nocturne.h"

int __cdecl core_box_cpp_FUN_004215d0(CBoundingBox3D *this_ptr,CBoundingBox3D *other)

{
  if (((((this_ptr->min).x <= (other->max).x) && ((other->min).x <= (this_ptr->max).x)) &&
      ((this_ptr->min).y <= (other->max).y)) &&
     ((((other->min).y <= (this_ptr->max).y && ((this_ptr->min).z <= (other->max).z)) &&
      ((other->min).z <= (this_ptr->max).z)))) {
    return 1;
  }
  return 0;
}

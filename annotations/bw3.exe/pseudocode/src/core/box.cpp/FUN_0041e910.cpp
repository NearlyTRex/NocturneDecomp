// Name: core_box.cpp_FUN_0041e910
// Address: 0041e910
// Address Range: [[0041e904, 0041e909] [0041e910, 0041e95a]]
// Convention: __cdecl
// Signature: int __cdecl core_box_cpp_FUN_0041e910(CBoundingBox3D *this_ptr,CBoundingBox3D *other)

#include "nocturne.h"

int __cdecl core_box_cpp_FUN_0041e910(CBoundingBox3D *this_ptr,CBoundingBox3D *other)

{
  if (((((this_ptr->min).x <= (other->max).x) && ((other->min).x <= (this_ptr->max).x)) &&
      ((this_ptr->min).y <= (other->max).y)) &&
     ((((other->min).y <= (this_ptr->max).y && ((this_ptr->min).z <= (other->max).z)) &&
      ((other->min).z <= (this_ptr->max).z)))) {
    return 1;
  }
  return 0;
}

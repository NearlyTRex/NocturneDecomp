// Name: core_box.cpp_CBoundingBox3D_isInverted_FUN_00420fe0
// Address: 00420fe0
// Address Range: [[00420fe0, 0042100c]]
// Convention: __cdecl
// Signature: int __cdecl core_box_cpp_CBoundingBox3D_isInverted_FUN_00420fe0(CBoundingBox3D *this_ptr)

#include "nocturne.h"

int __cdecl core_box_cpp_CBoundingBox3D_isInverted_FUN_00420fe0(CBoundingBox3D *this_ptr)

{
  if ((((this_ptr->min).x <= (this_ptr->max).x) && ((this_ptr->min).y <= (this_ptr->max).y)) &&
     ((this_ptr->min).z <= (this_ptr->max).z)) {
    return 0;
  }
  return 1;
}

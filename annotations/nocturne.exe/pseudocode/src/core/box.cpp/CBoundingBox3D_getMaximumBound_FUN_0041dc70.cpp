// Name: core_box.cpp_CBoundingBox3D_getMaximumBound_FUN_0041dc70
// Address: 0041dc70
// Address Range: [[0041dc70, 0041dcb6]]
// Convention: __cdecl
// Signature: float __cdecl core_box_cpp_CBoundingBox3D_getMaximumBound_FUN_0041dc70(CBoundingBox3D *this_ptr)

#include "nocturne.h"

float __cdecl core_box_cpp_CBoundingBox3D_getMaximumBound_FUN_0041dc70(CBoundingBox3D *this_ptr)

{
  float fVar1;
  
  if (((this_ptr->max).x <= (this_ptr->max).y) || ((this_ptr->max).x <= (this_ptr->max).z)) {
    if ((this_ptr->max).y <= (this_ptr->max).z) {
      return (this_ptr->max).z;
    }
    fVar1 = (this_ptr->max).y;
  }
  else {
    fVar1 = (this_ptr->max).x;
  }
  return fVar1;
}

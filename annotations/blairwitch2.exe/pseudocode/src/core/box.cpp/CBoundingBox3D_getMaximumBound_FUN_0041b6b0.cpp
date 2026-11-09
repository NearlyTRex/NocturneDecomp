// Name: core_box.cpp_CBoundingBox3D_getMaximumBound_FUN_0041b6b0
// Address: 0041b6b0
// Address Range: [[0041b6b0, 0041b6f6]]
// Convention: __cdecl
// Signature: float __cdecl core_box_cpp_CBoundingBox3D_getMaximumBound_FUN_0041b6b0(CBoundingBox3D *this_ptr)

#include "nocturne.h"

float __cdecl core_box_cpp_CBoundingBox3D_getMaximumBound_FUN_0041b6b0(CBoundingBox3D *this_ptr)

{
  float fVar1;
  
  if ((*(float *)&this_ptr->field_0xc <= *(float *)&this_ptr->field_0x10) ||
     (*(float *)&this_ptr->field_0xc <= *(float *)&this_ptr->field_0x14)) {
    if (*(float *)&this_ptr->field_0x10 <= *(float *)&this_ptr->field_0x14) {
      return *(float *)&this_ptr->field_0x14;
    }
    fVar1 = *(float *)&this_ptr->field_0x10;
  }
  else {
    fVar1 = *(float *)&this_ptr->field_0xc;
  }
  return fVar1;
}

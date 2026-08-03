// Name: core_manpuz.cpp_CMansionPuzzleCircle_getBoundingBox_FUN_004c9e00
// Address: 004c9e00
// Address Range: [[004c9e00, 004c9e3f]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_manpuz_cpp_CMansionPuzzleCircle_getBoundingBox_FUN_004c9e00(CMansionPuzzleCircle *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_manpuz_cpp_CMansionPuzzleCircle_getBoundingBox_FUN_004c9e00(CMansionPuzzleCircle *this_ptr,CBoundingBox3D *out_box)

{
  float fVar1;
  
  fVar1 = this_ptr->bbox_extent;
  (out_box->min).y = 0.0;
  (out_box->min).x = -fVar1;
  (out_box->min).z = -this_ptr->bbox_extent;
  (out_box->max).x = this_ptr->bbox_extent;
  (out_box->max).y = this_ptr->bbox_height;
  (out_box->max).z = this_ptr->bbox_extent;
  return out_box;
}

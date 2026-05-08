// Name: core_marquee.cpp_CMarquee_getBoundingBox_FUN_0050c380
// Address: 0050c380
// MANUAL RECONSTRUCTION
// Address Range: [[0050c380, 0050c3d2]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_marquee_cpp_CMarquee_getBoundingBox_FUN_0050c380(CMarquee *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_marquee_cpp_CMarquee_getBoundingBox_FUN_0050c380(CMarquee *this_ptr,CBoundingBox3D *out_box)

{
  if (out_box != &this_ptr->bounding_box) {
    out_box->min = (this_ptr->bounding_box).min;
    out_box->max = (this_ptr->bounding_box).max;
  }
  return out_box;
}

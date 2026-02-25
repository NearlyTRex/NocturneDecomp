// Name: core_marquee.cpp_CMarquee_getBoundingBox_FUN_0050c380
// Address: 0050c380
// Address Range: [[0050c380, 0050c3d2]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_marquee_cpp_CMarquee_getBoundingBox_FUN_0050c380(CMarquee *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_marquee_cpp_CMarquee_getBoundingBox_FUN_0050c380(CMarquee *this_ptr,CBoundingBox3D *out_box)

{
  if (out_box == &this_ptr->bounding_box) {
    if (&out_box->max == &(this_ptr->bounding_box).max) {
      return out_box;
    }
  }
  else {
    (out_box->min).x = (this_ptr->bounding_box).min.x;
    (out_box->min).y = (this_ptr->bounding_box).min.y;
    (out_box->min).z = (this_ptr->bounding_box).min.z;
    if (&out_box->max == &(this_ptr->bounding_box).max) {
      return out_box;
    }
  }
  (out_box->max).x = (this_ptr->bounding_box).max.x;
  (out_box->max).y = (this_ptr->bounding_box).max.y;
  (out_box->max).z = (this_ptr->bounding_box).max.z;
  return out_box;
}

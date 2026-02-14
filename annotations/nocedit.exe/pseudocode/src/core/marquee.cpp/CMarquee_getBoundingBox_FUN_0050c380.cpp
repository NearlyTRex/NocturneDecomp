// Name: core_marquee.cpp_CMarquee_getBoundingBox_FUN_0050c380
// Address: 0050c380
// Address Range: [[0050c380, 0050c3d2]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_marquee_cpp_CMarquee_getBoundingBox_FUN_0050c380(CMarquee *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_marquee_cpp_CMarquee_getBoundingBox_FUN_0050c380(CMarquee *this_ptr,CBoundingBox3D *out_box)

{
  if (out_box == (CBoundingBox3D *)this_ptr->unk2) {
    if (&out_box->max == (CVector3f *)(this_ptr->unk2 + 0xc)) {
      return out_box;
    }
  }
  else {
    (out_box->min).x = *(float *)this_ptr->unk2;
    (out_box->min).y = *(float *)(this_ptr->unk2 + 4);
    (out_box->min).z = *(float *)(this_ptr->unk2 + 8);
    if (&out_box->max == (CVector3f *)(this_ptr->unk2 + 0xc)) {
      return out_box;
    }
  }
  (out_box->max).x = *(float *)(this_ptr->unk2 + 0xc);
  (out_box->max).y = *(float *)(this_ptr->unk2 + 0x10);
  (out_box->max).z = *(float *)(this_ptr->unk2 + 0x14);
  return out_box;
}

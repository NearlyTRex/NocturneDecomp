// Name: core_hero.cpp_CHeroPlaceholder_getBoundingBox_FUN_004f3d20
// Address: 004f3d20
// Address Range: [[004f3d20, 004f3d4d]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_hero_cpp_CHeroPlaceholder_getBoundingBox_FUN_004f3d20(CHeroPlaceholder *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_hero_cpp_CHeroPlaceholder_getBoundingBox_FUN_004f3d20(CHeroPlaceholder *this_ptr,CBoundingBox3D *out_box)

{
  (out_box->min).y = 0.0;
  (out_box->min).z = -1.0;
  (out_box->max).x = 1.0;
  (out_box->max).y = 6.0;
  (out_box->max).z = 1.0;
  (out_box->min).x = -1.0;
  return out_box;
}

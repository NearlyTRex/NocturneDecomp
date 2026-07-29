// Name: core_hero.cpp_CHeroPlaceholder_getBoundingBox_FUN_004b6020
// Address: 004b6020
// Address Range: [[004b6020, 004b604d]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_hero_cpp_CHeroPlaceholder_getBoundingBox_FUN_004b6020(CHeroPlaceholder *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_hero_cpp_CHeroPlaceholder_getBoundingBox_FUN_004b6020(CHeroPlaceholder *this_ptr,CBoundingBox3D *out_box)

{
  (out_box->min).y = 0.0;
  (out_box->min).z = -1.0;
  (out_box->max).x = 1.0;
  (out_box->max).y = 6.0;
  (out_box->max).z = 1.0;
  (out_box->min).x = -1.0;
  return out_box;
}

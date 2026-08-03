// Name: core_charactr.cpp_CCharacter_getBoundingBox_FUN_00427a20
// Address: 00427a20
// Address Range: [[00427a20, 00427a5e]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_charactr_cpp_CCharacter_getBoundingBox_FUN_00427a20(CCharacter *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_charactr_cpp_CCharacter_getBoundingBox_FUN_00427a20(CCharacter *this_ptr,CBoundingBox3D *out_box)

{
  (out_box->min).x = (this_ptr->cached_bounding_box).min.x;
  (out_box->min).y = (this_ptr->cached_bounding_box).min.y;
  (out_box->min).z = (this_ptr->cached_bounding_box).min.z;
  (out_box->max).x = (this_ptr->cached_bounding_box).max.x;
  (out_box->max).y = (this_ptr->cached_bounding_box).max.y;
  (out_box->max).z = (this_ptr->cached_bounding_box).max.z;
  return out_box;
}

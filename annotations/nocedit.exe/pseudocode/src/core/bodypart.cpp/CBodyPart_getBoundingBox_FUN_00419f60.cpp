// Name: core_bodypart.cpp_CBodyPart_getBoundingBox_FUN_00419f60
// Address: 00419f60
// Address Range: [[00419f60, 00419f9e]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_bodypart_cpp_CBodyPart_getBoundingBox_FUN_00419f60(CBodyPart *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl
core_bodypart_cpp_CBodyPart_getBoundingBox_FUN_00419f60(CBodyPart *this_ptr,CBoundingBox3D *out_box)

{
  (out_box->min).x = (this_ptr->bounding_box).min.x;
  (out_box->min).y = (this_ptr->bounding_box).min.y;
  (out_box->min).z = (this_ptr->bounding_box).min.z;
  (out_box->max).x = (this_ptr->bounding_box).max.x;
  (out_box->max).y = (this_ptr->bounding_box).max.y;
  (out_box->max).z = (this_ptr->bounding_box).max.z;
  return out_box;
}

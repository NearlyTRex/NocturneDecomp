// Name: core_bodypart.cpp_CBodyPart_getBoundingBox_FUN_00419f60
// Address: 00419f60
// MANUAL RECONSTRUCTION
// Address Range: [[00419f60, 00419f9e]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_bodypart_cpp_CBodyPart_getBoundingBox_FUN_00419f60(CBodyPart *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_bodypart_cpp_CBodyPart_getBoundingBox_FUN_00419f60(CBodyPart *this_ptr,CBoundingBox3D *out_box)

{
  *out_box = this_ptr->bounding_box;
  return out_box;
}

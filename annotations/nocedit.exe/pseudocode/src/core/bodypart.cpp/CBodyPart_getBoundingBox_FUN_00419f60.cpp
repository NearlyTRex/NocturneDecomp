// Name: core_bodypart.cpp_CBodyPart_getBoundingBox_FUN_00419f60
// Address: 00419f60
// Address Range: [[00419f60, 00419f9e]]
// Convention: __cdecl
// Signature: CBoundingBox3D * core_bodypart.cpp_CBodyPart_getBoundingBox_FUN_00419f60(CBodyPart * this_ptr, CBoundingBox3D * out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl
core_bodypart_cpp_CBodyPart_getBoundingBox_FUN_00419f60(CBodyPart *this_ptr,CBoundingBox3D *out_box)

{
  (out_box->min).x = *(float *)(this_ptr->field1_0x158 + 4);
  (out_box->min).y = *(float *)(this_ptr->field1_0x158 + 8);
  (out_box->min).z = *(float *)(this_ptr->field1_0x158 + 0xc);
  (out_box->max).x = *(float *)(this_ptr->field1_0x158 + 0x10);
  (out_box->max).y = *(float *)(this_ptr->field1_0x158 + 0x14);
  (out_box->max).z = *(float *)(this_ptr->field1_0x158 + 0x18);
  return out_box;
}

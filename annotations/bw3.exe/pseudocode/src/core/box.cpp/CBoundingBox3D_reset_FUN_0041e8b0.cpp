// Name: core_box.cpp_CBoundingBox3D_reset_FUN_0041e8b0
// Address: 0041e8b0
// Address Range: [[0041e8b0, 0041e8d6]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBoundingBox3D_reset_FUN_0041e8b0(CBoundingBox3D *this_ptr)

#include "nocturne.h"

void __cdecl core_box_cpp_CBoundingBox3D_reset_FUN_0041e8b0(CBoundingBox3D *this_ptr)

{
  *(uint *)&this_ptr->field_0x8 = 0x7cf0bdc2;
  *(uint *)&this_ptr->field_0x14 = 0xfcf0bdc2;
  *(uint *)&this_ptr->field_0x4 = *(uint *)&this_ptr->field_0x8;
  *(uint *)&this_ptr->field_0x10 = *(uint *)&this_ptr->field_0x14;
  *(uint *)this_ptr = *(uint *)&this_ptr->field_0x4;
  *(uint *)&this_ptr->field_0xc = *(uint *)&this_ptr->field_0x14;
  return;
}

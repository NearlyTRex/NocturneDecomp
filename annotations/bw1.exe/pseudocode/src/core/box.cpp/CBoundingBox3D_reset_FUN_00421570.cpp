// Name: core_box.cpp_CBoundingBox3D_reset_FUN_00421570
// Address: 00421570
// Address Range: [[00421570, 00421596]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBoundingBox3D_reset_FUN_00421570(CBoundingBox3D *this_ptr)

#include "nocturne.h"

void __cdecl core_box_cpp_CBoundingBox3D_reset_FUN_00421570(CBoundingBox3D *this_ptr)

{
  *(uint *)&this_ptr->field_0x8 = 0x7cf0bdc2;
  *(uint *)&this_ptr->field_0x14 = 0xfcf0bdc2;
  *(uint *)&this_ptr->field_0x4 = *(uint *)&this_ptr->field_0x8;
  *(uint *)&this_ptr->field_0x10 = *(uint *)&this_ptr->field_0x14;
  *(uint *)this_ptr = *(uint *)&this_ptr->field_0x4;
  *(uint *)&this_ptr->field_0xc = *(uint *)&this_ptr->field_0x14;
  return;
}

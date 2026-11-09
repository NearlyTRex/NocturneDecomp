// Name: core_box.cpp_CBoundingBox3D_expand_FUN_00420500
// Address: 00420500
// Address Range: [[00420500, 0042056b]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBoundingBox3D_expand_FUN_00420500(CBoundingBox3D *this_ptr,CVector3f *point)

#include "nocturne.h"

void __cdecl core_box_cpp_CBoundingBox3D_expand_FUN_00420500(CBoundingBox3D *this_ptr,CVector3f *point)

{
  if (*(float *)point < *(float *)this_ptr) {
    *(uint *)this_ptr = *(uint *)point;
  }
  if (*(float *)&this_ptr->field_0xc < *(float *)point) {
    *(uint *)&this_ptr->field_0xc = *(uint *)point;
  }
  if (*(float *)&point->field_0x4 < *(float *)&this_ptr->field_0x4) {
    *(uint *)&this_ptr->field_0x4 = *(uint *)&point->field_0x4;
  }
  if (*(float *)&this_ptr->field_0x10 < *(float *)&point->field_0x4) {
    *(uint *)&this_ptr->field_0x10 = *(uint *)&point->field_0x4;
  }
  if (*(float *)&point->field_0x8 < *(float *)&this_ptr->field_0x8) {
    *(uint *)&this_ptr->field_0x8 = *(uint *)&point->field_0x8;
  }
  if (*(float *)&point->field_0x8 <= *(float *)&this_ptr->field_0x14) {
    return;
  }
  *(uint *)&this_ptr->field_0x14 = *(uint *)&point->field_0x8;
  return;
}

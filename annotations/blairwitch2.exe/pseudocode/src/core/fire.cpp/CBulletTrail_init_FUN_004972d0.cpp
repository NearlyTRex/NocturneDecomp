// Name: core_fire.cpp_CBulletTrail_init_FUN_004972d0
// Address: 004972d0
// Address Range: [[004972d0, 00497322]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletTrail_init_FUN_004972d0(CBulletTrail *this_ptr,CVector3f *start_position,CVector3f *end_position,CKeyFramedModel *model_ptr,float segment_length)

#include "nocturne.h"

void __cdecl core_fire_cpp_CBulletTrail_init_FUN_004972d0(CBulletTrail *this_ptr,CVector3f *start_position,CVector3f *end_position,CKeyFramedModel *model_ptr,float segment_length)

{
  if (this_ptr != (CBulletTrail *)start_position) {
    *(uint *)this_ptr = *(uint *)start_position;
    *(uint *)&this_ptr->field_0x4 = *(uint *)&start_position->field_0x4;
    *(uint *)&this_ptr->field_0x8 = *(uint *)&start_position->field_0x8;
  }
  if ((CVector3f *)&this_ptr->field_0xc != end_position) {
    *(uint *)&this_ptr->field_0xc = *(uint *)end_position;
    *(uint *)&this_ptr->field_0x10 = *(uint *)&end_position->field_0x4;
    *(uint *)&this_ptr->field_0x14 = *(uint *)&end_position->field_0x8;
  }
  *(uint *)&this_ptr->field_0x20 = 2;
  *(CKeyFramedModel **)&this_ptr->field_0x18 = model_ptr;
  *(float *)&this_ptr->field_0x1c = segment_length;
  return;
}

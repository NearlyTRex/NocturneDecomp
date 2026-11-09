// Name: core_fire.cpp_CLightningBolt_activate_FUN_0049aaf0
// Address: 0049aaf0
// Address Range: [[0049aaf0, 0049ab2e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CLightningBolt_activate_FUN_0049aaf0(CLightningBolt *this_ptr,CVector3f *start_position,float start_width,float end_width )

#include "nocturne.h"

void __cdecl core_fire_cpp_CLightningBolt_activate_FUN_0049aaf0(CLightningBolt *this_ptr,CVector3f *start_position,float start_width,float end_width )

{
  if ((CVector3f *)&this_ptr->field_0x4 != start_position) {
    *(uint *)&this_ptr->field_0x4 = *(uint *)start_position;
    *(uint *)&this_ptr->field_0x8 = *(uint *)&start_position->field_0x4;
    *(uint *)&this_ptr->field_0xc = *(uint *)&start_position->field_0x8;
  }
  *(uint *)&this_ptr->field_0x14 = 0x3e800000;
  *(uint *)this_ptr = 0;
  *(float *)&this_ptr->field_0x10 = start_width;
  *(float *)&this_ptr->field_0x18 = end_width;
  return;
}

// Name: core_fire.cpp_CLightningBolt_activateDirectional_FUN_004b34d0
// Address: 004b34d0
// Address Range: [[004b34d0, 004b352d]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CLightningBolt_activateDirectional_FUN_004b34d0(CLightningBolt *this_ptr,CVector3f *start_position,CVector3f *end_position,float end_width,float end_spread)

#include "nocturne.h"

void __cdecl core_fire_cpp_CLightningBolt_activateDirectional_FUN_004b34d0(CLightningBolt *this_ptr,CVector3f *start_position,CVector3f *end_position,float end_width,float end_spread)

{
  if ((CVector3f *)&this_ptr->field_0x4 != start_position) {
    *(uint *)&this_ptr->field_0x4 = *(uint *)start_position;
    *(uint *)&this_ptr->field_0x8 = *(uint *)&start_position->field_0x4;
    *(uint *)&this_ptr->field_0xc = *(uint *)&start_position->field_0x8;
  }
  if ((CVector3f *)&this_ptr->field_0x1c != end_position) {
    *(uint *)&this_ptr->field_0x1c = *(uint *)end_position;
    *(uint *)&this_ptr->field_0x20 = *(uint *)&end_position->field_0x4;
    *(uint *)&this_ptr->field_0x24 = *(uint *)&end_position->field_0x8;
  }
  *(uint *)this_ptr = 1;
  *(uint *)&this_ptr->field_0x14 = 0x3e800000;
  *(float *)&this_ptr->field_0x18 = end_width;
  *(float *)&this_ptr->field_0x28 = end_spread;
  return;
}

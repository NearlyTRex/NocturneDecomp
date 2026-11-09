// Name: core_fire.cpp_CSmokeParticle_init_FUN_00496d60
// Address: 00496d60
// Address Range: [[00496d60, 00496df2]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CSmokeParticle_init_FUN_00496d60(CSmokeParticle *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence,int alpha_value)

#include "nocturne.h"

void __cdecl core_fire_cpp_CSmokeParticle_init_FUN_00496d60(CSmokeParticle *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence,int alpha_value)

{
  byte *puVar1;
  uint uVar2;
  
  if ((CVector3f *)&this_ptr->field_0x4 != position) {
    *(uint *)&this_ptr->field_0x4 = *(uint *)position;
    *(uint *)&this_ptr->field_0x8 = *(uint *)&position->field_0x4;
    *(uint *)&this_ptr->field_0xc = *(uint *)&position->field_0x8;
  }
  puVar1 = &this_ptr->field_0x1c;
  if (wind_influence == (CVector3f *)0x0) {
    *(uint *)&this_ptr->field_0x24 = 0;
    *(uint *)&this_ptr->field_0x20 = *(uint *)&this_ptr->field_0x24;
    *(uint *)puVar1 = *(uint *)&this_ptr->field_0x20;
  }
  else if ((CVector3f *)puVar1 != wind_influence) {
    *(uint *)puVar1 = *(uint *)wind_influence;
    *(uint *)&this_ptr->field_0x20 = *(uint *)&wind_influence->field_0x4;
    *(uint *)&this_ptr->field_0x24 = *(uint *)&wind_influence->field_0x8;
  }
  *(uint *)&this_ptr->field_0x18 = 0;
  *(float *)&this_ptr->field_0x14 = drag_factor;
  uVar2 = core_actor_cpp_FUN_0040ce40(0x3f733333,0x3f866666);
  *(uint *)this_ptr = 1;
  *(uint *)&this_ptr->field_0x10 = uVar2;
  *(int *)&this_ptr->field_0x28 = alpha_value;
  return;
}

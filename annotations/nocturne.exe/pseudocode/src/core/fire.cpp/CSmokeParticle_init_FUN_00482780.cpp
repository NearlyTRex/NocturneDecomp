// Name: core_fire.cpp_CSmokeParticle_init_FUN_00482780
// Address: 00482780
// Address Range: [[00482780, 00482812]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CSmokeParticle_init_FUN_00482780(CSmokeParticle *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence,int alpha_value)

#include "nocturne.h"

void __cdecl core_fire_cpp_CSmokeParticle_init_FUN_00482780(CSmokeParticle *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence,int alpha_value)

{
  CVector3f *pCVar1;
  float fVar2;
  
  if (&this_ptr->position != position) {
    (this_ptr->position).x = position->x;
    (this_ptr->position).y = position->y;
    (this_ptr->position).z = position->z;
  }
  pCVar1 = &this_ptr->wind_influence;
  if (wind_influence == (CVector3f *)0x0) {
    (this_ptr->wind_influence).z = 0.0;
    (this_ptr->wind_influence).y = (this_ptr->wind_influence).z;
    pCVar1->x = (this_ptr->wind_influence).y;
  }
  else if (pCVar1 != wind_influence) {
    pCVar1->x = wind_influence->x;
    (this_ptr->wind_influence).y = wind_influence->y;
    (this_ptr->wind_influence).z = wind_influence->z;
  }
  this_ptr->age = 0.0;
  this_ptr->drag_factor = drag_factor;
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.95,1.05);
  this_ptr->active = 1;
  this_ptr->vertical_accel = fVar2;
  this_ptr->alpha_value = alpha_value;
  return;
}

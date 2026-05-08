// Name: core_fire.cpp_CSmokeParticle_init_FUN_004bf2f0
// Address: 004bf2f0
// MANUAL RECONSTRUCTION
// Address Range: [[004bf2f0, 004bf382]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CSmokeParticle_init_FUN_004bf2f0(CSmokeParticle *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence,int alpha_value)

#include "nocturne.h"

void __cdecl core_fire_cpp_CSmokeParticle_init_FUN_004bf2f0(CSmokeParticle *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence,int alpha_value)

{
  float fVar2;
  CVector3f *pCVar1;
  
  if (&this_ptr->position != position) {
    this_ptr->position = *position;
  }
  pCVar1 = &this_ptr->wind_influence;
  if (wind_influence == (CVector3f *)0x0) {
    pCVar1->x = 0.0f;
    pCVar1->y = 0.0f;
    pCVar1->z = 0.0f;
  }
  else if (pCVar1 != wind_influence) {
    *pCVar1 = *wind_influence;
  }
  this_ptr->age = 0.0;
  this_ptr->drag_factor = drag_factor;
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.95,1.05);
  this_ptr->active = 1;
  this_ptr->vertical_accel = fVar2;
  this_ptr->alpha_value = alpha_value;
  return;
}

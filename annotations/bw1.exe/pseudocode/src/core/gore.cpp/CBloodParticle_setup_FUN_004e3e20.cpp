// Name: core_gore.cpp_CBloodParticle_setup_FUN_004e3e20
// Address: 004e3e20
// Address Range: [[004e3e20, 004e3e4f]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodParticle_setup_FUN_004e3e20(CBloodParticle *this_ptr,CVector3f *position,CVector3f *velocity,EBloodType blood_type)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodParticle_setup_FUN_004e3e20(CBloodParticle *this_ptr,CVector3f *position,CVector3f *velocity,EBloodType blood_type)

{
  int iVar1;
  
  this_ptr->blood_type = blood_type;
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,0xf);
  this_ptr->texture_index = iVar1;
  core_particle_cpp_CParticle_setup_FUN_00532160(&this_ptr->base,position,velocity);
  return;
}

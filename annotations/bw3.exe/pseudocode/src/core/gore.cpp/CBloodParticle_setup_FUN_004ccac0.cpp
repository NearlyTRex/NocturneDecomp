// Name: core_gore.cpp_CBloodParticle_setup_FUN_004ccac0
// Address: 004ccac0
// Address Range: [[004ccac0, 004ccaef]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodParticle_setup_FUN_004ccac0(CBloodParticle *this_ptr,CVector3f *position,CVector3f *velocity,EBloodType blood_type)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodParticle_setup_FUN_004ccac0(CBloodParticle *this_ptr,CVector3f *position,CVector3f *velocity,EBloodType blood_type)

{
  int iVar1;
  
  this_ptr->blood_type = blood_type;
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0xf);
  this_ptr->texture_index = iVar1;
  core_particle_cpp_CParticle_setup_FUN_00509e40((CParticle *)this_ptr,position,velocity);
  return;
}

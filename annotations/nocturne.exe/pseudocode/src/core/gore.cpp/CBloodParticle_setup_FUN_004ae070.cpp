// Name: core_gore.cpp_CBloodParticle_setup_FUN_004ae070
// Address: 004ae070
// Address Range: [[004ae070, 004ae09f]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodParticle_setup_FUN_004ae070(CBloodParticle *this_ptr,CVector3f *position,CVector3f *velocity,int blood_type)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodParticle_setup_FUN_004ae070(CBloodParticle *this_ptr,CVector3f *position,CVector3f *velocity,int blood_type)

{
  int iVar1;
  
  this_ptr->blood_type = blood_type;
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040de00(0,0xf);
  this_ptr->texture_index = iVar1;
  core_particle_cpp_CParticle_setup_FUN_004ef040(&this_ptr->base,position,velocity);
  return;
}

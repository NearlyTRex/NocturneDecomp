// Name: core_gore.cpp_FUN_004c7460
// Address: 004c7460
// Address Range: [[004c7460, 004c748f]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_FUN_004c7460(CBloodParticle *this_ptr,CVector3f *position,CVector3f *velocity,EBloodType blood_type)

#include "nocturne.h"

void __cdecl core_gore_cpp_FUN_004c7460(CBloodParticle *this_ptr,CVector3f *position,CVector3f *velocity,EBloodType blood_type)

{
  int iVar1;
  
  *(EBloodType *)&this_ptr->field_0x40 = blood_type;
  iVar1 = core_actor_cpp_FUN_0040cfc0(0,0xf);
  *(int *)&this_ptr->field_0x44 = iVar1;
  core_particle_cpp_CParticle_setup_FUN_00510e00((CParticle *)this_ptr,position,velocity);
  return;
}

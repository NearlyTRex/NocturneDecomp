// Name: core_fire.cpp_CRock_setup_FUN_004965f0
// Address: 004965f0
// Address Range: [[004965f0, 0049660f]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CRock_setup_FUN_004965f0(CRock *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CRock_setup_FUN_004965f0(CRock *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model_ptr)

{
  this_ptr->model_ptr = model_ptr;
  core_particle_cpp_CParticle_setup_FUN_00510e00(&this_ptr->base,position,velocity);
  return;
}

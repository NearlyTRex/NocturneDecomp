// Name: core_fire.cpp_CRock_setup_FUN_004c17c0
// Address: 004c17c0
// Address Range: [[004c17c0, 004c17df]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CRock_setup_FUN_004c17c0(CRock *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CRock_setup_FUN_004c17c0(CRock *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model_ptr)

{
  this_ptr->model_ptr = model_ptr;
  core_particle_cpp_CParticle_setup_FUN_00545680(&this_ptr->base,position,velocity);
  return;
}

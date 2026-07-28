// Name: core_fire.cpp_CRock_setup_FUN_00484c90
// Address: 00484c90
// Address Range: [[00484c90, 00484caf]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CRock_setup_FUN_00484c90(CRock *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CRock_setup_FUN_00484c90(CRock *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model_ptr)

{
  this_ptr->model_ptr = model_ptr;
  core_particle_cpp_CParticle_setup_FUN_004ef040(&this_ptr->base,position,velocity);
  return;
}

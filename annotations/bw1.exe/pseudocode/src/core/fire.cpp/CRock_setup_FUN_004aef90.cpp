// Name: core_fire.cpp_CRock_setup_FUN_004aef90
// Address: 004aef90
// Address Range: [[004aef90, 004aefaf]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CRock_setup_FUN_004aef90(CRock *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CRock_setup_FUN_004aef90(CRock *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model_ptr)

{
  *(CKeyFramedModel **)&this_ptr->field_0x4c = model_ptr;
  core_particle_cpp_CParticle_setup_FUN_00532160((CParticle *)this_ptr,position,velocity);
  return;
}

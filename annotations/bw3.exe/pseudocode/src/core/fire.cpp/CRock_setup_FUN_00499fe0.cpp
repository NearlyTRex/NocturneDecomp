// Name: core_fire.cpp_CRock_setup_FUN_00499fe0
// Address: 00499fe0
// Address Range: [[00499fe0, 00499fff]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CRock_setup_FUN_00499fe0(CRock *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CRock_setup_FUN_00499fe0(CRock *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model_ptr)

{
  *(CKeyFramedModel **)&this_ptr->field_0x4c = model_ptr;
  core_particle_cpp_CParticle_setup_FUN_00509e40((CParticle *)this_ptr,position,velocity);
  return;
}

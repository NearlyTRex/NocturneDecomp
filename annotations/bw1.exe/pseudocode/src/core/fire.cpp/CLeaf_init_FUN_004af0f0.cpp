// Name: core_fire.cpp_CLeaf_init_FUN_004af0f0
// Address: 004af0f0
// Address Range: [[004af0f0, 004af117]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CLeaf_init_FUN_004af0f0(CLeaf *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model,float drag)

#include "nocturne.h"

void __cdecl core_fire_cpp_CLeaf_init_FUN_004af0f0(CLeaf *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model,float drag)

{
  this_ptr->model = model;
  core_particle_cpp_CParticle_setup_FUN_00532160(&this_ptr->base,position,velocity);
  this_ptr->drag = drag;
  return;
}

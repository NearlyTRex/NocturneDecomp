// Name: core_fire.cpp_CLeaf_init_FUN_0049a140
// Address: 0049a140
// Address Range: [[0049a140, 0049a167]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CLeaf_init_FUN_0049a140(CLeaf *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model,float drag)

#include "nocturne.h"

void __cdecl core_fire_cpp_CLeaf_init_FUN_0049a140(CLeaf *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model,float drag)

{
  this_ptr->model = model;
  core_particle_cpp_CParticle_setup_FUN_00509e40(&this_ptr->base,position,velocity);
  this_ptr->drag = drag;
  return;
}

// Name: core_fire.cpp_CLeaf_init_FUN_004af0f0
// Address: 004af0f0
// Address Range: [[004af0f0, 004af117]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CLeaf_init_FUN_004af0f0(CLeaf *this_ptr,CVector3f *param_2,CVector3f *param_3,CKeyFramedModel *param_4,float param_5)

#include "nocturne.h"

void __cdecl core_fire_cpp_CLeaf_init_FUN_004af0f0(CLeaf *this_ptr,CVector3f *param_2,CVector3f *param_3,CKeyFramedModel *param_4,float param_5)

{
  this_ptr->model = param_4;
  core_particle_cpp_CParticle_setup_FUN_00532160(&this_ptr->base,param_2,param_3);
  this_ptr->drag = param_5;
  return;
}

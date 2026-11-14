// Name: core_fire.cpp_CLeaf_init_FUN_00496750
// Address: 00496750
// Address Range: [[00496750, 00496777]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CLeaf_init_FUN_00496750(CLeaf *this_ptr,CVector3f *param_2,CVector3f *param_3,CKeyFramedModel *param_4,float param_5)

#include "nocturne.h"

void __cdecl core_fire_cpp_CLeaf_init_FUN_00496750(CLeaf *this_ptr,CVector3f *param_2,CVector3f *param_3,CKeyFramedModel *param_4,float param_5)

{
  this_ptr->model = param_4;
  core_particle_cpp_CParticle_setup_FUN_00510e00(&this_ptr->base,param_2,param_3);
  this_ptr->drag = param_5;
  return;
}

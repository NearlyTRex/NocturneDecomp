// Name: core_fire.cpp_FUN_0049a140
// Address: 0049a140
// Address Range: [[0049a140, 0049a167]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0049a140(CParticle *param_1,CVector3f *param_2,CVector3f *param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

void core_fire_cpp_FUN_0049a140(CParticle *param_1,CVector3f *param_2,CVector3f *param_3,uint param_4,uint param_5)

{
  *(uint *)(param_1 + 0x50) = param_4;
  core_particle_cpp_CParticle_setup_FUN_00509e40(param_1,param_2,param_3);
  *(uint *)(param_1 + 0x40) = param_5;
  return;
}

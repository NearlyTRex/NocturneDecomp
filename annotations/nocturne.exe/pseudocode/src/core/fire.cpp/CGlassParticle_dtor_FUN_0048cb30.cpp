// Name: core_fire.cpp_CGlassParticle_dtor_FUN_0048cb30
// Address: 0048cb30
// Address Range: [[0048cb30, 0048cb50]]
// Convention: unknown
// Signature: void core_fire_cpp_CGlassParticle_dtor_FUN_0048cb30(int param_1)

#include "nocturne.h"

void core_fire_cpp_CGlassParticle_dtor_FUN_0048cb30(int param_1)

{
  CVector3f *pCVar1;
  
  pCVar1 = core_cloth_cpp_CVector3f_arrdtor_FUN_004389e0((CVector3f *)(param_1 + 0x78),0);
  core_particle_cpp_CParticle_dtor_FUN_004ef030((CParticle *)(pCVar1 + -10),1);
  return;
}

// Name: core_fire.cpp_FUN_0048c9c0
// Address: 0048c9c0
// Address Range: [[0048c9c0, 0048c9d4]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0048c9c0(CParticle *param_1)

#include "nocturne.h"

void core_fire_cpp_FUN_0048c9c0(CParticle *param_1)

{
  CParticle *pCVar1;
  
  pCVar1 = core_particle_cpp_CParticle_ctor_FUN_004ef010(param_1);
  pCVar1->vtable = &g_CShellVTable;
  return;
}

// Name: core_fire.cpp_FUN_0048c990
// Address: 0048c990
// Address Range: [[0048c990, 0048c9a4]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0048c990(CParticle *param_1)

#include "nocturne.h"

void core_fire_cpp_FUN_0048c990(CParticle *param_1)

{
  CParticle *pCVar1;
  
  pCVar1 = core_particle_cpp_CParticle_ctor_FUN_004ef010(param_1);
  pCVar1->vtable = &g_CPopcornVTable;
  return;
}

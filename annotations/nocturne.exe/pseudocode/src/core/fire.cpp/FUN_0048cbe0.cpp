// Name: core_fire.cpp_FUN_0048cbe0
// Address: 0048cbe0
// Address Range: [[0048cbe0, 0048cbf4]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0048cbe0(CParticle *param_1)

#include "nocturne.h"

void core_fire_cpp_FUN_0048cbe0(CParticle *param_1)

{
  CParticle *pCVar1;
  
  pCVar1 = core_particle_cpp_CParticle_ctor_FUN_004ef010(param_1);
  pCVar1->vtable = (CParticle_vtable *)&PTR_core_particle_cpp_CParticle_setup_FUN_004ef040_0059d2e4;
  return;
}

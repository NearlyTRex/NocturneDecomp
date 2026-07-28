// Name: core_gore.cpp_FUN_004b0a30
// Address: 004b0a30
// Address Range: [[004b0a30, 004b0a44]]
// Convention: unknown
// Signature: void core_gore_cpp_FUN_004b0a30(CParticle *param_1)

#include "nocturne.h"

void core_gore_cpp_FUN_004b0a30(CParticle *param_1)

{
  CParticle *pCVar1;
  
  pCVar1 = core_particle_cpp_CParticle_ctor_FUN_004ef010(param_1);
  pCVar1->vtable = (CParticle_vtable *)&PTR_core_particle_cpp_CParticle_setup_FUN_004ef040_0059e4f4;
  return;
}

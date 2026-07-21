// Name: FUN_0048c990
// Address: 0048c990
// Address Range: [[0048c990, 0048c9a4]]
// Convention: unknown
// Signature: void FUN_0048c990(undefined4 param_1)

#include "nocturne.h"

void FUN_0048c990(uint param_1)

{
  int iVar1;
  
  iVar1 = core_particle_cpp_CParticle_ctor_FUN_004ef010(param_1);
  *(byte ***)(iVar1 + 0x34) = &PTR_core_particle_cpp_CParticle_setup_FUN_004ef040_0059d244;
  return;
}

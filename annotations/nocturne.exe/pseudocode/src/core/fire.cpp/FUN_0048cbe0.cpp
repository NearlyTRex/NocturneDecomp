// Name: core_fire.cpp_FUN_0048cbe0
// Address: 0048cbe0
// Address Range: [[0048cbe0, 0048cbf4]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0048cbe0(undefined4 param_1)

#include "nocturne.h"

void core_fire_cpp_FUN_0048cbe0(uint param_1)

{
  int iVar1;
  
  iVar1 = core_particle_cpp_CParticle_ctor_FUN_004ef010(param_1);
  *(byte ***)(iVar1 + 0x34) = &PTR_core_particle_cpp_CParticle_setup_FUN_004ef040_0059d2e4;
  return;
}

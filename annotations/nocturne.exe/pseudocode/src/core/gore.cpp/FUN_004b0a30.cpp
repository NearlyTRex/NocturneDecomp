// Name: core_gore.cpp_FUN_004b0a30
// Address: 004b0a30
// Address Range: [[004b0a30, 004b0a44]]
// Convention: unknown
// Signature: void core_gore_cpp_FUN_004b0a30(undefined4 param_1)

#include "nocturne.h"

void core_gore_cpp_FUN_004b0a30(uint param_1)

{
  int iVar1;
  
  iVar1 = core_particle_cpp_CParticle_ctor_FUN_004ef010(param_1);
  *(byte ***)(iVar1 + 0x34) = &PTR_core_particle_cpp_CParticle_setup_FUN_004ef040_0059e4f4;
  return;
}

// Name: core_fire.cpp_CGlassParticle_ctor_FUN_0048cb00
// Address: 0048cb00
// Address Range: [[0048cb00, 0048cb2a]]
// Convention: unknown
// Signature: int core_fire_cpp_CGlassParticle_ctor_FUN_0048cb00(undefined4 param_1)

#include "nocturne.h"

int core_fire_cpp_CGlassParticle_ctor_FUN_0048cb00(uint param_1)

{
  int iVar1;
  
  iVar1 = core_particle_cpp_CParticle_ctor_FUN_004ef010(param_1);
  iVar1 = __arrinit(iVar1 + 0x78,3,&g_CVectorTypeInfo_005993b0);
  *(byte ***)(iVar1 + -0x44) = &PTR_core_particle_cpp_CParticle_setup_FUN_004ef040_0059d284;
  return iVar1 + -0x78;
}

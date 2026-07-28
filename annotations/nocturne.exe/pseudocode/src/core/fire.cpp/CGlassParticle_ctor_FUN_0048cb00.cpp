// Name: core_fire.cpp_CGlassParticle_ctor_FUN_0048cb00
// Address: 0048cb00
// Address Range: [[0048cb00, 0048cb2a]]
// Convention: unknown
// Signature: int core_fire_cpp_CGlassParticle_ctor_FUN_0048cb00(CParticle *param_1)

#include "nocturne.h"

int core_fire_cpp_CGlassParticle_ctor_FUN_0048cb00(CParticle *param_1)

{
  CParticle *pCVar1;
  void *pvVar2;
  
  pCVar1 = core_particle_cpp_CParticle_ctor_FUN_004ef010(param_1);
  pvVar2 = __arrinit(&pCVar1[2].position.z,3,&g_CVectorTypeInfo_005993b0);
  *(byte ***)((int)pvVar2 + -0x44) =
       &PTR_core_particle_cpp_CParticle_setup_FUN_004ef040_0059d284;
  return (int)pvVar2 + -0x78;
}

// Name: core_fire.cpp_CGlassParticle_ctor_FUN_0048cb00
// Address: 0048cb00
// Address Range: [[0048cb00, 0048cb2a]]
// Convention: __cdecl
// Signature: CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_ctor_FUN_0048cb00(CGlassParticle *this_ptr)

#include "nocturne.h"

CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_ctor_FUN_0048cb00(CGlassParticle *this_ptr)

{
  CParticle *pCVar1;
  void *pvVar2;
  
  pCVar1 = core_particle_cpp_CParticle_ctor_FUN_004ef010(&this_ptr->base);
  pvVar2 = __arrinit(&pCVar1[2].position.z,3,&g_CVectorTypeInfo_005993b0);
  *(CParticle_vtable **)((int)pvVar2 + -0x44) = &g_CGlassParticleVTable;
  return (CGlassParticle *)((int)pvVar2 + -0x78);
}

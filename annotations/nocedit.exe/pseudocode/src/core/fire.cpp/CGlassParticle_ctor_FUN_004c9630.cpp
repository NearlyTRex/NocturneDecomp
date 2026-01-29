// Name: core_fire.cpp_CGlassParticle_ctor_FUN_004c9630
// Address: 004c9630
// Address Range: [[004c9630, 004c965a]]
// Convention: __cdecl
// Signature: CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_ctor_FUN_004c9630(CGlassParticle *this_ptr)

#include "nocturne.h"

CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_ctor_FUN_004c9630(CGlassParticle *this_ptr)

{
  CParticle *pCVar1;
  void *pvVar2;
  
  pCVar1 = core_particle_cpp_CParticle_ctor_FUN_00545650(&this_ptr->base);
  pvVar2 = __arrinit(&pCVar1[2].position.z,3,&g_CVectorTypeInfo);
  *(CParticle_vtable **)((int)pvVar2 + -0x44) = &g_CGlassParticleVTable;
  return (CGlassParticle *)((int)pvVar2 + -0x78);
}

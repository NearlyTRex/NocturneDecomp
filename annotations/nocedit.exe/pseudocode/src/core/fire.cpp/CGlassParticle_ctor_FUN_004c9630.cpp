// Name: core_fire.cpp_CGlassParticle_ctor_FUN_004c9630
// Address: 004c9630
// Address Range: [[004c9630, 004c965a]]
// Convention: __cdecl
// Signature: CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_ctor_FUN_004c9630(CGlassParticle *this_ptr)

#include "nocturne.h"

CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_ctor_FUN_004c9630(CGlassParticle *this_ptr)

{
  CGlassParticle *pCVar1;
  CGlassParticle_ptr_120 pvVar1;
  
  pCVar1 = (CGlassParticle *)core_particle_cpp_CParticle_ctor_FUN_00545650(&this_ptr->base);
  pvVar1 = __arrinit(&pCVar1->triangle_delta,3,&g_CVectorTypeInfo);
  ADJ(pvVar1)->base.vtable = &g_CGlassParticleVTable;
  return ADJ(pvVar1);
}

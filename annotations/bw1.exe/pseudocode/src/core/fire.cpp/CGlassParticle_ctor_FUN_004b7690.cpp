// Name: core_fire.cpp_CGlassParticle_ctor_FUN_004b7690
// Address: 004b7690
// Address Range: [[004b7690, 004b76be]]
// Convention: __cdecl
// Signature: CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_ctor_FUN_004b7690(CGlassParticle *this_ptr)

#include "nocturne.h"

CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_ctor_FUN_004b7690(CGlassParticle *this_ptr)

{
  CParticle *pCVar1;
  void *pvVar2;
  
  pCVar1 = core_particle_cpp_CParticle_ctor_FUN_00532130(&this_ptr->base);
  pvVar2 = __arrinit(pCVar1 + 2,3,&g_CVectorTypeInfo);
  *(byte ***)((int)pvVar2 + -0x44) = &g_CGlassParticleVTable;
  return (CGlassParticle *)((int)pvVar2 + -0x80);
}

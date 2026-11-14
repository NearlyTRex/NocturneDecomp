// Name: core_fire.cpp_CGlassParticle_ctor_FUN_004a4730
// Address: 004a4730
// Address Range: [[004a4730, 004a475e]]
// Convention: __cdecl
// Signature: CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_ctor_FUN_004a4730(CGlassParticle *this_ptr)

#include "nocturne.h"

CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_ctor_FUN_004a4730(CGlassParticle *this_ptr)

{
  CParticle *pCVar1;
  void *pvVar2;
  
  pCVar1 = core_particle_cpp_CParticle_ctor_FUN_00509e10(&this_ptr->base);
  pvVar2 = __arrinit(&pCVar1[2].previous_position.y,3,&g_CVectorTypeInfo);
  *(byte ***)((int)pvVar2 + -0x74) = &g_CGlassParticleVTable;
  return (CGlassParticle *)((int)pvVar2 + -0xb0);
}

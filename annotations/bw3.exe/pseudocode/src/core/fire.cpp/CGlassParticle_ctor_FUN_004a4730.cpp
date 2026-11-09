// Name: core_fire.cpp_CGlassParticle_ctor_FUN_004a4730
// Address: 004a4730
// Address Range: [[004a4730, 004a475e]]
// Convention: __cdecl
// Signature: CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_ctor_FUN_004a4730(CGlassParticle *this_ptr)

#include "nocturne.h"

CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_ctor_FUN_004a4730(CGlassParticle *this_ptr)

{
  CParticle *pCVar1;
  int iVar2;
  
  pCVar1 = core_particle_cpp_FUN_00509e10((CParticle *)this_ptr);
  iVar2 = __arrinit(pCVar1 + 0xb0,3);
  *(byte ***)(iVar2 + -0x74) = &g_CGlassParticleVTable;
  return (CGlassParticle *)(iVar2 + -0xb0);
}

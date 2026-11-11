// Name: core_fire.cpp_CGlassParticle_ctor_FUN_0049edc0
// Address: 0049edc0
// Address Range: [[0049edc0, 0049edee]]
// Convention: __cdecl
// Signature: CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_ctor_FUN_0049edc0(CGlassParticle *this_ptr)

#include "nocturne.h"

CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_ctor_FUN_0049edc0(CGlassParticle *this_ptr)

{
  CParticle *pCVar1;
  int iVar2;
  
  pCVar1 = core_particle_cpp_CParticle_ctor_FUN_00510dd0(&this_ptr->base);
  iVar2 = __arrinit(pCVar1 + 2,3);
  *(byte ***)(iVar2 + -0x44) = &g_CGlassParticleVTable;
  return (CGlassParticle *)(iVar2 + -0x80);
}

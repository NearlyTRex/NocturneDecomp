// Name: core_fire.cpp_CFireball_ctor_FUN_004a47f0
// Address: 004a47f0
// Address Range: [[004a47f0, 004a4804]]
// Convention: __cdecl
// Signature: CFireball * __cdecl core_fire_cpp_CFireball_ctor_FUN_004a47f0(CFireball *this_ptr)

#include "nocturne.h"

CFireball * __cdecl core_fire_cpp_CFireball_ctor_FUN_004a47f0(CFireball *this_ptr)

{
  CFireball *pCVar1;
  
  pCVar1 = (CFireball *)core_particle_cpp_CParticle_ctor_FUN_00509e10(&this_ptr->base);
  (pCVar1->base).vtable = (CParticle_vtable *)&g_CFireballVTable;
  return pCVar1;
}

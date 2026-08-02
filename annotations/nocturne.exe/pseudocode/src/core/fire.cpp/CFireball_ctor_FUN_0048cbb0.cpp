// Name: core_fire.cpp_CFireball_ctor_FUN_0048cbb0
// Address: 0048cbb0
// Address Range: [[0048cbb0, 0048cbc4]]
// Convention: __cdecl
// Signature: CFireball * __cdecl core_fire_cpp_CFireball_ctor_FUN_0048cbb0(CFireball *this_ptr)

#include "nocturne.h"

CFireball * __cdecl core_fire_cpp_CFireball_ctor_FUN_0048cbb0(CFireball *this_ptr)

{
  CFireball *pCVar1;
  
  pCVar1 = (CFireball *)core_particle_cpp_CParticle_ctor_FUN_004ef010(&this_ptr->base);
  (pCVar1->base).vtable = &g_CFireballVTable;
  return pCVar1;
}

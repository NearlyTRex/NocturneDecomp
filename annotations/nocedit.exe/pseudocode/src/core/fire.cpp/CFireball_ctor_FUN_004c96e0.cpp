// Name: core_fire.cpp_CFireball_ctor_FUN_004c96e0
// Address: 004c96e0
// Address Range: [[004c96e0, 004c96f4]]
// Convention: __cdecl
// Signature: CFireball * __cdecl core_fire_cpp_CFireball_ctor_FUN_004c96e0(CFireball *this_ptr)

#include "nocturne.h"

CFireball * __cdecl core_fire_cpp_CFireball_ctor_FUN_004c96e0(CFireball *this_ptr)

{
  CFireball *pCVar1;
  
  pCVar1 = (CFireball *)core_particle_cpp_CParticle_ctor_FUN_00545650(&this_ptr->base);
  (pCVar1->base).vtable = &g_CFireballVTable;
  return pCVar1;
}

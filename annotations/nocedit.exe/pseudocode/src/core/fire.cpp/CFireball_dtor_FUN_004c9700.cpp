// Name: core_fire.cpp_CFireball_dtor_FUN_004c9700
// Address: 004c9700
// Address Range: [[004c9700, 004c970f]]
// Convention: __cdecl
// Signature: CFireball * __cdecl core_fire_cpp_CFireball_dtor_FUN_004c9700(CFireball *this_ptr,uint flags)

#include "nocturne.h"

CFireball * __cdecl core_fire_cpp_CFireball_dtor_FUN_004c9700(CFireball *this_ptr,uint flags)

{
  CFireball *pCVar1;
  
  pCVar1 = (CFireball *)core_particle_cpp_CParticle_dtor_FUN_00545670(&this_ptr->base,1);
  return pCVar1;
}

// Name: core_fire.cpp_CFireball_dtor_FUN_004a4810
// Address: 004a4810
// Address Range: [[004a4810, 004a481f]]
// Convention: __cdecl
// Signature: CFireball * __cdecl core_fire_cpp_CFireball_dtor_FUN_004a4810(CFireball *this_ptr,uint flags)

#include "nocturne.h"

CFireball * __cdecl core_fire_cpp_CFireball_dtor_FUN_004a4810(CFireball *this_ptr,uint flags)

{
  CFireball *pCVar1;
  
  pCVar1 = (CFireball *)core_particle_cpp_CParticle_dtor_FUN_00509e30(&this_ptr->base,1);
  return pCVar1;
}

// Name: core_fire.cpp_CFireball_dtor_FUN_0048cbd0
// Address: 0048cbd0
// Address Range: [[0048cbd0, 0048cbdf]]
// Convention: __cdecl
// Signature: CFireball * __cdecl core_fire_cpp_CFireball_dtor_FUN_0048cbd0(CFireball *this_ptr,uint flags)

#include "nocturne.h"

CFireball * __cdecl core_fire_cpp_CFireball_dtor_FUN_0048cbd0(CFireball *this_ptr,uint flags)

{
  CFireball *pCVar1;
  
  pCVar1 = (CFireball *)core_particle_cpp_CParticle_dtor_FUN_004ef030(&this_ptr->base,1);
  return pCVar1;
}

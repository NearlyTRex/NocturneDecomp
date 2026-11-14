// Name: core_fire.cpp_CFirefly_ctor_FUN_0049eeb0
// Address: 0049eeb0
// Address Range: [[0049eeb0, 0049eec4]]
// Convention: __cdecl
// Signature: CFirefly * __cdecl core_fire_cpp_CFirefly_ctor_FUN_0049eeb0(CFirefly *this_ptr)

#include "nocturne.h"

CFirefly * __cdecl core_fire_cpp_CFirefly_ctor_FUN_0049eeb0(CFirefly *this_ptr)

{
  CFirefly *pCVar1;
  
  pCVar1 = (CFirefly *)core_particle_cpp_CParticle_ctor_FUN_00510dd0(&this_ptr->base);
  (pCVar1->base).vtable = (CParticle_vtable *)&g_CFireflyVTable;
  return pCVar1;
}

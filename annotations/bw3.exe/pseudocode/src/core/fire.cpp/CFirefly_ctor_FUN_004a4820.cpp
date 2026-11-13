// Name: core_fire.cpp_CFirefly_ctor_FUN_004a4820
// Address: 004a4820
// Address Range: [[004a4820, 004a4834]]
// Convention: __cdecl
// Signature: CFirefly * __cdecl core_fire_cpp_CFirefly_ctor_FUN_004a4820(CFirefly *this_ptr)

#include "nocturne.h"

CFirefly * __cdecl core_fire_cpp_CFirefly_ctor_FUN_004a4820(CFirefly *this_ptr)

{
  CFirefly *pCVar1;
  
  pCVar1 = (CFirefly *)core_particle_cpp_CParticle_ctor_FUN_00509e10(&this_ptr->base);
  (pCVar1->base).vtable = (CParticle_vtable *)&g_CFireflyVTable;
  return pCVar1;
}

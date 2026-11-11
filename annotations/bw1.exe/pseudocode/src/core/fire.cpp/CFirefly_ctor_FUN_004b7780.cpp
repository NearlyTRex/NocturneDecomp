// Name: core_fire.cpp_CFirefly_ctor_FUN_004b7780
// Address: 004b7780
// Address Range: [[004b7780, 004b7794]]
// Convention: unknown
// Signature: CFirefly * core_fire_cpp_CFirefly_ctor_FUN_004b7780(CFirefly *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CFirefly * core_fire_cpp_CFirefly_ctor_FUN_004b7780(CFirefly *this_ptr)

{
  CFirefly *pCVar1;
  
  pCVar1 = (CFirefly *)core_particle_cpp_CParticle_ctor_FUN_00532130(&this_ptr->base);
  (pCVar1->base).vtable = (CParticle_vtable *)&g_CFireflyVTable;
  return pCVar1;
}

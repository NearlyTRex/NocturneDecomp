// Name: core_fire.cpp_CRock_ctor_FUN_004c96b0
// Address: 004c96b0
// Address Range: [[004c96b0, 004c96c4]]
// Convention: __cdecl
// Signature: CRock * __cdecl core_fire_cpp_CRock_ctor_FUN_004c96b0(CRock *this_ptr)

#include "nocturne.h"

CRock * __cdecl core_fire_cpp_CRock_ctor_FUN_004c96b0(CRock *this_ptr)

{
  CRock *pCVar1;
  
  pCVar1 = (CRock *)core_particle_cpp_CParticle_ctor_FUN_00545650(&this_ptr->base);
  (pCVar1->base).vtable = &g_CRockVTable;
  return pCVar1;
}

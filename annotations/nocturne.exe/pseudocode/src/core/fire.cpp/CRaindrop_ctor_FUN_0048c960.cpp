// Name: core_fire.cpp_CRaindrop_ctor_FUN_0048c960
// Address: 0048c960
// Address Range: [[0048c960, 0048c974]]
// Convention: __cdecl
// Signature: CRainDrop * __cdecl core_fire_cpp_CRaindrop_ctor_FUN_0048c960(CRainDrop *this_ptr)

#include "nocturne.h"

CRainDrop * __cdecl core_fire_cpp_CRaindrop_ctor_FUN_0048c960(CRainDrop *this_ptr)

{
  CParticle *pCVar1;
  
  pCVar1 = core_particle_cpp_CParticle_ctor_FUN_004ef010(&this_ptr->base);
  pCVar1->vtable = &g_CRainDropVTable;
  return (CRainDrop *)pCVar1;
}

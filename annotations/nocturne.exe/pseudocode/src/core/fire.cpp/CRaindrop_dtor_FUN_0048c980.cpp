// Name: core_fire.cpp_CRaindrop_dtor_FUN_0048c980
// Address: 0048c980
// Address Range: [[0048c980, 0048c98f]]
// Convention: __cdecl
// Signature: CRainDrop * __cdecl core_fire_cpp_CRaindrop_dtor_FUN_0048c980(CRainDrop *this_ptr,uint flags)

#include "nocturne.h"

CRainDrop * __cdecl core_fire_cpp_CRaindrop_dtor_FUN_0048c980(CRainDrop *this_ptr,uint flags)

{
  CParticle *pCVar1;
  
  pCVar1 = core_particle_cpp_CParticle_dtor_FUN_004ef030(&this_ptr->base,1);
  return (CRainDrop *)pCVar1;
}

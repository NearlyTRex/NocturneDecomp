// Name: core_fire.cpp_CRainDrop_dtor_FUN_0049ec50
// Address: 0049ec50
// Address Range: [[0049ec50, 0049ec5f]]
// Convention: __cdecl
// Signature: CRainDrop * __cdecl core_fire_cpp_CRainDrop_dtor_FUN_0049ec50(CRainDrop *this_ptr,uint flags)

#include "nocturne.h"

CRainDrop * __cdecl core_fire_cpp_CRainDrop_dtor_FUN_0049ec50(CRainDrop *this_ptr,uint flags)

{
  CParticle *pCVar1;
  
  pCVar1 = core_particle_cpp_CParticle_dtor_FUN_00510df0(&this_ptr->base,1);
  return (CRainDrop *)pCVar1;
}

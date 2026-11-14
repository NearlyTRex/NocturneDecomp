// Name: core_fire.cpp_CRainDrop_dtor_FUN_004a4570
// Address: 004a4570
// Address Range: [[004a4570, 004a457f]]
// Convention: __cdecl
// Signature: CRainDrop * __cdecl core_fire_cpp_CRainDrop_dtor_FUN_004a4570(CRainDrop *this_ptr,uint flags)

#include "nocturne.h"

CRainDrop * __cdecl core_fire_cpp_CRainDrop_dtor_FUN_004a4570(CRainDrop *this_ptr,uint flags)

{
  CParticle *pCVar1;
  
  pCVar1 = core_particle_cpp_CParticle_dtor_FUN_00509e30(&this_ptr->base,1);
  return (CRainDrop *)pCVar1;
}

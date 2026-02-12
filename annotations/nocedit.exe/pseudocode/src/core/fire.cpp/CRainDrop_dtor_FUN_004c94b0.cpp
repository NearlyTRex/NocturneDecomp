// Name: core_fire.cpp_CRainDrop_dtor_FUN_004c94b0
// Address: 004c94b0
// Address Range: [[004c94b0, 004c94bf]]
// Convention: __cdecl
// Signature: CRainDrop * __cdecl core_fire_cpp_CRainDrop_dtor_FUN_004c94b0(CRainDrop *this_ptr,uint flags)

#include "nocturne.h"

CRainDrop * __cdecl core_fire_cpp_CRainDrop_dtor_FUN_004c94b0(CRainDrop *this_ptr,uint flags)

{
  CParticle *pCVar1;
  
  pCVar1 = core_particle_cpp_CParticle_dtor_FUN_00545670(&this_ptr->base,1);
  return (CRainDrop *)pCVar1;
}

// Name: core_fire.cpp_CRainDrop_dtor_FUN_004b7520
// Address: 004b7520
// Address Range: [[004b7520, 004b752f]]
// Convention: __cdecl
// Signature: CRainDrop * __cdecl core_fire_cpp_CRainDrop_dtor_FUN_004b7520(CRainDrop *this_ptr,uint flags)

#include "nocturne.h"

CRainDrop * __cdecl core_fire_cpp_CRainDrop_dtor_FUN_004b7520(CRainDrop *this_ptr,uint flags)

{
  CParticle *pCVar1;
  
  pCVar1 = core_particle_cpp_CParticle_dtor_FUN_00532150(&this_ptr->base,1);
  return (CRainDrop *)pCVar1;
}

// Name: core_fire.cpp_CRainDrop_ctor_FUN_004a4550
// Address: 004a4550
// Address Range: [[004a4550, 004a4564]]
// Convention: __cdecl
// Signature: CRainDrop * __cdecl core_fire_cpp_CRainDrop_ctor_FUN_004a4550(CRainDrop *this_ptr)

#include "nocturne.h"

CRainDrop * __cdecl core_fire_cpp_CRainDrop_ctor_FUN_004a4550(CRainDrop *this_ptr)

{
  CParticle *pCVar1;
  
  pCVar1 = core_particle_cpp_CParticle_ctor_FUN_00509e10(&this_ptr->base);
  pCVar1->vtable = (CParticle_vtable *)&g_CRainDropVTable;
  return (CRainDrop *)pCVar1;
}

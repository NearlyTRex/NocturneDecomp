// Name: core_fire.cpp_CRainDrop_ctor_FUN_004b7500
// Address: 004b7500
// Address Range: [[004b7500, 004b7514]]
// Convention: __cdecl
// Signature: CRainDrop * __cdecl core_fire_cpp_CRainDrop_ctor_FUN_004b7500(CRainDrop *this_ptr)

#include "nocturne.h"

CRainDrop * __cdecl core_fire_cpp_CRainDrop_ctor_FUN_004b7500(CRainDrop *this_ptr)

{
  CParticle *pCVar1;
  
  pCVar1 = core_particle_cpp_CParticle_ctor_FUN_00532130(&this_ptr->base);
  pCVar1->vtable = (CParticle_vtable *)&g_CRainDropVTable;
  return (CRainDrop *)pCVar1;
}

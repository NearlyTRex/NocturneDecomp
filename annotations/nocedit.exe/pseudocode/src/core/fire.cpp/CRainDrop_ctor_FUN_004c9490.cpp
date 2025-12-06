// Name: core_fire.cpp_CRainDrop_ctor_FUN_004c9490
// Address: 004c9490
// Address Range: [[004c9490, 004c94a4]]
// Convention: __cdecl
// Signature: CRainDrop * core_fire.cpp_CRainDrop_ctor_FUN_004c9490(CRainDrop * this_ptr)

#include "nocturne.h"

CRainDrop * __cdecl core_fire_cpp_CRainDrop_ctor_FUN_004c9490(CRainDrop *this_ptr)

{
  CParticle *pCVar1;
  
  pCVar1 = core_particle_cpp_CParticle_ctor_FUN_00545650(&this_ptr->base);
  pCVar1->vtable = &g_CRainDropVTable;
  return (CRainDrop *)pCVar1;
}

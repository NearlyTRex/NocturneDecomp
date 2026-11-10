// Name: core_fire.cpp_CRainDrop_ctor_FUN_0049ec30
// Address: 0049ec30
// Address Range: [[0049ec30, 0049ec44]]
// Convention: __cdecl
// Signature: CRainDrop * __cdecl core_fire_cpp_CRainDrop_ctor_FUN_0049ec30(CRainDrop *this_ptr)

#include "nocturne.h"

CRainDrop * __cdecl core_fire_cpp_CRainDrop_ctor_FUN_0049ec30(CRainDrop *this_ptr)

{
  CRainDrop *pCVar1;
  
  pCVar1 = (CRainDrop *)core_particle_cpp_CParticle_ctor_FUN_00510dd0((CParticle *)this_ptr);
  *(byte ***)&pCVar1->field_0x3c = &g_CRainDropVTable;
  return pCVar1;
}

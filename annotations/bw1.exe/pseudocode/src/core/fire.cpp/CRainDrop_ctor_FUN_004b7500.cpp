// Name: core_fire.cpp_CRainDrop_ctor_FUN_004b7500
// Address: 004b7500
// Address Range: [[004b7500, 004b7514]]
// Convention: __cdecl
// Signature: CRainDrop * __cdecl core_fire_cpp_CRainDrop_ctor_FUN_004b7500(CRainDrop *this_ptr)

#include "nocturne.h"

CRainDrop * __cdecl core_fire_cpp_CRainDrop_ctor_FUN_004b7500(CRainDrop *this_ptr)

{
  CRainDrop *pCVar1;
  
  pCVar1 = (CRainDrop *)core_particle_cpp_FUN_00532130((CParticle *)this_ptr);
  *(byte ***)&pCVar1->field_0x3c = &g_CRainDropVTable;
  return pCVar1;
}

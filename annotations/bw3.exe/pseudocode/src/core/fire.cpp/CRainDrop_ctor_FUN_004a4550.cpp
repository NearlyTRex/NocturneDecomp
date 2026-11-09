// Name: core_fire.cpp_CRainDrop_ctor_FUN_004a4550
// Address: 004a4550
// Address Range: [[004a4550, 004a4564]]
// Convention: __cdecl
// Signature: CRainDrop * __cdecl core_fire_cpp_CRainDrop_ctor_FUN_004a4550(CRainDrop *this_ptr)

#include "nocturne.h"

CRainDrop * __cdecl core_fire_cpp_CRainDrop_ctor_FUN_004a4550(CRainDrop *this_ptr)

{
  CRainDrop *pCVar1;
  
  pCVar1 = (CRainDrop *)core_particle_cpp_FUN_00509e10((CParticle *)this_ptr);
  *(byte ***)&pCVar1->field_0x3c = &g_CRainDropVTable;
  return pCVar1;
}

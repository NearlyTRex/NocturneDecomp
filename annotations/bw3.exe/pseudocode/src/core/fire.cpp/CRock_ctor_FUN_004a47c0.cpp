// Name: core_fire.cpp_CRock_ctor_FUN_004a47c0
// Address: 004a47c0
// Address Range: [[004a47c0, 004a47d4]]
// Convention: __cdecl
// Signature: CRock * __cdecl core_fire_cpp_CRock_ctor_FUN_004a47c0(CRock *this_ptr)

#include "nocturne.h"

CRock * __cdecl core_fire_cpp_CRock_ctor_FUN_004a47c0(CRock *this_ptr)

{
  CRock *pCVar1;
  
  pCVar1 = (CRock *)core_particle_cpp_CParticle_ctor_FUN_00509e10((CParticle *)this_ptr);
  *(byte ***)&pCVar1->field_0x3c = &g_CRockVTable;
  return pCVar1;
}

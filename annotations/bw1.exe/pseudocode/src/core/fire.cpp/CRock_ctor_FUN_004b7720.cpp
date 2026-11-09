// Name: core_fire.cpp_CRock_ctor_FUN_004b7720
// Address: 004b7720
// Address Range: [[004b7720, 004b7734]]
// Convention: __cdecl
// Signature: CRock * __cdecl core_fire_cpp_CRock_ctor_FUN_004b7720(CRock *this_ptr)

#include "nocturne.h"

CRock * __cdecl core_fire_cpp_CRock_ctor_FUN_004b7720(CRock *this_ptr)

{
  CRock *pCVar1;
  
  pCVar1 = (CRock *)core_particle_cpp_FUN_00532130((CParticle *)this_ptr);
  *(byte ***)&pCVar1->field_0x3c = &g_CRockVTable;
  return pCVar1;
}

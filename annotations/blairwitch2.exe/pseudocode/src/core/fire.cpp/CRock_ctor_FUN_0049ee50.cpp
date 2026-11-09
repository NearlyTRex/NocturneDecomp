// Name: core_fire.cpp_CRock_ctor_FUN_0049ee50
// Address: 0049ee50
// Address Range: [[0049ee50, 0049ee64]]
// Convention: __cdecl
// Signature: CRock * __cdecl core_fire_cpp_CRock_ctor_FUN_0049ee50(CRock *this_ptr)

#include "nocturne.h"

CRock * __cdecl core_fire_cpp_CRock_ctor_FUN_0049ee50(CRock *this_ptr)

{
  CRock *pCVar1;
  
  pCVar1 = (CRock *)core_particle_cpp_FUN_00510dd0((CParticle *)this_ptr);
  *(byte ***)&pCVar1->field_0x3c = &g_CRockVTable;
  return pCVar1;
}

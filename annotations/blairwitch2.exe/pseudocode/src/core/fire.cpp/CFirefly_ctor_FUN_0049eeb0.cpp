// Name: core_fire.cpp_CFirefly_ctor_FUN_0049eeb0
// Address: 0049eeb0
// Address Range: [[0049eeb0, 0049eec4]]
// Convention: unknown
// Signature: CFirefly * core_fire_cpp_CFirefly_ctor_FUN_0049eeb0(CFirefly *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CFirefly * core_fire_cpp_CFirefly_ctor_FUN_0049eeb0(CFirefly *this_ptr)

{
  CFirefly *pCVar1;
  
  pCVar1 = (CFirefly *)core_particle_cpp_CParticle_ctor_FUN_00510dd0((CParticle *)this_ptr);
  *(byte ***)&pCVar1->field_0x3c = &g_CFireflyVTable;
  return pCVar1;
}

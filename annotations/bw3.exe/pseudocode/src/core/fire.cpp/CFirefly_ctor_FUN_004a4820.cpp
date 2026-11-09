// Name: core_fire.cpp_CFirefly_ctor_FUN_004a4820
// Address: 004a4820
// Address Range: [[004a4820, 004a4834]]
// Convention: unknown
// Signature: CFirefly * core_fire_cpp_CFirefly_ctor_FUN_004a4820(CFirefly *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CFirefly * core_fire_cpp_CFirefly_ctor_FUN_004a4820(CFirefly *this_ptr)

{
  CFirefly *pCVar1;
  
  pCVar1 = (CFirefly *)core_particle_cpp_FUN_00509e10((CParticle *)this_ptr);
  *(byte ***)&pCVar1->field_0x3c = &g_CFireflyVTable;
  return pCVar1;
}

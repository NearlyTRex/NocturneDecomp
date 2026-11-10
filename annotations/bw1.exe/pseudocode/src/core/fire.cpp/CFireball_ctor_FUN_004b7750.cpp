// Name: core_fire.cpp_CFireball_ctor_FUN_004b7750
// Address: 004b7750
// Address Range: [[004b7750, 004b7764]]
// Convention: __cdecl
// Signature: CFireball * __cdecl core_fire_cpp_CFireball_ctor_FUN_004b7750(CFireball *this_ptr)

#include "nocturne.h"

CFireball * __cdecl core_fire_cpp_CFireball_ctor_FUN_004b7750(CFireball *this_ptr)

{
  CFireball *pCVar1;
  
  pCVar1 = (CFireball *)core_particle_cpp_CParticle_ctor_FUN_00532130((CParticle *)this_ptr);
  *(byte ***)&pCVar1->field_0x3c = &g_CFireballVTable;
  return pCVar1;
}

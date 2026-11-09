// Name: core_fire.cpp_CFireball_ctor_FUN_004a47f0
// Address: 004a47f0
// Address Range: [[004a47f0, 004a4804]]
// Convention: __cdecl
// Signature: CFireball * __cdecl core_fire_cpp_CFireball_ctor_FUN_004a47f0(CFireball *this_ptr)

#include "nocturne.h"

CFireball * __cdecl core_fire_cpp_CFireball_ctor_FUN_004a47f0(CFireball *this_ptr)

{
  CFireball *pCVar1;
  
  pCVar1 = (CFireball *)core_particle_cpp_FUN_00509e10((CParticle *)this_ptr);
  *(byte ***)&pCVar1->field_0x3c = &g_CFireballVTable;
  return pCVar1;
}

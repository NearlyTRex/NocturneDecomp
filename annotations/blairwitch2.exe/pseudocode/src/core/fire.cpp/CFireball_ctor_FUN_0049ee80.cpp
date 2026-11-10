// Name: core_fire.cpp_CFireball_ctor_FUN_0049ee80
// Address: 0049ee80
// Address Range: [[0049ee80, 0049ee94]]
// Convention: __cdecl
// Signature: CFireball * __cdecl core_fire_cpp_CFireball_ctor_FUN_0049ee80(CFireball *this_ptr)

#include "nocturne.h"

CFireball * __cdecl core_fire_cpp_CFireball_ctor_FUN_0049ee80(CFireball *this_ptr)

{
  CFireball *pCVar1;
  
  pCVar1 = (CFireball *)core_particle_cpp_CParticle_ctor_FUN_00510dd0((CParticle *)this_ptr);
  *(byte ***)&pCVar1->field_0x3c = &g_CFireballVTable;
  return pCVar1;
}

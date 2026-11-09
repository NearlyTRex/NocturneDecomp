// Name: core_fire.cpp_CSpark_ctor_FUN_0049eee0
// Address: 0049eee0
// Address Range: [[0049eee0, 0049eef4]]
// Convention: __cdecl
// Signature: CSpark * __cdecl core_fire_cpp_CSpark_ctor_FUN_0049eee0(CSpark *this_ptr)

#include "nocturne.h"

CSpark * __cdecl core_fire_cpp_CSpark_ctor_FUN_0049eee0(CSpark *this_ptr)

{
  CSpark *pCVar1;
  
  pCVar1 = (CSpark *)core_particle_cpp_FUN_00510dd0((CParticle *)this_ptr);
  *(byte ***)&pCVar1->field_0x3c = &g_CSparkVTable;
  return pCVar1;
}

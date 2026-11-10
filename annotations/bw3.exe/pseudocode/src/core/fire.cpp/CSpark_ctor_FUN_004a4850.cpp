// Name: core_fire.cpp_CSpark_ctor_FUN_004a4850
// Address: 004a4850
// Address Range: [[004a4850, 004a4864]]
// Convention: __cdecl
// Signature: CSpark * __cdecl core_fire_cpp_CSpark_ctor_FUN_004a4850(CSpark *this_ptr)

#include "nocturne.h"

CSpark * __cdecl core_fire_cpp_CSpark_ctor_FUN_004a4850(CSpark *this_ptr)

{
  CSpark *pCVar1;
  
  pCVar1 = (CSpark *)core_particle_cpp_CParticle_ctor_FUN_00509e10((CParticle *)this_ptr);
  *(byte ***)&pCVar1->field_0x3c = &g_CSparkVTable;
  return pCVar1;
}

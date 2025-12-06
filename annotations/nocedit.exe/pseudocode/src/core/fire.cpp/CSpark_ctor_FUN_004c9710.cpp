// Name: core_fire.cpp_CSpark_ctor_FUN_004c9710
// Address: 004c9710
// Address Range: [[004c9710, 004c9724]]
// Convention: __cdecl
// Signature: CSpark * core_fire.cpp_CSpark_ctor_FUN_004c9710(CSpark * this_ptr)

#include "nocturne.h"

CSpark * __cdecl core_fire_cpp_CSpark_ctor_FUN_004c9710(CSpark *this_ptr)

{
  CSpark *pCVar1;
  
  pCVar1 = (CSpark *)core_particle_cpp_CParticle_ctor_FUN_00545650(&this_ptr->base);
  (pCVar1->base).vtable = &g_CSparkVTable;
  return pCVar1;
}

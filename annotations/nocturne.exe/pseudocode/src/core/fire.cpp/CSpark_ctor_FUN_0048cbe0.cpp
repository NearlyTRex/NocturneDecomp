// Name: core_fire.cpp_CSpark_ctor_FUN_0048cbe0
// Address: 0048cbe0
// Address Range: [[0048cbe0, 0048cbf4]]
// Convention: __cdecl
// Signature: CSpark * __cdecl core_fire_cpp_CSpark_ctor_FUN_0048cbe0(CSpark *this_ptr)

#include "nocturne.h"

CSpark * __cdecl core_fire_cpp_CSpark_ctor_FUN_0048cbe0(CSpark *this_ptr)

{
  CSpark *pCVar1;
  
  pCVar1 = (CSpark *)core_particle_cpp_CParticle_ctor_FUN_004ef010(&this_ptr->base);
  (pCVar1->base).vtable = &g_CSparkVTable;
  return pCVar1;
}

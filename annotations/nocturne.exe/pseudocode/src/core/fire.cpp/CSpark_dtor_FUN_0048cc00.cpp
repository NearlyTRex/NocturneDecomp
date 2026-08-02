// Name: core_fire.cpp_CSpark_dtor_FUN_0048cc00
// Address: 0048cc00
// Address Range: [[0048cc00, 0048cc0f]]
// Convention: __cdecl
// Signature: CSpark * __cdecl core_fire_cpp_CSpark_dtor_FUN_0048cc00(CSpark *this_ptr,uint flags)

#include "nocturne.h"

CSpark * __cdecl core_fire_cpp_CSpark_dtor_FUN_0048cc00(CSpark *this_ptr,uint flags)

{
  CSpark *pCVar1;
  
  pCVar1 = (CSpark *)core_particle_cpp_CParticle_dtor_FUN_004ef030(&this_ptr->base,1);
  return pCVar1;
}

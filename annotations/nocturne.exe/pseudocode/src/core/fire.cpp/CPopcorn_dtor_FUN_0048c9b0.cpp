// Name: core_fire.cpp_CPopcorn_dtor_FUN_0048c9b0
// Address: 0048c9b0
// Address Range: [[0048c9b0, 0048c9bf]]
// Convention: __cdecl
// Signature: CPopcorn * __cdecl core_fire_cpp_CPopcorn_dtor_FUN_0048c9b0(CPopcorn *this_ptr,uint flags)

#include "nocturne.h"

CPopcorn * __cdecl core_fire_cpp_CPopcorn_dtor_FUN_0048c9b0(CPopcorn *this_ptr,uint flags)

{
  CParticle *pCVar1;
  
  pCVar1 = core_particle_cpp_CParticle_dtor_FUN_004ef030(&this_ptr->base,1);
  return (CPopcorn *)pCVar1;
}

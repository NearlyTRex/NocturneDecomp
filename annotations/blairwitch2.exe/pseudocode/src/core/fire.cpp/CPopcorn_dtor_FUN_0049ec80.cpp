// Name: core_fire.cpp_CPopcorn_dtor_FUN_0049ec80
// Address: 0049ec80
// Address Range: [[0049ec80, 0049ec8f]]
// Convention: __cdecl
// Signature: CPopcorn * __cdecl core_fire_cpp_CPopcorn_dtor_FUN_0049ec80(CPopcorn *this_ptr,uint flags)

#include "nocturne.h"

CPopcorn * __cdecl core_fire_cpp_CPopcorn_dtor_FUN_0049ec80(CPopcorn *this_ptr,uint flags)

{
  CParticle *pCVar1;
  
  pCVar1 = core_particle_cpp_CParticle_dtor_FUN_00510df0(&this_ptr->base,1);
  return (CPopcorn *)pCVar1;
}

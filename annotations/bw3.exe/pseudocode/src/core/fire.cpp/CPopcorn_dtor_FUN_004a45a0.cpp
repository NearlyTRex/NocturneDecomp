// Name: core_fire.cpp_CPopcorn_dtor_FUN_004a45a0
// Address: 004a45a0
// Address Range: [[004a45a0, 004a45af]]
// Convention: __cdecl
// Signature: CPopcorn * __cdecl core_fire_cpp_CPopcorn_dtor_FUN_004a45a0(CPopcorn *this_ptr,uint flags)

#include "nocturne.h"

CPopcorn * __cdecl core_fire_cpp_CPopcorn_dtor_FUN_004a45a0(CPopcorn *this_ptr,uint flags)

{
  CParticle *pCVar1;
  
  pCVar1 = core_particle_cpp_CParticle_dtor_FUN_00509e30(&this_ptr->base,1);
  return (CPopcorn *)pCVar1;
}

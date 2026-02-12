// Name: core_fire.cpp_CPopcorn_dtor_FUN_004c94e0
// Address: 004c94e0
// Address Range: [[004c94e0, 004c94ef]]
// Convention: __cdecl
// Signature: CPopcorn * __cdecl core_fire_cpp_CPopcorn_dtor_FUN_004c94e0(CPopcorn *this_ptr,uint flags)

#include "nocturne.h"

CPopcorn * __cdecl core_fire_cpp_CPopcorn_dtor_FUN_004c94e0(CPopcorn *this_ptr,uint flags)

{
  CParticle *pCVar1;
  
  pCVar1 = core_particle_cpp_CParticle_dtor_FUN_00545670(&this_ptr->base,1);
  return (CPopcorn *)pCVar1;
}

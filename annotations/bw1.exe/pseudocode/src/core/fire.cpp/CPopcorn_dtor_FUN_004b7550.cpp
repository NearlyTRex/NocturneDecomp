// Name: core_fire.cpp_CPopcorn_dtor_FUN_004b7550
// Address: 004b7550
// Address Range: [[004b7550, 004b755f]]
// Convention: __cdecl
// Signature: CPopcorn * __cdecl core_fire_cpp_CPopcorn_dtor_FUN_004b7550(CPopcorn *this_ptr,uint flags)

#include "nocturne.h"

CPopcorn * __cdecl core_fire_cpp_CPopcorn_dtor_FUN_004b7550(CPopcorn *this_ptr,uint flags)

{
  CParticle *pCVar1;
  
  pCVar1 = core_particle_cpp_CParticle_dtor_FUN_00532150(&this_ptr->base,1);
  return (CPopcorn *)pCVar1;
}

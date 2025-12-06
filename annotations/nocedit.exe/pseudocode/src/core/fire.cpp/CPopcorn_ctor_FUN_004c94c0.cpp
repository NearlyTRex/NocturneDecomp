// Name: core_fire.cpp_CPopcorn_ctor_FUN_004c94c0
// Address: 004c94c0
// Address Range: [[004c94c0, 004c94d4]]
// Convention: __cdecl
// Signature: CPopcorn * core_fire.cpp_CPopcorn_ctor_FUN_004c94c0(CPopcorn * this_ptr)

#include "nocturne.h"

CPopcorn * __cdecl core_fire_cpp_CPopcorn_ctor_FUN_004c94c0(CPopcorn *this_ptr)

{
  CParticle *pCVar1;
  
  pCVar1 = core_particle_cpp_CParticle_ctor_FUN_00545650(&this_ptr->base);
  pCVar1->vtable = &g_CPopcornVTable;
  return (CPopcorn *)pCVar1;
}

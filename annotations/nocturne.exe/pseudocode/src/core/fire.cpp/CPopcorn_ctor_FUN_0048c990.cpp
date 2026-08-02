// Name: core_fire.cpp_CPopcorn_ctor_FUN_0048c990
// Address: 0048c990
// Address Range: [[0048c990, 0048c9a4]]
// Convention: __cdecl
// Signature: CPopcorn * __cdecl core_fire_cpp_CPopcorn_ctor_FUN_0048c990(CPopcorn *this_ptr)

#include "nocturne.h"

CPopcorn * __cdecl core_fire_cpp_CPopcorn_ctor_FUN_0048c990(CPopcorn *this_ptr)

{
  CParticle *pCVar1;
  
  pCVar1 = core_particle_cpp_CParticle_ctor_FUN_004ef010(&this_ptr->base);
  pCVar1->vtable = &g_CPopcornVTable;
  return (CPopcorn *)pCVar1;
}

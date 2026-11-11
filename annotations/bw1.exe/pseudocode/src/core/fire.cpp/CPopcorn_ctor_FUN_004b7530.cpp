// Name: core_fire.cpp_CPopcorn_ctor_FUN_004b7530
// Address: 004b7530
// Address Range: [[004b7530, 004b7544]]
// Convention: __cdecl
// Signature: CPopcorn * __cdecl core_fire_cpp_CPopcorn_ctor_FUN_004b7530(CPopcorn *this_ptr)

#include "nocturne.h"

CPopcorn * __cdecl core_fire_cpp_CPopcorn_ctor_FUN_004b7530(CPopcorn *this_ptr)

{
  CParticle *pCVar1;
  
  pCVar1 = core_particle_cpp_CParticle_ctor_FUN_00532130(&this_ptr->base);
  pCVar1->vtable = (CParticle_vtable *)&g_CPopcornVTable;
  return (CPopcorn *)pCVar1;
}

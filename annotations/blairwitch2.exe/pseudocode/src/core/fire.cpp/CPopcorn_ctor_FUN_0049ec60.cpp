// Name: core_fire.cpp_CPopcorn_ctor_FUN_0049ec60
// Address: 0049ec60
// Address Range: [[0049ec60, 0049ec74]]
// Convention: __cdecl
// Signature: CPopcorn * __cdecl core_fire_cpp_CPopcorn_ctor_FUN_0049ec60(CPopcorn *this_ptr)

#include "nocturne.h"

CPopcorn * __cdecl core_fire_cpp_CPopcorn_ctor_FUN_0049ec60(CPopcorn *this_ptr)

{
  CParticle *pCVar1;
  
  pCVar1 = core_particle_cpp_CParticle_ctor_FUN_00510dd0(&this_ptr->base);
  pCVar1->vtable = (CParticle_vtable *)&g_CPopcornVTable;
  return (CPopcorn *)pCVar1;
}

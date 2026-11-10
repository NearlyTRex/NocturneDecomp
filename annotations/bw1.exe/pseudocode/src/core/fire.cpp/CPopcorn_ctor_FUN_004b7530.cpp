// Name: core_fire.cpp_CPopcorn_ctor_FUN_004b7530
// Address: 004b7530
// Address Range: [[004b7530, 004b7544]]
// Convention: __cdecl
// Signature: CPopcorn * __cdecl core_fire_cpp_CPopcorn_ctor_FUN_004b7530(CPopcorn *this_ptr)

#include "nocturne.h"

CPopcorn * __cdecl core_fire_cpp_CPopcorn_ctor_FUN_004b7530(CPopcorn *this_ptr)

{
  CPopcorn *pCVar1;
  
  pCVar1 = (CPopcorn *)core_particle_cpp_CParticle_ctor_FUN_00532130((CParticle *)this_ptr);
  *(byte ***)&pCVar1->field_0x3c = &g_CPopcornVTable;
  return pCVar1;
}

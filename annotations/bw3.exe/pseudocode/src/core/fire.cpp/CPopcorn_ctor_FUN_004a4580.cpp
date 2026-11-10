// Name: core_fire.cpp_CPopcorn_ctor_FUN_004a4580
// Address: 004a4580
// Address Range: [[004a4580, 004a4594]]
// Convention: __cdecl
// Signature: CPopcorn * __cdecl core_fire_cpp_CPopcorn_ctor_FUN_004a4580(CPopcorn *this_ptr)

#include "nocturne.h"

CPopcorn * __cdecl core_fire_cpp_CPopcorn_ctor_FUN_004a4580(CPopcorn *this_ptr)

{
  CPopcorn *pCVar1;
  
  pCVar1 = (CPopcorn *)core_particle_cpp_CParticle_ctor_FUN_00509e10((CParticle *)this_ptr);
  *(byte ***)&pCVar1->field_0x3c = &g_CPopcornVTable;
  return pCVar1;
}

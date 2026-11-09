// Name: core_fire.cpp_CPopcorn_ctor_FUN_0049ec60
// Address: 0049ec60
// Address Range: [[0049ec60, 0049ec74]]
// Convention: __cdecl
// Signature: CPopcorn * __cdecl core_fire_cpp_CPopcorn_ctor_FUN_0049ec60(CPopcorn *this_ptr)

#include "nocturne.h"

CPopcorn * __cdecl core_fire_cpp_CPopcorn_ctor_FUN_0049ec60(CPopcorn *this_ptr)

{
  CPopcorn *pCVar1;
  
  pCVar1 = (CPopcorn *)core_particle_cpp_FUN_00510dd0((CParticle *)this_ptr);
  *(byte ***)&pCVar1->field_0x3c = &g_CPopcornVTable;
  return pCVar1;
}

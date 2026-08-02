// Name: core_fire.cpp_CRock_ctor_FUN_0048cb80
// Address: 0048cb80
// Address Range: [[0048cb80, 0048cb94]]
// Convention: __cdecl
// Signature: CRock * __cdecl core_fire_cpp_CRock_ctor_FUN_0048cb80(CRock *this_ptr)

#include "nocturne.h"

CRock * __cdecl core_fire_cpp_CRock_ctor_FUN_0048cb80(CRock *this_ptr)

{
  CRock *pCVar1;
  
  pCVar1 = (CRock *)core_particle_cpp_CParticle_ctor_FUN_004ef010(&this_ptr->base);
  (pCVar1->base).vtable = &g_CRockVTable;
  return pCVar1;
}

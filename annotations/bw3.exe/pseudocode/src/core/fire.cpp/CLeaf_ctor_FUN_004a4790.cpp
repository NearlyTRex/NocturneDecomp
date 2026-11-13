// Name: core_fire.cpp_CLeaf_ctor_FUN_004a4790
// Address: 004a4790
// Address Range: [[004a4790, 004a47a4]]
// Convention: __cdecl
// Signature: CLeaf * __cdecl core_fire_cpp_CLeaf_ctor_FUN_004a4790(CLeaf *this_ptr)

#include "nocturne.h"

CLeaf * __cdecl core_fire_cpp_CLeaf_ctor_FUN_004a4790(CLeaf *this_ptr)

{
  CLeaf *pCVar1;
  
  pCVar1 = (CLeaf *)core_particle_cpp_CParticle_ctor_FUN_00509e10(&this_ptr->base);
  (pCVar1->base).vtable = (CParticle_vtable *)&g_CLeafVTable;
  return pCVar1;
}

// Name: core_fire.cpp_CLeaf_ctor_FUN_004b76f0
// Address: 004b76f0
// Address Range: [[004b76f0, 004b7704]]
// Convention: unknown
// Signature: CLeaf * core_fire_cpp_CLeaf_ctor_FUN_004b76f0(CLeaf *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CLeaf * core_fire_cpp_CLeaf_ctor_FUN_004b76f0(CLeaf *this_ptr)

{
  CLeaf *pCVar1;
  
  pCVar1 = (CLeaf *)core_particle_cpp_CParticle_ctor_FUN_00532130(&this_ptr->base);
  (pCVar1->base).vtable = (CParticle_vtable *)&g_CLeafVTable;
  return pCVar1;
}

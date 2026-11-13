// Name: core_fire.cpp_CLeaf_ctor_FUN_0049ee20
// Address: 0049ee20
// Address Range: [[0049ee20, 0049ee34]]
// Convention: __cdecl
// Signature: CLeaf * __cdecl core_fire_cpp_CLeaf_ctor_FUN_0049ee20(CLeaf *this_ptr)

#include "nocturne.h"

CLeaf * __cdecl core_fire_cpp_CLeaf_ctor_FUN_0049ee20(CLeaf *this_ptr)

{
  CLeaf *pCVar1;
  
  pCVar1 = (CLeaf *)core_particle_cpp_CParticle_ctor_FUN_00510dd0(&this_ptr->base);
  (pCVar1->base).vtable = (CParticle_vtable *)&g_CLeafVTable;
  return pCVar1;
}

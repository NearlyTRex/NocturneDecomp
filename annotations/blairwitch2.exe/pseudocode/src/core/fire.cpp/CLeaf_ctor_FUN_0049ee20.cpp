// Name: core_fire.cpp_CLeaf_ctor_FUN_0049ee20
// Address: 0049ee20
// Address Range: [[0049ee20, 0049ee34]]
// Convention: unknown
// Signature: CLeaf * core_fire_cpp_CLeaf_ctor_FUN_0049ee20(CLeaf *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CLeaf * core_fire_cpp_CLeaf_ctor_FUN_0049ee20(CLeaf *this_ptr)

{
  CLeaf *pCVar1;
  
  pCVar1 = (CLeaf *)core_particle_cpp_FUN_00510dd0((CParticle *)this_ptr);
  *(byte ***)&pCVar1->field_0x3c = &g_CLeafVTable;
  return pCVar1;
}

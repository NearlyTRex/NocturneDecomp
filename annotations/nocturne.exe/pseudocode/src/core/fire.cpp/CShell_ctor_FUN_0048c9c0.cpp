// Name: core_fire.cpp_CShell_ctor_FUN_0048c9c0
// Address: 0048c9c0
// Address Range: [[0048c9c0, 0048c9d4]]
// Convention: __cdecl
// Signature: CShell * __cdecl core_fire_cpp_CShell_ctor_FUN_0048c9c0(CShell *this_ptr)

#include "nocturne.h"

CShell * __cdecl core_fire_cpp_CShell_ctor_FUN_0048c9c0(CShell *this_ptr)

{
  CShell *pCVar1;
  
  pCVar1 = (CShell *)core_particle_cpp_CParticle_ctor_FUN_004ef010(&this_ptr->base);
  (pCVar1->base).vtable = &g_CShellVTable;
  return pCVar1;
}

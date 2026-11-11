// Name: core_fire.cpp_CShell_ctor_FUN_004a45b0
// Address: 004a45b0
// Address Range: [[004a45b0, 004a45c4]]
// Convention: __cdecl
// Signature: CShell * __cdecl core_fire_cpp_CShell_ctor_FUN_004a45b0(CShell *this_ptr)

#include "nocturne.h"

CShell * __cdecl core_fire_cpp_CShell_ctor_FUN_004a45b0(CShell *this_ptr)

{
  CShell *pCVar1;
  
  pCVar1 = (CShell *)core_particle_cpp_CParticle_ctor_FUN_00509e10(&this_ptr->base);
  (pCVar1->base).vtable = (CParticle_vtable *)&g_CShellVTable;
  return pCVar1;
}

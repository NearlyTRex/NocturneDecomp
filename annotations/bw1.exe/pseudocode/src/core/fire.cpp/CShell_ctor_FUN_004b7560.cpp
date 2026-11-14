// Name: core_fire.cpp_CShell_ctor_FUN_004b7560
// Address: 004b7560
// Address Range: [[004b7560, 004b7574]]
// Convention: __cdecl
// Signature: CShell * __cdecl core_fire_cpp_CShell_ctor_FUN_004b7560(CShell *this_ptr)

#include "nocturne.h"

CShell * __cdecl core_fire_cpp_CShell_ctor_FUN_004b7560(CShell *this_ptr)

{
  CShell *pCVar1;
  
  pCVar1 = (CShell *)core_particle_cpp_CParticle_ctor_FUN_00532130(&this_ptr->base);
  (pCVar1->base).vtable = (CParticle_vtable *)&g_CShellVTable;
  return pCVar1;
}

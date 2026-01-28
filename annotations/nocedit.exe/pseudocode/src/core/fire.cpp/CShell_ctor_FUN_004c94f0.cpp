// Name: core_fire.cpp_CShell_ctor_FUN_004c94f0
// Address: 004c94f0
// Address Range: [[004c94f0, 004c9504]]
// Convention: __cdecl
// Signature: CShell * __cdecl core_fire_cpp_CShell_ctor_FUN_004c94f0(CShell *this_ptr)

#include "nocturne.h"

CShell * __cdecl core_fire_cpp_CShell_ctor_FUN_004c94f0(CShell *this_ptr)

{
  CShell *pCVar1;
  
  pCVar1 = (CShell *)core_particle_cpp_CParticle_ctor_FUN_00545650(&this_ptr->base);
  (pCVar1->base).vtable = &g_CShellVTable;
  return pCVar1;
}

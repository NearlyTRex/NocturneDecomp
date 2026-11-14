// Name: core_fire.cpp_CShell_ctor_FUN_0049ec90
// Address: 0049ec90
// Address Range: [[0049ec90, 0049eca4]]
// Convention: __cdecl
// Signature: CShell * __cdecl core_fire_cpp_CShell_ctor_FUN_0049ec90(CShell *this_ptr)

#include "nocturne.h"

CShell * __cdecl core_fire_cpp_CShell_ctor_FUN_0049ec90(CShell *this_ptr)

{
  CShell *pCVar1;
  
  pCVar1 = (CShell *)core_particle_cpp_CParticle_ctor_FUN_00510dd0(&this_ptr->base);
  (pCVar1->base).vtable = (CParticle_vtable *)&g_CShellVTable;
  return pCVar1;
}

// Name: core_fire.cpp_CShell_ctor_FUN_004c94f0
// Address: 004c94f0
// Address Range: [[004c94f0, 004c9504]]
// Convention: __cdecl
// Signature: CShell * core_fire.cpp_CShell_ctor_FUN_004c94f0(CShell * this_ptr)
// Globals:
//   CParticle_vtable g_CShellVTable
// Function calls:
//   core_particle.cpp_CParticle_ctor_FUN_00545650

#include "nocturne.h"

CShell * __cdecl core_fire_cpp_CShell_ctor_FUN_004c94f0(CShell *this_ptr)

{
  CShell *pCVar1;
  
  pCVar1 = (CShell *)core_particle_cpp_CParticle_ctor_FUN_00545650(&this_ptr->base);
  (pCVar1->base).vtable = &g_CShellVTable;
  return pCVar1;
}


// Assembly code:
// 004c94f0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_fire.cpp_CShell_ctor_FUN_004c94f0
//   XREF to: Stack[0x4] (READ)
// 004c94f4: PUSH EDX
// 004c94f5: CALL core_particle.cpp_CParticle_ctor_FUN_00545650
//   XREF to: 00545650 (UNCONDITIONAL_CALL)
// 004c94fa: ADD ESP,0x4
// 004c94fd: MOV dword ptr [EAX + 0x34],0x65dd14
//   XREF to: 0065dd14 (DATA)
// 004c9504: RET

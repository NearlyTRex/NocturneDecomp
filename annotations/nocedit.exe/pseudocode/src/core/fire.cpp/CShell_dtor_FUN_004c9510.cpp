// Name: core_fire.cpp_CShell_dtor_FUN_004c9510
// Address: 004c9510
// Address Range: [[004c9510, 004c951f]]
// Convention: __cdecl
// Signature: CShell * core_fire.cpp_CShell_dtor_FUN_004c9510(CShell * this_ptr)
// Function calls:
//   core_particle.cpp_CParticle_dtor_FUN_00545670

#include "nocturne.h"

CShell * __cdecl core_fire_cpp_CShell_dtor_FUN_004c9510(CShell *this_ptr)

{
  CShell *pCVar1;
  
  pCVar1 = (CShell *)core_particle_cpp_CParticle_dtor_FUN_00545670(&this_ptr->base);
  return pCVar1;
}


// Assembly code:
// 004c9510: PUSH 0x1
//   Label: core_fire.cpp_CShell_dtor_FUN_004c9510
// 004c9512: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004c9516: PUSH EDX
// 004c9517: CALL core_particle.cpp_CParticle_dtor_FUN_00545670
//   XREF to: 00545670 (UNCONDITIONAL_CALL)
// 004c951c: ADD ESP,0x8
// 004c951f: RET

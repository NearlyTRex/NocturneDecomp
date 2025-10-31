// Name: core_gore.cpp_FUN_004ee410
// Address: 004ee410
// Address Range: [[004ee410, 004ee41f]]
// Convention: __cdecl
// Signature: CBloodParticle * core_gore.cpp_FUN_004ee410(CBloodParticle * this_ptr)
// Function calls:
//   core_particle.cpp_CParticle_dtor_FUN_00545670

#include "nocturne.h"

CBloodParticle * __cdecl core_gore_cpp_FUN_004ee410(CBloodParticle *this_ptr)

{
  CParticle *pCVar1;
  
  pCVar1 = core_particle_cpp_CParticle_dtor_FUN_00545670((CParticle *)this_ptr);
  return (CBloodParticle *)pCVar1;
}


// Assembly code:
// 004ee410: PUSH 0x1
//   Label: core_gore.cpp_FUN_004ee410
// 004ee412: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004ee416: PUSH EDX
// 004ee417: CALL core_particle.cpp_CParticle_dtor_FUN_00545670
//   XREF to: 00545670 (UNCONDITIONAL_CALL)
// 004ee41c: ADD ESP,0x8
// 004ee41f: RET

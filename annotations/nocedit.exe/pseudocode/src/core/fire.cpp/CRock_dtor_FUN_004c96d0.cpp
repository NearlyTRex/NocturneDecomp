// Name: core_fire.cpp_CRock_dtor_FUN_004c96d0
// Address: 004c96d0
// Address Range: [[004c96d0, 004c96df]]
// Convention: __cdecl
// Signature: CRock * core_fire.cpp_CRock_dtor_FUN_004c96d0(CRock * this_ptr)
// Function calls:
//   core_particle.cpp_CParticle_dtor_FUN_00545670

#include "nocturne.h"

CRock * __cdecl core_fire_cpp_CRock_dtor_FUN_004c96d0(CRock *this_ptr)

{
  CRock *pCVar1;
  
  pCVar1 = (CRock *)core_particle_cpp_CParticle_dtor_FUN_00545670(&this_ptr->base);
  return pCVar1;
}


// Assembly code:
// 004c96d0: PUSH 0x1
//   Label: core_fire.cpp_CRock_dtor_FUN_004c96d0
// 004c96d2: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004c96d6: PUSH EDX
// 004c96d7: CALL core_particle.cpp_CParticle_dtor_FUN_00545670
//   XREF to: 00545670 (UNCONDITIONAL_CALL)
// 004c96dc: ADD ESP,0x8
// 004c96df: RET

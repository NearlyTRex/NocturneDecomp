// Name: core_fire.cpp_CSpark_dtor_FUN_004c9730
// Address: 004c9730
// Address Range: [[004c9730, 004c973f]]
// Convention: __cdecl
// Signature: CSpark * core_fire.cpp_CSpark_dtor_FUN_004c9730(CSpark * this_ptr)
// Function calls:
//   core_particle.cpp_CParticle_dtor_FUN_00545670

#include "nocturne.h"

CSpark * __cdecl core_fire_cpp_CSpark_dtor_FUN_004c9730(CSpark *this_ptr)

{
  CSpark *pCVar1;
  
  pCVar1 = (CSpark *)core_particle_cpp_CParticle_dtor_FUN_00545670(&this_ptr->base);
  return pCVar1;
}


// Assembly code:
// 004c9730: PUSH 0x1
//   Label: core_fire.cpp_CSpark_dtor_FUN_004c9730
// 004c9732: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004c9736: PUSH EDX
// 004c9737: CALL core_particle.cpp_CParticle_dtor_FUN_00545670
//   XREF to: 00545670 (UNCONDITIONAL_CALL)
// 004c973c: ADD ESP,0x8
// 004c973f: RET

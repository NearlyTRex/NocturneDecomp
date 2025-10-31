// Name: core_fire.cpp_CFireball_dtor_FUN_004c9700
// Address: 004c9700
// Address Range: [[004c9700, 004c970f]]
// Convention: __cdecl
// Signature: CFireball * core_fire.cpp_CFireball_dtor_FUN_004c9700(CFireball * this_ptr)
// Function calls:
//   core_particle.cpp_CParticle_dtor_FUN_00545670

#include "nocturne.h"

CFireball * __cdecl core_fire_cpp_CFireball_dtor_FUN_004c9700(CFireball *this_ptr)

{
  CFireball *pCVar1;
  
  pCVar1 = (CFireball *)core_particle_cpp_CParticle_dtor_FUN_00545670(&this_ptr->base);
  return pCVar1;
}


// Assembly code:
// 004c9700: PUSH 0x1
//   Label: core_fire.cpp_CFireball_dtor_FUN_004c9700
// 004c9702: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004c9706: PUSH EDX
// 004c9707: CALL core_particle.cpp_CParticle_dtor_FUN_00545670
//   XREF to: 00545670 (UNCONDITIONAL_CALL)
// 004c970c: ADD ESP,0x8
// 004c970f: RET

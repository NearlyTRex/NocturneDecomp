// Name: core_fire.cpp_CPopcorn_dtor_FUN_004c94e0
// Address: 004c94e0
// Address Range: [[004c94e0, 004c94ef]]
// Convention: __cdecl
// Signature: CPopcorn * core_fire.cpp_CPopcorn_dtor_FUN_004c94e0(CPopcorn * this_ptr)
// Function calls:
//   core_particle.cpp_CParticle_dtor_FUN_00545670

#include "nocturne.h"

CPopcorn * __cdecl core_fire_cpp_CPopcorn_dtor_FUN_004c94e0(CPopcorn *this_ptr)

{
  CParticle *pCVar1;
  
  pCVar1 = core_particle_cpp_CParticle_dtor_FUN_00545670(&this_ptr->base);
  return (CPopcorn *)pCVar1;
}


// Assembly code:
// 004c94e0: PUSH 0x1
//   Label: core_fire.cpp_CPopcorn_dtor_FUN_004c94e0
// 004c94e2: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004c94e6: PUSH EDX
// 004c94e7: CALL core_particle.cpp_CParticle_dtor_FUN_00545670
//   XREF to: 00545670 (UNCONDITIONAL_CALL)
// 004c94ec: ADD ESP,0x8
// 004c94ef: RET

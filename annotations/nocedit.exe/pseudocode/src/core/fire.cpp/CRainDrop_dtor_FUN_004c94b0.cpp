// Name: core_fire.cpp_CRainDrop_dtor_FUN_004c94b0
// Address: 004c94b0
// Address Range: [[004c94b0, 004c94bf]]
// Convention: __cdecl
// Signature: CRainDrop * core_fire.cpp_CRainDrop_dtor_FUN_004c94b0(CRainDrop * this_ptr)
// Function calls:
//   core_particle.cpp_CParticle_dtor_FUN_00545670

#include "nocturne.h"

CRainDrop * __cdecl core_fire_cpp_CRainDrop_dtor_FUN_004c94b0(CRainDrop *this_ptr)

{
  CParticle *pCVar1;
  
  pCVar1 = core_particle_cpp_CParticle_dtor_FUN_00545670(&this_ptr->base);
  return (CRainDrop *)pCVar1;
}


// Assembly code:
// 004c94b0: PUSH 0x1
//   Label: core_fire.cpp_CRainDrop_dtor_FUN_004c94b0
// 004c94b2: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004c94b6: PUSH EDX
// 004c94b7: CALL core_particle.cpp_CParticle_dtor_FUN_00545670
//   XREF to: 00545670 (UNCONDITIONAL_CALL)
// 004c94bc: ADD ESP,0x8
// 004c94bf: RET

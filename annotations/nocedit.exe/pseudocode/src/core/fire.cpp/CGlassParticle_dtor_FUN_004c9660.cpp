// Name: core_fire.cpp_CGlassParticle_dtor_FUN_004c9660
// Address: 004c9660
// Address Range: [[004c9660, 004c9680]]
// Convention: __cdecl
// Signature: CGlassParticle * core_fire.cpp_CGlassParticle_dtor_FUN_004c9660(CGlassParticle * this_ptr)
// Function calls:
//   core_cloth.cpp_freeVectors_FUN_0043e460
//   core_particle.cpp_CParticle_dtor_FUN_00545670

#include "nocturne.h"

CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_dtor_FUN_004c9660(CGlassParticle *this_ptr)

{
  int iVar1;
  CGlassParticle *pCVar2;
  
  iVar1 = core_cloth_cpp_freeVectors_FUN_0043e460((CVector3f **)(this_ptr->field1_0x38 + 0x40));
  pCVar2 = (CGlassParticle *)
           core_particle_cpp_CParticle_dtor_FUN_00545670((CParticle *)(iVar1 + -0x78));
  return pCVar2;
}


// Assembly code:
// 004c9660: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_fire.cpp_CGlassParticle_dtor_FUN_004c9660
//   XREF to: Stack[0x4] (READ)
// 004c9664: PUSH 0x0
// 004c9666: ADD EAX,0x78
// 004c9669: PUSH EAX
// 004c966a: CALL core_cloth.cpp_freeVectors_FUN_0043e460
//   XREF to: 0043e460 (UNCONDITIONAL_CALL)
// 004c966f: ADD ESP,0x8
// 004c9672: PUSH 0x1
// 004c9674: SUB EAX,0x78
// 004c9677: PUSH EAX
// 004c9678: CALL core_particle.cpp_CParticle_dtor_FUN_00545670
//   XREF to: 00545670 (UNCONDITIONAL_CALL)
// 004c967d: ADD ESP,0x8
// 004c9680: RET

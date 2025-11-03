// Name: core_gore.cpp_FUN_004eb9a0
// Address: 004eb9a0
// Address Range: [[004eb9a0, 004eb9cf]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004eb9a0()
// Cross-references:
//   core_gore.cpp_FUN_004edaa0 (004edaa0) at 004edae3 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_getRandomInt_FUN_0040cc70
//   core_particle.cpp_CParticle_setup_FUN_00545680

#include "nocturne.h"

/* Signature: undefined1 core_gore.cpp_FUN_004eb9a0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4) */

void core_gore_cpp_FUN_004eb9a0(void)

{
  float fVar1;
  CParticle *in_stack_00000004;
  CVector3f *in_stack_0000000c;
  CVector3f *in_stack_00000010;
  
  in_stack_00000004[1].position.x = (float)in_stack_00000010;
  fVar1 = (float)core_actor_cpp_getRandomInt_FUN_0040cc70(0,0xf);
  in_stack_00000004[1].position.y = fVar1;
  core_particle_cpp_CParticle_setup_FUN_00545680
            (in_stack_00000004,in_stack_0000000c,in_stack_00000010);
  return;
}


// Assembly code:
// 004eb9a0: PUSH EBX
//   Label: core_gore.cpp_FUN_004eb9a0
// 004eb9a1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004eb9a5: PUSH 0xf
// 004eb9a7: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 004eb9ab: PUSH 0x0
// 004eb9ad: MOV dword ptr [EBX + 0x38],EAX
// 004eb9b0: CALL core_actor.cpp_getRandomInt_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 004eb9b5: ADD ESP,0x8
// 004eb9b8: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 004eb9bc: PUSH EDX
// 004eb9bd: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004eb9c1: PUSH ECX
// 004eb9c2: PUSH EBX
// 004eb9c3: MOV dword ptr [EBX + 0x3c],EAX
// 004eb9c6: CALL core_particle.cpp_CParticle_setup_FUN_00545680
//   XREF to: 00545680 (UNCONDITIONAL_CALL)
// 004eb9cb: ADD ESP,0xc
// 004eb9ce: POP EBX
// 004eb9cf: RET

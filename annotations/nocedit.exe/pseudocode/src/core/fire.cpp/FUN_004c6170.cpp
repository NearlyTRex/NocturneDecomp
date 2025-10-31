// Name: core_fire.cpp_FUN_004c6170
// Address: 004c6170
// Address Range: [[004c6170, 004c61bc]]
// Convention: unknown
// Signature: undefined core_fire.cpp_FUN_004c6170()
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c91e0 (004c91e0) at 004c9214 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_particle.cpp_CParticle_setup_FUN_00545680

#include "nocturne.h"

void core_fire_cpp_FUN_004c6170(void)

{
  float fVar1;
  CParticle *in_stack_00000004;
  CVector3f *in_stack_00000008;
  CParticle *in_stack_0000000c;
  CVector3f *in_stack_00000010;
  float in_stack_00000018;
  
  core_particle_cpp_CParticle_setup_FUN_00545680
            (in_stack_00000004,in_stack_00000008,in_stack_00000010);
  if (in_stack_00000004 + 1 != in_stack_0000000c) {
    in_stack_00000004[1].position.x = (in_stack_0000000c->position).x;
    in_stack_00000004[1].position.y = (in_stack_0000000c->position).y;
    in_stack_00000004[1].position.z = (in_stack_0000000c->position).z;
  }
  in_stack_00000004[1].gravity_acceleration = in_stack_00000018;
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-6.2831855,6.2831855);
  in_stack_00000004[1].velocity.x = fVar1;
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-3.1415927,3.1415927);
  in_stack_00000004[1].lifetime_remaining = 0.0;
  in_stack_00000004->lifetime_remaining = 3.0;
  in_stack_00000004[1].velocity.y = fVar1;
  return;
}


// Assembly code:
// 004c6170: PUSH EBX
//   Label: core_fire.cpp_FUN_004c6170
// 004c6171: PUSH ESI
// 004c6172: SUB ESP,0x4
// 004c6175: MOV EBX,dword ptr [ESP + 0x10]
// 004c6179: MOV ESI,dword ptr [ESP + 0x18]
// 004c617d: MOV EDX,dword ptr [ESP + 0x1c]
// 004c6181: PUSH EDX
// 004c6182: MOV ECX,dword ptr [ESP + 0x18]
// 004c6186: PUSH ECX
// 004c6187: PUSH EBX
// 004c6188: CALL core_particle.cpp_CParticle_setup_FUN_00545680
//   XREF to: 00545680 (UNCONDITIONAL_CALL)
// 004c618d: LEA EAX,[EBX + 0x38]
// 004c6190: ADD ESP,0xc
// 004c6193: CMP EAX,ESI
// 004c6195: JZ 0x004c61a7
//   XREF to: 004c61a7 (CONDITIONAL_JUMP)
// 004c6197: MOV EDX,dword ptr [ESI]
// 004c6199: MOV dword ptr [EAX],EDX
// 004c619b: MOV EDX,dword ptr [ESI + 0x4]
// 004c619e: MOV dword ptr [EAX + 0x4],EDX
// 004c61a1: MOV EDX,dword ptr [ESI + 0x8]
// 004c61a4: MOV dword ptr [EAX + 0x8],EDX
// 004c61a7: PUSH 0x40c90fdb
//   Label: LAB_004c61a7
// 004c61ac: MOV EAX,dword ptr [ESP + 0x24]
// 004c61b0: PUSH 0xc0c90fdb
// 004c61b5: MOV dword ptr [EBX + 0x54],EAX
// 004c61b8: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)

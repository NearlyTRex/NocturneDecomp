// Name: core_fire.cpp_FUN_004c17c0
// Address: 004c17c0
// Address Range: [[004c17c0, 004c17df]]
// Convention: unknown
// Signature: undefined core_fire.cpp_FUN_004c17c0()
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c7e60 (004c7e60) at 004c7ea0 [UNCONDITIONAL_CALL]
// Function calls:
//   core_particle.cpp_CParticle_setup_FUN_00545680

#include "nocturne.h"

void core_fire_cpp_FUN_004c17c0(void)

{
  CParticle *in_stack_00000004;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  float in_stack_00000010;
  
  in_stack_00000004[1].velocity.x = in_stack_00000010;
  core_particle_cpp_CParticle_setup_FUN_00545680
            (in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  return;
}


// Assembly code:
// 004c17c0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_fire.cpp_FUN_004c17c0
//   XREF to: Stack[0x4] (READ)
// 004c17c4: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x10] (READ)
// 004c17c8: MOV dword ptr [EAX + 0x44],EDX
// 004c17cb: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 004c17cf: PUSH EDX
// 004c17d0: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004c17d4: PUSH ECX
// 004c17d5: PUSH EAX
// 004c17d6: CALL core_particle.cpp_CParticle_setup_FUN_00545680
//   XREF to: 00545680 (UNCONDITIONAL_CALL)
// 004c17db: ADD ESP,0xc
// 004c17de: MOV EAX,EAX

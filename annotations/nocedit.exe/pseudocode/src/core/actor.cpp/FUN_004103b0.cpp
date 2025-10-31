// Name: core_actor.cpp_FUN_004103b0
// Address: 004103b0
// Address Range: [[004103b0, 004103c6]]
// Convention: unknown
// Signature: undefined core_actor.cpp_FUN_004103b0()

#include "nocturne.h"

void core_actor_cpp_FUN_004103b0(void)

{
  undefined4 *in_stack_00000004;
  
  in_stack_00000004[2] = 0;
  in_stack_00000004[1] = in_stack_00000004[2];
  *in_stack_00000004 = in_stack_00000004[1];
  return;
}


// Assembly code:
// 004103b0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_actor.cpp_FUN_004103b0
//   XREF to: Stack[0x4] (READ)
// 004103b4: MOV dword ptr [EAX + 0x8],0x0
// 004103bb: MOV EDX,dword ptr [EAX + 0x8]
// 004103be: MOV dword ptr [EAX + 0x4],EDX
// 004103c1: MOV EDX,dword ptr [EAX + 0x4]
// 004103c4: MOV dword ptr [EAX],EDX
// 004103c6: RET

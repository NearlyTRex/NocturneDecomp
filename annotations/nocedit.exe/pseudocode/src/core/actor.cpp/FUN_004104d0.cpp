// Name: core_actor.cpp_FUN_004104d0
// Address: 004104d0
// Address Range: [[004104d0, 004104de]]
// Convention: unknown
// Signature: undefined core_actor.cpp_FUN_004104d0()
// Cross-references:
//   core_actor.cpp_renderActorBoundingBox_FUN_0040d940 (0040d940) at 0040dd63 [UNCONDITIONAL_CALL]

#include "nocturne.h"

undefined4 * core_actor_cpp_FUN_004104d0(void)

{
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000008;
  return in_stack_00000004;
}


// Assembly code:
// 004104d0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_actor.cpp_FUN_004104d0
//   XREF to: Stack[0x4] (READ)
// 004104d4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004104d8: MOV EAX,dword ptr [EAX]
// 004104da: MOV dword ptr [EDX],EAX
// 004104dc: MOV EAX,EDX
// 004104de: RET

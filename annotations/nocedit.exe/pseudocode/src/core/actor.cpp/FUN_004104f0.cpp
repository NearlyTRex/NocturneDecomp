// Name: core_actor.cpp_FUN_004104f0
// Address: 004104f0
// Address Range: [[004104f0, 004104fe]]
// Convention: unknown
// Signature: undefined core_actor.cpp_FUN_004104f0()
// Cross-references:
//   core_actor.cpp_renderActorBoundingBox_FUN_0040d940 (0040d940) at 0040d9d1 [UNCONDITIONAL_CALL]

#include "nocturne.h"

undefined4 * core_actor_cpp_FUN_004104f0(void)

{
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000008;
  return in_stack_00000004;
}


// Assembly code:
// 004104f0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_actor.cpp_FUN_004104f0
//   XREF to: Stack[0x4] (READ)
// 004104f4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004104f8: MOV EAX,dword ptr [EAX]
// 004104fa: MOV dword ptr [EDX],EAX
// 004104fc: MOV EAX,EDX
// 004104fe: RET

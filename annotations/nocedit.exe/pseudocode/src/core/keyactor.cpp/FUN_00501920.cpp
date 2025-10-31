// Name: core_keyactor.cpp_FUN_00501920
// Address: 00501920
// Address Range: [[00501920, 00501932]]
// Convention: unknown
// Signature: undefined core_keyactor.cpp_FUN_00501920()
// Function calls:
//   core_actor.cpp_CDemonActor_onPickup_FUN_0040a010

#include "nocturne.h"

/* Signature: undefined1 actors_other_keyactor.cpp_FUN_00501920(undefined4 param_1, undefined4
   param_2) */

void core_keyactor_cpp_FUN_00501920(void)

{
  CDemonActor *in_stack_00000004;
  CDemonActor *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_onPickup_FUN_0040a010(in_stack_00000004,in_stack_00000008);
  return;
}


// Assembly code:
// 00501920: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_keyactor.cpp_FUN_00501920
//   XREF to: Stack[0x8] (READ)
// 00501924: PUSH EDX
// 00501925: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00501929: PUSH ECX
// 0050192a: CALL core_actor.cpp_CDemonActor_onPickup_FUN_0040a010
//   XREF to: 0040a010 (UNCONDITIONAL_CALL)
// 0050192f: ADD ESP,0x8
// 00501932: RET

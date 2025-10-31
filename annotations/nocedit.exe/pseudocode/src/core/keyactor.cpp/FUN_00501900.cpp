// Name: core_keyactor.cpp_FUN_00501900
// Address: 00501900
// Address Range: [[00501900, 0050191b]]
// Convention: unknown
// Signature: undefined core_keyactor.cpp_FUN_00501900()
// Globals:
//   TerminatedCString s_CHero_00630c77
// Function calls:
//   core_actor.cpp_isOfClass_FUN_0040c6d0

#include "nocturne.h"

/* Signature: undefined1 actors_other_keyactor.cpp_FUN_00501900(undefined1 param_1, undefined4
   param_2) */

int core_keyactor_cpp_FUN_00501900(void)

{
  int iVar1;
  CDemonActor *in_stack_00000008;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000008,"CHero");
  if (iVar1 != 0) {
    iVar1 = 2;
  }
  return iVar1;
}


// Assembly code:
// 00501900: PUSH 0x630c77
//   Label: core_keyactor.cpp_FUN_00501900
//   XREF to: 00630c77 (DATA)
// 00501905: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00501909: PUSH EDX
// 0050190a: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 0050190f: ADD ESP,0x8
// 00501912: TEST EAX,EAX
// 00501914: JZ 0x0050191b
//   XREF to: 0050191b (CONDITIONAL_JUMP)
// 00501916: MOV EAX,0x2
// 0050191b: RET
//   Label: LAB_0050191b

// Name: core_health.cpp_FUN_004f1fb0
// Address: 004f1fb0
// Address Range: [[004f1fb0, 004f1fcb]]
// Convention: unknown
// Signature: undefined core_health.cpp_FUN_004f1fb0()
// Globals:
//   TerminatedCString s_CHero_0062ea29
// Function calls:
//   core_actor.cpp_isOfClass_FUN_0040c6d0

#include "nocturne.h"

/* Signature: undefined1 actors_other_health.cpp_FUN_004f1fb0(undefined1 param_1, undefined4
   param_2) */

int core_health_cpp_FUN_004f1fb0(void)

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
// 004f1fb0: PUSH 0x62ea29
//   Label: core_health.cpp_FUN_004f1fb0
//   XREF to: 0062ea29 (DATA)
// 004f1fb5: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004f1fb9: PUSH EDX
// 004f1fba: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004f1fbf: ADD ESP,0x8
// 004f1fc2: TEST EAX,EAX
// 004f1fc4: JZ 0x004f1fcb
//   XREF to: 004f1fcb (CONDITIONAL_JUMP)
// 004f1fc6: MOV EAX,0x2
// 004f1fcb: RET
//   Label: LAB_004f1fcb

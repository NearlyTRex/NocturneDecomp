// Name: core_crate.cpp_FUN_00448600
// Address: 00448600
// Address Range: [[00448600, 0044861b]]
// Convention: unknown
// Signature: undefined core_crate.cpp_FUN_00448600()
// Globals:
//   undefined4 s_CHero_00619b0a
// Function calls:
//   core_actor.cpp_isOfClass_FUN_0040c6d0

#include "nocturne.h"

/* Signature: undefined1 actors_other_crate.cpp_FUN_00448600(undefined1 param_1, undefined4 param_2)
    */

int core_crate_cpp_FUN_00448600(void)

{
  int iVar1;
  CDemonActor *in_stack_00000008;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000008,"?CHero" + 1);
  if (iVar1 != 0) {
    iVar1 = 4;
  }
  return iVar1;
}


// Assembly code:
// 00448600: PUSH 0x619b0a
//   Label: core_crate.cpp_FUN_00448600
//   XREF to: 00619b0a (DATA)
// 00448605: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00448609: PUSH EDX
// 0044860a: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 0044860f: ADD ESP,0x8
// 00448612: TEST EAX,EAX
// 00448614: JZ 0x0044861b
//   XREF to: 0044861b (CONDITIONAL_JUMP)
// 00448616: MOV EAX,0x4
// 0044861b: RET
//   Label: LAB_0044861b

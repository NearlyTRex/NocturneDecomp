// Name: core_icepick.cpp_FUN_004f8ad0
// Address: 004f8ad0
// Address Range: [[004f8ad0, 004f8af7]]
// Convention: unknown
// Signature: undefined core_icepick.cpp_FUN_004f8ad0()
// Cross-references:
//   core_icepick.cpp_FUN_004f80b0 (004f80b0) at 004f858a [UNCONDITIONAL_CALL]
// Function calls:
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00

#include "nocturne.h"

/* Signature: undefined1 actors_hero_icepick.cpp_FUN_004f8ad0(undefined4 param_1) */

undefined4 core_icepick_cpp_FUN_004f8ad0(void)

{
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x1fbf4) == 0) {
    return 0;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
  return 1;
}


// Assembly code:
// 004f8ad0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_icepick.cpp_FUN_004f8ad0
//   XREF to: Stack[0x4] (READ)
// 004f8ad4: CMP dword ptr [EAX + 0x1fbf4],0x0
// 004f8adb: JNZ 0x004f8ae0
//   XREF to: 004f8ae0 (CONDITIONAL_JUMP)
// 004f8add: XOR EAX,EAX
// 004f8adf: RET
// 004f8ae0: PUSH 0x1
//   Label: LAB_004f8ae0
// 004f8ae2: PUSH 0x16
// 004f8ae4: ADD EAX,0x158
// 004f8ae9: PUSH EAX
// 004f8aea: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f8aef: MOV EAX,0x1
// 004f8af4: ADD ESP,0xc
// 004f8af7: RET

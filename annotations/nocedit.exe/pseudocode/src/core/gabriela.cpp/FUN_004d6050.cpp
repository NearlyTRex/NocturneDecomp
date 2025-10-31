// Name: core_gabriela.cpp_FUN_004d6050
// Address: 004d6050
// Address Range: [[004d6050, 004d6082]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d6050()
// Cross-references:
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d3bb2 [UNCONDITIONAL_CALL]
// Function calls:
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00

#include "nocturne.h"

/* Signature: undefined1 actors_hero_gabriella.cpp_FUN_004d6050(undefined4 param_1) */

undefined4 core_gabriela_cpp_FUN_004d6050(void)

{
  int in_stack_00000004;
  
  *(undefined4 *)(in_stack_00000004 + 0x1fba0) = 0;
  if (*(int *)(in_stack_00000004 + 0x24b4) == 0) {
    return 0;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
  return 1;
}


// Assembly code:
// 004d6050: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_gabriela.cpp_FUN_004d6050
//   XREF to: Stack[0x4] (READ)
// 004d6054: MOV EDX,dword ptr [EAX + 0x24b4]
// 004d605a: MOV dword ptr [EAX + 0x1fba0],0x0
// 004d6064: TEST EDX,EDX
// 004d6066: JNZ 0x004d606b
//   XREF to: 004d606b (CONDITIONAL_JUMP)
// 004d6068: XOR EAX,EAX
// 004d606a: RET
// 004d606b: PUSH 0x1
//   Label: LAB_004d606b
// 004d606d: PUSH 0x5
// 004d606f: ADD EAX,0x158
// 004d6074: PUSH EAX
// 004d6075: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004d607a: MOV EAX,0x1
// 004d607f: ADD ESP,0xc
// 004d6082: RET

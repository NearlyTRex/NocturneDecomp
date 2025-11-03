// Name: core_stranger.cpp_CStranger_FUN_005c1f80
// Address: 005c1f80
// Address Range: [[005c1f80, 005c1fd1]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c1f80()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005bdd20 (005bdd20) at 005bde10 [UNCONDITIONAL_CALL]
// Function calls:
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00

#include "nocturne.h"

/* Signature: undefined1 actors_hero_stranger.cpp_CStranger_FUN_005c1f80(CStranger* param_1) */

void core_stranger_cpp_CStranger_FUN_005c1f80(void)

{
  int in_stack_00000004;
  
  *(undefined4 *)(in_stack_00000004 + 0x1fc40) = 0x40800000;
  if (*(int *)(in_stack_00000004 + 0x24f8) == *(int *)(in_stack_00000004 + 0x1fc2c)) {
    *(undefined4 *)(in_stack_00000004 + 0x1fc2c) = 0;
  }
  (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x13c))();
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            ((CMotionController *)(in_stack_00000004 + 0x158));
  return;
}


// Assembly code:
// 005c1f80: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005c1f80
// 005c1f81: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005c1f85: MOV EAX,dword ptr [EBX + 0x24f8]
// 005c1f8b: MOV EDX,dword ptr [EBX + 0x1fc2c]
// 005c1f91: MOV dword ptr [EBX + 0x1fc40],0x40800000
// 005c1f9b: CMP EAX,EDX
// 005c1f9d: JNZ 0x005c1fa9
//   XREF to: 005c1fa9 (CONDITIONAL_JUMP)
// 005c1f9f: MOV dword ptr [EBX + 0x1fc2c],0x0
// 005c1fa9: PUSH 0x0
//   Label: LAB_005c1fa9
// 005c1fab: PUSH 0x1
// 005c1fad: MOV EAX,dword ptr [EBX + 0x154]
// 005c1fb3: PUSH EBX
// 005c1fb4: CALL dword ptr [EAX + 0x13c]
// 005c1fba: ADD ESP,0xc
// 005c1fbd: PUSH 0x1
// 005c1fbf: PUSH 0x0
// 005c1fc1: ADD EBX,0x158
// 005c1fc7: PUSH EBX
// 005c1fc8: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005c1fcd: ADD ESP,0xc
// 005c1fd0: POP EBX
// 005c1fd1: RET

// Name: core_batman.cpp_FUN_004167f0
// Address: 004167f0
// Address Range: [[004167f0, 00416826]]
// Convention: unknown
// Signature: undefined core_batman.cpp_FUN_004167f0()
// Cross-references:
//   core_batman.cpp_CBatman_process_FUN_00416870 (00416870) at 004170ad [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_FUN_0040cd10
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_batman.cpp_FUN_004167f0(CCharacter* param_1) */

void core_batman_cpp_FUN_004167f0(void)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_FUN_0040cd10();
  if (iVar1 != 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
  return;
}


// Assembly code:
// 004167f0: PUSH 0x3f000000
//   Label: core_batman.cpp_FUN_004167f0
// 004167f5: CALL core_actor.cpp_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 004167fa: ADD ESP,0x4
// 004167fd: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 00416801: ADD EDX,0x158
// 00416807: TEST EAX,EAX
// 00416809: JZ 0x00416819
//   XREF to: 00416819 (CONDITIONAL_JUMP)
// 0041680b: PUSH 0x1
// 0041680d: PUSH 0x1
// 0041680f: PUSH EDX
// 00416810: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00416815: ADD ESP,0xc
// 00416818: RET
// 00416819: PUSH 0x1
//   Label: LAB_00416819
// 0041681b: PUSH 0x2
// 0041681d: PUSH EDX
// 0041681e: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00416823: ADD ESP,0xc
// 00416826: RET

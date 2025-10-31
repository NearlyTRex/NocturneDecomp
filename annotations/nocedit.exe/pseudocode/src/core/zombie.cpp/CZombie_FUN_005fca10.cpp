// Name: core_zombie.cpp_CZombie_FUN_005fca10
// Address: 005fca10
// Address Range: [[005fca10, 005fca77]]
// Convention: unknown
// Signature: undefined core_zombie.cpp_CZombie_FUN_005fca10()
// Cross-references:
//   core_zombie.cpp_CZombie_PickupSomethingPossibly_FUN_005fb530 (005fb530) at 005fb933 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005f95b4 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_CHASE_2_00658a47
// Function calls:
//   core_actor.cpp_FUN_0040cc70
//   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_zombie.cpp_CZombie_FUN_005fca10(CZombie* param_1) */

void core_zombie_cpp_CZombie_FUN_005fca10(void)

{
  int iVar1;
  int in_stack_0000000c;
  
  core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0();
  iVar1 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0();
  if (iVar1 != 0x16) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
    return;
  }
  if (*(int *)(in_stack_0000000c + 0xbf44) == 0) {
    core_actor_cpp_FUN_0040cc70();
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
  return;
}


// Assembly code:
// 005fca10: PUSH EBX
//   Label: core_zombie.cpp_CZombie_FUN_005fca10
// 005fca11: PUSH 0x0
// 005fca13: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005fca17: PUSH 0x658a47
//   XREF to: 00658a47 (DATA)
// 005fca1c: ADD EBX,0x158
// 005fca22: PUSH EBX
// 005fca23: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 005fca28: ADD ESP,0x4
// 005fca2b: PUSH EAX
// 005fca2c: CALL core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
//   XREF to: 0052d4f0 (UNCONDITIONAL_CALL)
// 005fca31: ADD ESP,0xc
// 005fca34: CMP EAX,0x16
// 005fca37: JNZ 0x005fca69
//   XREF to: 005fca69 (CONDITIONAL_JUMP)
// 005fca39: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005fca3d: MOV EDX,dword ptr [EAX + 0xbf44]
// 005fca43: TEST EDX,EDX
// 005fca45: JZ 0x005fca56
//   XREF to: 005fca56 (CONDITIONAL_JUMP)
// 005fca47: PUSH 0x1
// 005fca49: PUSH 0x16
// 005fca4b: PUSH EBX
//   Label: LAB_005fca4b
// 005fca4c: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005fca51: ADD ESP,0xc
// 005fca54: POP EBX
// 005fca55: RET
// 005fca56: PUSH 0x1
//   Label: LAB_005fca56
// 005fca58: PUSH 0x2
// 005fca5a: PUSH EDX
// 005fca5b: CALL core_actor.cpp_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 005fca60: ADD ESP,0x8
// 005fca63: ADD EAX,0x15
// 005fca66: PUSH EAX
// 005fca67: JMP 0x005fca4b
//   XREF to: 005fca4b (UNCONDITIONAL_JUMP)
// 005fca69: PUSH 0x1
//   Label: LAB_005fca69
// 005fca6b: PUSH 0x1
// 005fca6d: PUSH EBX
// 005fca6e: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005fca73: ADD ESP,0xc
// 005fca76: POP EBX
// 005fca77: RET

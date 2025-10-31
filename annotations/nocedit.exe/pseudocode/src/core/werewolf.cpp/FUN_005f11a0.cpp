// Name: core_werewolf.cpp_FUN_005f11a0
// Address: 005f11a0
// Address Range: [[005f11a0, 005f11d5]]
// Convention: unknown
// Signature: undefined core_werewolf.cpp_FUN_005f11a0()
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042c920
//   core_motion.cpp_CMotionController_FUN_0052dab0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_werewolf.cpp_FUN_005f11a0(undefined4 param_1, undefined4
   param_2, undefined4 param_3, undefined4 param_4) */

void core_werewolf_cpp_FUN_005f11a0(void)

{
  int iVar1;
  CCharacter *in_stack_00000008;
  
  iVar1 = core_motion_cpp_CMotionController_FUN_0052dab0();
  if (*(int *)(iVar1 + 0x24) == 0x13) {
    return;
  }
  core_charactr_cpp_CCharacter_FUN_0042c920(in_stack_00000008);
  return;
}


// Assembly code:
// 005f11a0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_werewolf.cpp_FUN_005f11a0
//   XREF to: Stack[0x4] (READ)
// 005f11a4: ADD EAX,0x158
// 005f11a9: PUSH EAX
// 005f11aa: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005f11af: MOV EAX,dword ptr [EAX + 0x24]
// 005f11b2: ADD ESP,0x4
// 005f11b5: CMP EAX,0x13
// 005f11b8: JNZ 0x005f11bb
//   XREF to: 005f11bb (CONDITIONAL_JUMP)
// 005f11ba: RET
// 005f11bb: PUSH dword ptr [ESP + 0x10]
//   Label: LAB_005f11bb
//   XREF to: Stack[0x10] (READ)
// 005f11bf: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005f11c3: PUSH dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 005f11c7: PUSH EDX
// 005f11c8: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005f11cc: PUSH ECX
// 005f11cd: CALL core_charactr.cpp_CCharacter_FUN_0042c920
//   XREF to: 0042c920 (UNCONDITIONAL_CALL)
// 005f11d2: ADD ESP,0x10
// 005f11d5: RET

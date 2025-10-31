// Name: core_hotdemon.cpp_FUN_004f7680
// Address: 004f7680
// Address Range: [[004f7680, 004f76b2]]
// Convention: unknown
// Signature: undefined core_hotdemon.cpp_FUN_004f7680()
// Globals:
//   void* switchdataD_004f765c = 004f76a4
// Function calls:
//   core_motion.cpp_CMotionController_FUN_0052dab0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_hotdemon.cpp_FUN_004f7680(undefined4 param_1) */

undefined4 core_hotdemon_cpp_FUN_004f7680(void)

{
  int iVar1;
  
  iVar1 = core_motion_cpp_CMotionController_FUN_0052dab0();
  switch(*(undefined4 *)(iVar1 + 0x24)) {
  case 4:
  case 10:
    return 1;
  case 5:
  case 0xb:
    return 2;
  default:
    return 0;
  }
}


// Assembly code:
// 004f7680: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_hotdemon.cpp_FUN_004f7680
//   XREF to: Stack[0x4] (READ)
// 004f7684: ADD EAX,0x158
// 004f7689: PUSH EAX
// 004f768a: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004f768f: MOV EAX,dword ptr [EAX + 0x24]
// 004f7692: SUB EAX,0x4
// 004f7695: ADD ESP,0x4
// 004f7698: CMP EAX,0x7
// 004f769b: JA 0x004f76b0
//   XREF to: 004f76b0 (CONDITIONAL_JUMP)
// 004f769d: JMP dword ptr [EAX*0x4 + 0x4f765c]
//   Label: switchD
//   XREF to: 004f76a4 (COMPUTED_JUMP)
//   XREF to: 004f76aa (COMPUTED_JUMP)
//   XREF to: 004f76b0 (COMPUTED_JUMP)
//   XREF to: 004f765c (DATA)
// 004f76a4: MOV EAX,0x1
//   Label: caseD_a
// 004f76a9: RET
// 004f76aa: MOV EAX,0x2
//   Label: caseD_b
// 004f76af: RET
// 004f76b0: XOR EAX,EAX
//   Label: caseD_9
// 004f76b2: RET

// Name: core_baron.cpp_FUN_004135a0
// Address: 004135a0
// Address Range: [[004135a0, 004135d7]]
// Convention: unknown
// Signature: undefined core_baron.cpp_FUN_004135a0()
// Cross-references:
//   core_baron.cpp_CBaronWeapon_setWeaponState_FUN_00413e90 (00413e90) at 00413f11 [UNCONDITIONAL_CALL]
//   core_baron.cpp_FUN_004135e0 (004135e0) at 00413694 [UNCONDITIONAL_CALL]
// Function calls:
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00

#include "nocturne.h"

/* Signature: undefined1 actors_hero_baron.cpp_FUN_004135a0(undefined4 param_1, undefined4 param_2)
    */

void core_baron_cpp_FUN_004135a0(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  if ((in_stack_00000008 == *(int *)(in_stack_00000004 + 0x1fcac)) &&
     (*(int *)(in_stack_00000004 + 0x1fcac) != 0)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)(in_stack_00000004 + 0x158),7,1);
    *(undefined4 *)(in_stack_00000004 + 0x1fcac) = 0;
    return;
  }
  return;
}


// Assembly code:
// 004135a0: PUSH EBX
//   Label: core_baron.cpp_FUN_004135a0
// 004135a1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004135a5: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004135a9: MOV EDX,dword ptr [EBX + 0x1fcac]
// 004135af: CMP EAX,EDX
// 004135b1: JNZ 0x004135b7
//   XREF to: 004135b7 (CONDITIONAL_JUMP)
// 004135b3: TEST EDX,EDX
// 004135b5: JNZ 0x004135b9
//   XREF to: 004135b9 (CONDITIONAL_JUMP)
// 004135b7: POP EBX
//   Label: LAB_004135b7
// 004135b8: RET
// 004135b9: PUSH 0x1
//   Label: LAB_004135b9
// 004135bb: PUSH 0x7
// 004135bd: LEA EAX,[EBX + 0x158]
// 004135c3: PUSH EAX
// 004135c4: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004135c9: ADD ESP,0xc
// 004135cc: MOV dword ptr [EBX + 0x1fcac],0x0
// 004135d6: POP EBX
// 004135d7: RET

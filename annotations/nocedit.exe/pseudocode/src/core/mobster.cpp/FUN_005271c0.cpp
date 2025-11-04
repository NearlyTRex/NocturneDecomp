// Name: core_mobster.cpp_FUN_005271c0
// Address: 005271c0
// Address Range: [[005271c0, 005271ea]]
// Convention: unknown
// Signature: undefined core_mobster.cpp_FUN_005271c0()
// Cross-references:
//   core_mobster.cpp_FUN_00525840 (00525840) at 00525ef2 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_mobster.cpp_FUN_005271c0(undefined4 param_1) */

void core_mobster_cpp_FUN_005271c0(void)

{
  float fVar1;
  int in_stack_00000004;
  
  if (0.0 < *(float *)(in_stack_00000004 + 0xbf90)) {
    return;
  }
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.5,1.0);
  *(float *)(in_stack_00000004 + 0xbf90) = fVar1;
  if (*(int *)(in_stack_00000004 + 0x24b4) != 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)(in_stack_00000004 + 0x158),6,1);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            ((CMotionController *)(in_stack_00000004 + 0x158),2,1);
  return;
}


// Assembly code:
// 005271c0: PUSH EBX
//   Label: core_mobster.cpp_FUN_005271c0
// 005271c1: SUB ESP,0x4
// 005271c4: MOV EBX,dword ptr [ESP + 0xc]
// 005271c8: FLD float ptr [EBX + 0xbf90]
// 005271ce: FLDZ
// 005271d0: FCOMPP
// 005271d2: FNSTSW AX
// 005271d4: SAHF
// 005271d5: JNC 0x005271dc
//   XREF to: 005271dc (CONDITIONAL_JUMP)
// 005271d7: ADD ESP,0x4
// 005271da: POP EBX
// 005271db: RET
// 005271dc: PUSH 0x3f800000
//   Label: LAB_005271dc
// 005271e1: PUSH 0x3f000000
// 005271e6: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)

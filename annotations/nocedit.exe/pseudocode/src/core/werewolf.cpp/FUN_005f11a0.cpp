// Name: core_werewolf.cpp_FUN_005f11a0
// Address: 005f11a0
// Address Range: [[005f11a0, 005f11d5]]
// Convention: unknown
// Signature: undefined core_werewolf.cpp_FUN_005f11a0()

#include "nocturne.h"

/* Signature: byte actors_enemy_werewolf.cpp_FUN_005f11a0(uint param_1, uint
   param_2, uint param_3, uint param_4) */

void core_werewolf_cpp_FUN_005f11a0(void)

{
  SMotion *pSVar1;
  int in_stack_00000004;
  CCharacter *in_stack_00000008;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     ((CMotionController *)(in_stack_00000004 + 0x158));
  if (pSVar1->state_index == 0x13) {
    return;
  }
  core_charactr_cpp_CCharacter_FUN_0042c920(in_stack_00000008);
  return;
}

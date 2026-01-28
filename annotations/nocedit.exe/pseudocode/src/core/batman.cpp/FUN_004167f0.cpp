// Name: core_batman.cpp_FUN_004167f0
// Address: 004167f0
// Address Range: [[004167f0, 00416826]]
// Convention: unknown
// Signature: void core_batman_cpp_FUN_004167f0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_batman.cpp_FUN_004167f0(CCharacter* param_1) */

void core_batman_cpp_FUN_004167f0(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
  if (iVar1 != 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)(in_stack_00000004 + 0x158),1,1);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            ((CMotionController *)(in_stack_00000004 + 0x158),2,1);
  return;
}

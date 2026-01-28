// Name: core_werewolf.cpp_FUN_005f1db0
// Address: 005f1db0
// Address Range: [[005f1db0, 005f1dea]]
// Convention: unknown
// Signature: undefined4 core_werewolf_cpp_FUN_005f1db0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_werewolf.cpp_FUN_005f1db0(uint param_1) */

uint core_werewolf_cpp_FUN_005f1db0(void)

{
  uint uVar1;
  SMotion *pSVar2;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x70) == 2) {
    return 2;
  }
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     ((CMotionController *)(in_stack_00000004 + 0x158));
  uVar1 = pSVar2->state_index;
  if (0xb < uVar1) {
    if (uVar1 < 0xd) {
      return 1;
    }
    if (uVar1 == 0xd) {
      return 2;
    }
  }
  return 0;
}

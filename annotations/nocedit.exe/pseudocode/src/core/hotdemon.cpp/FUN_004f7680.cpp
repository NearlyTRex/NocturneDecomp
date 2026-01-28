// Name: core_hotdemon.cpp_FUN_004f7680
// Address: 004f7680
// Address Range: [[004f7680, 004f76b2]]
// Convention: unknown
// Signature: undefined4 core_hotdemon_cpp_FUN_004f7680(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_hotdemon.cpp_FUN_004f7680(uint param_1) */

uint core_hotdemon_cpp_FUN_004f7680(void)

{
  SMotion *pSVar1;
  int in_stack_00000004;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     ((CMotionController *)(in_stack_00000004 + 0x158));
  switch(pSVar1->state_index) {
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

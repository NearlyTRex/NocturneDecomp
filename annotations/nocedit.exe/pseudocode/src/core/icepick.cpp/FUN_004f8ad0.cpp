// Name: core_icepick.cpp_FUN_004f8ad0
// Address: 004f8ad0
// Address Range: [[004f8ad0, 004f8af7]]
// Convention: unknown
// Signature: undefined core_icepick.cpp_FUN_004f8ad0()

#include "nocturne.h"

/* Signature: byte actors_hero_icepick.cpp_FUN_004f8ad0(uint param_1) */

uint core_icepick_cpp_FUN_004f8ad0(void)

{
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x1fbf4) == 0) {
    return 0;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            ((CMotionController *)(in_stack_00000004 + 0x158),0x16,1);
  return 1;
}

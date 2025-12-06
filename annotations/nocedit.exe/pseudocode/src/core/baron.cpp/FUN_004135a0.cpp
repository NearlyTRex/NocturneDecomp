// Name: core_baron.cpp_FUN_004135a0
// Address: 004135a0
// Address Range: [[004135a0, 004135d7]]
// Convention: unknown
// Signature: undefined core_baron.cpp_FUN_004135a0()

#include "nocturne.h"

/* Signature: byte actors_hero_baron.cpp_FUN_004135a0(uint param_1, uint param_2)
    */

void core_baron_cpp_FUN_004135a0(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  if ((in_stack_00000008 == *(int *)(in_stack_00000004 + 0x1fcac)) &&
     (*(int *)(in_stack_00000004 + 0x1fcac) != 0)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)(in_stack_00000004 + 0x158),7,1);
    *(uint *)(in_stack_00000004 + 0x1fcac) = 0;
    return;
  }
  return;
}

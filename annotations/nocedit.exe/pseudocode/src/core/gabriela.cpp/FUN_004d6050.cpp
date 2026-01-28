// Name: core_gabriela.cpp_FUN_004d6050
// Address: 004d6050
// Address Range: [[004d6050, 004d6082]]
// Convention: unknown
// Signature: undefined4 core_gabriela_cpp_FUN_004d6050(void)

#include "nocturne.h"

/* Signature: byte actors_hero_gabriella.cpp_FUN_004d6050(uint param_1) */

uint core_gabriela_cpp_FUN_004d6050(void)

{
  int in_stack_00000004;
  
  *(uint *)(in_stack_00000004 + 0x1fba0) = 0;
  if (*(int *)(in_stack_00000004 + 0x24b4) == 0) {
    return 0;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            ((CMotionController *)(in_stack_00000004 + 0x158),5,1);
  return 1;
}

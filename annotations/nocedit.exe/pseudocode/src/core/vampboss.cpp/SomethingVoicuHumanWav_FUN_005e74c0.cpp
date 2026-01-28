// Name: core_vampboss.cpp_SomethingVoicuHumanWav_FUN_005e74c0
// Address: 005e74c0
// Address Range: [[005e74c0, 005e7502]]
// Convention: unknown
// Signature: void core_vampboss_cpp_SomethingVoicuHumanWav_FUN_005e74c0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_vampboss.cpp_SomethingVoicuHumanWav(uint param_1) */

void core_vampboss_cpp_SomethingVoicuHumanWav_FUN_005e74c0(void)

{
  int in_stack_00000004;
  
  *(uint *)(in_stack_00000004 + 0xcdcc0) = 3;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
            ((CMotionController *)(in_stack_00000004 + 0x158),"float",0.0);
  *(uint *)(in_stack_00000004 + 0xce91c) = 0;
  (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
  return;
}

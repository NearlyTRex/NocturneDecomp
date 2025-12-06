// Name: core_cow.cpp_FUN_00444b40
// Address: 00444b40
// Address Range: [[00444b40, 00444bf3]]
// Convention: unknown
// Signature: undefined core_cow.cpp_FUN_00444b40()

#include "nocturne.h"

/* Signature: byte actors_enemy_cow.cpp_FUN_00444b40(uint param_1, uint param_2)
    */

void core_cow_cpp_FUN_00444b40(void)

{
  float fVar1;
  int extraout_EAX;
  SMotion *pSVar2;
  uint uVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  int desired_state_index;
  
  core_cow_cpp_FUN_004448c0();
  fVar1 = *(float *)(in_stack_00000004 + 0x243c) - *(float *)(in_stack_00000008 + 4);
  *(float *)(in_stack_00000004 + 0x243c) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(in_stack_00000004 + 0x243c) = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       ((CMotionController *)(in_stack_00000004 + 0x158));
    if ((pSVar2->state_index == 5) || (pSVar2->state_index == 4)) goto LAB_00444b80;
    desired_state_index = 4;
  }
  else {
    desired_state_index = 3;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            ((CMotionController *)(in_stack_00000004 + 0x158),desired_state_index,1);
LAB_00444b80:
  core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80
            (g_CSoundPtr,*(uint *)(in_stack_00000004 + 0xbec4));
  if (extraout_EAX != 0) {
    core_enemy_cpp_FUN_004a9f10();
    return;
  }
  uVar3 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
  *(uint *)(in_stack_00000004 + 0xbec4) = uVar3;
  core_enemy_cpp_FUN_004a9f10();
  return;
}

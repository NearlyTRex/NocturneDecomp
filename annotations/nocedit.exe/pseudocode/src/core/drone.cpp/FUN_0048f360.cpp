// Name: core_drone.cpp_FUN_0048f360
// Address: 0048f360
// Address Range: [[0048f360, 0048f4c7]]
// Convention: __cdecl
// Signature: void __cdecl core_drone_cpp_FUN_0048f360(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_drone.cpp_FUN_0048f360(uint param_1, uint param_2)
    */

void __cdecl core_drone_cpp_FUN_0048f360(void)

{
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  int in_stack_00000004;
  int in_stack_00000008;
  
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004 + 0xbed0));
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004 + 0xbecc));
  fVar1 = *(float *)(in_stack_00000004 + 0x243c) - *(float *)(in_stack_00000008 + 4);
  *(float *)(in_stack_00000004 + 0x243c) = fVar1;
  if (0.0 < fVar1) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004 + 0xbecc));
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(in_stack_00000004 + 0xbec8));
    if (iVar4 == 0) {
      uVar3 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
      *(uint *)(in_stack_00000004 + 0xbec8) = uVar3;
    }
    iVar4 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
    if (iVar4 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                ((CMotionController *)(in_stack_00000004 + 0x158),3,1);
    }
    if (iVar4 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                ((CMotionController *)(in_stack_00000004 + 0x158),4,1);
    }
    if (iVar4 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                ((CMotionController *)(in_stack_00000004 + 0x158),5,1);
      core_enemy_cpp_FUN_004a9f10();
      return;
    }
  }
  else {
    *(uint *)(in_stack_00000004 + 0x243c) = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       ((CMotionController *)(in_stack_00000004 + 0x158));
    if ((pSVar2->state_index != 8) && (pSVar2->state_index != 7)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                ((CMotionController *)(in_stack_00000004 + 0x158),7,1);
    }
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004 + 0xbec8));
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004 + 0xbecc));
    uVar3 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
    *(uint *)(in_stack_00000004 + 0xbec8) = uVar3;
  }
  core_enemy_cpp_FUN_004a9f10();
  return;
}

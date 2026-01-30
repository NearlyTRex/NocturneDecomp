// Name: core_sentinel.cpp_SentinelBehavior_FUN_00568cd0
// Address: 00568cd0
// Address Range: [[00568cd0, 00568dc9]]
// Convention: __cdecl
// Signature: void __cdecl core_sentinel_cpp_SentinelBehavior_FUN_00568cd0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_sentinel.cpp_SentinelBehavior(uint param_1, uint
   param_2) */

void __cdecl core_sentinel_cpp_SentinelBehavior_FUN_00568cd0(void)

{
  CMotionController *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  int in_stack_00000004;
  int in_stack_00000008;
  
  fVar1 = *(float *)(in_stack_00000004 + 0x243c) - *(float *)(in_stack_00000008 + 4);
  this_ptr = (CMotionController *)(in_stack_00000004 + 0x158);
  *(float *)(in_stack_00000004 + 0x243c) = fVar1;
  if (0.0 < fVar1) {
    iVar4 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
    if (iVar4 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(this_ptr,5,1);
    }
    if (iVar4 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                ((CMotionController *)(in_stack_00000004 + 0x158),6,1);
    }
    if (iVar4 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                ((CMotionController *)(in_stack_00000004 + 0x158),7,1);
    }
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(in_stack_00000004 + 0xbebc));
    if (iVar4 != 0) goto LAB_00568d4d;
  }
  else {
    *(uint *)(in_stack_00000004 + 0x243c) = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(this_ptr);
    if ((pSVar2->state_index == 8) || (pSVar2->state_index == 9)) goto LAB_00568d4d;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(this_ptr,8,1);
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004 + 0xbebc));
  }
  uVar3 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
  *(uint *)(in_stack_00000004 + 0xbebc) = uVar3;
LAB_00568d4d:
  core_enemy_cpp_FUN_004a9f10();
  return;
}

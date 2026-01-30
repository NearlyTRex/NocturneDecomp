// Name: core_boneguy.cpp_ExplodeAndSoundSomething_FUN_0041d4d0
// Address: 0041d4d0
// Address Range: [[0041d4d0, 0041d545]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_ExplodeAndSoundSomething_FUN_0041d4d0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_boneguy.cpp_ExplodeAndSoundSomething(uint param_1,
   uint param_2) */

void __cdecl core_boneguy_cpp_ExplodeAndSoundSomething_FUN_0041d4d0(void)

{
  float fVar1;
  CBoneGuy *in_stack_00000004;
  int in_stack_00000008;
  
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004->unk1 + 0x18));
  fVar1 = (in_stack_00000004->base).base.hit_points - *(float *)(in_stack_00000008 + 4);
  (in_stack_00000004->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (in_stack_00000004->base).base.hit_points = 1.0;
    core_boneguy_cpp_CBoneGuy_FUN_0041d680(in_stack_00000004);
    core_enemy_cpp_FUN_004a9f10();
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(in_stack_00000004->base).base.model.motion_controller,3,1);
  core_enemy_cpp_FUN_004a9f10();
  return;
}

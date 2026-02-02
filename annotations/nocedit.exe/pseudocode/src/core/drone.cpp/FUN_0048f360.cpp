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
  CDeformableModelInstance *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  CEnemy *in_stack_00000004;
  int in_stack_00000008;
  SDamageInfo *in_stack_00000010;
  
  sound_sndmain_cpp_killSfx_FUN_005a9c40
            (*(uint *)(in_stack_00000004[1].base.base.actor_name + 0x1c));
  sound_sndmain_cpp_killSfx_FUN_005a9c40
            (*(uint *)(in_stack_00000004[1].base.base.actor_name + 0x18));
  fVar1 = (in_stack_00000004->base).hit_points - *(float *)(in_stack_00000008 + 4);
  (in_stack_00000004->base).hit_points = fVar1;
  if (0.0 < fVar1) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40
              (*(uint *)(in_stack_00000004[1].base.base.actor_name + 0x18));
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                      (*(uint *)(in_stack_00000004[1].base.base.actor_name + 0x14));
    if (iVar4 == 0) {
      uVar3 = (*((in_stack_00000004->base).base.vtable._ub)->playSound)
                        ((CDemonActor *)in_stack_00000004,"drone-hurt?.wav");
      *(uint *)(in_stack_00000004[1].base.base.actor_name + 0x14) = uVar3;
    }
    iVar4 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
    if (iVar4 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->base).model.motion_controller,3,1);
    }
    if (iVar4 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->base).model.motion_controller,4,1);
    }
    if (iVar4 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->base).model.motion_controller,5,1);
      core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(in_stack_00000004,in_stack_00000010);
      return;
    }
  }
  else {
    this_ptr = &(in_stack_00000004->base).model;
    (in_stack_00000004->base).hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr->motion_controller);
    if ((pSVar2->state_index != 8) && (pSVar2->state_index != 7)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr->motion_controller,7,1);
    }
    sound_sndmain_cpp_killSfx_FUN_005a9c40
              (*(uint *)(in_stack_00000004[1].base.base.actor_name + 0x14));
    sound_sndmain_cpp_killSfx_FUN_005a9c40
              (*(uint *)(in_stack_00000004[1].base.base.actor_name + 0x18));
    uVar3 = (*((in_stack_00000004->base).base.vtable._ub)->playSound)
                      ((CDemonActor *)in_stack_00000004,"drone-die?.wav");
    *(uint *)(in_stack_00000004[1].base.base.actor_name + 0x14) = uVar3;
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(in_stack_00000004,in_stack_00000010);
  return;
}

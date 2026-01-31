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
  CDeformableModelInstance *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  CEnemy *in_stack_00000004;
  SDamageInfo *in_stack_00000008;
  char *sound_name;
  
  fVar1 = (float)(in_stack_00000004->base).hit_points - in_stack_00000008->damage_amount;
  this_ptr = &(in_stack_00000004->base).model;
  (in_stack_00000004->base).hit_points = (int)fVar1;
  if (0.0 < fVar1) {
    iVar4 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
    if (iVar4 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr->motion_controller,5,1);
    }
    if (iVar4 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->base).model.motion_controller,6,1);
    }
    if (iVar4 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->base).model.motion_controller,7,1);
    }
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                      (*(uint *)(in_stack_00000004[1].base.base.actor_name + 8));
    if (iVar4 != 0) goto LAB_00568d4d;
    sound_name = "sentinel-hurt?.wav";
  }
  else {
    (in_stack_00000004->base).hit_points = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr->motion_controller);
    if ((pSVar2->state_index == 8) || (pSVar2->state_index == 9)) goto LAB_00568d4d;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&this_ptr->motion_controller,8,1)
    ;
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004[1].base.base.actor_name + 8))
    ;
    sound_name = "sentinel-die.wav";
  }
  uVar3 = (*((in_stack_00000004->base).base.vtable._ub)->playSound)
                    ((CDemonActor *)in_stack_00000004,sound_name);
  *(uint *)(in_stack_00000004[1].base.base.actor_name + 8) = uVar3;
LAB_00568d4d:
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(in_stack_00000004,in_stack_00000008);
  return;
}

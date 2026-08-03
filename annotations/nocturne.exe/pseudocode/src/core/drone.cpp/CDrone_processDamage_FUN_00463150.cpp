// Name: core_drone.cpp_CDrone_processDamage_FUN_00463150
// Address: 00463150
// Address Range: [[00463150, 004632b7]]
// Convention: __cdecl
// Signature: void __cdecl core_drone_cpp_CDrone_processDamage_FUN_00463150(CDrone *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_drone_cpp_CDrone_processDamage_FUN_00463150(CDrone *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  
  sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handles[2]);
  sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handles[1]);
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  (this_ptr->base).base.hit_points = fVar1;
  if (0.0 < fVar1) {
    sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handles[1]);
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handles[0]);
    if (iVar4 == 0) {
      uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"drone-hurt?.wav");
      this_ptr->sfx_handles[0] = uVar3;
    }
    iVar4 = core_actor_cpp_getRandomInt_FUN_0040de00(0,2);
    if (iVar4 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(this_ptr->base).base.model.motion_controller,3,1);
    }
    if (iVar4 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(this_ptr->base).base.model.motion_controller,4,1);
    }
    if (iVar4 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(this_ptr->base).base.model.motion_controller,5,1);
      core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&this_ptr->base,damage_info);
      return;
    }
  }
  else {
    this_ptr_00 = &(this_ptr->base).base.model;
    (this_ptr->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr_00->motion_controller);
    if ((pSVar2->state_index != 8) && (pSVar2->state_index != 7)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&this_ptr_00->motion_controller,7,1);
    }
    sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handles[0]);
    sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handles[1]);
    uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"drone-die?.wav");
    this_ptr->sfx_handles[0] = uVar3;
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&this_ptr->base,damage_info);
  return;
}

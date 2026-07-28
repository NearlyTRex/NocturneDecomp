// Name: core_batman.cpp_FUN_00414930
// Address: 00414930
// Address Range: [[00414930, 00414b3c]]
// Convention: unknown
// Signature: void core_batman_cpp_FUN_00414930(CBatman *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_batman_cpp_FUN_00414930(CBatman *param_1,SDamageInfo *param_2)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  CVector3f *input_local_point;
  int iVar2;
  SMotion *pSVar3;
  uint uVar4;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  
  sound_sndmain_cpp_killSfx_FUN_00527230(param_1->sfx_handles[2]);
  sound_sndmain_cpp_killSfx_FUN_00527230(param_1->sfx_handles[0]);
  if (param_2->ammo_type == AMMO_TYPE_LITHIUM) {
    iVar2 = 0;
    param_2->damage_amount = param_2->damage_amount * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
              ((CDemonActor *)param_1,&local_30,&param_2->impact_direction);
    do {
      iVar2 = iVar2 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (0x01C08D04,&local_30,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar2 < 5);
  }
  if (param_2->damage_type == DAMAGE_TYPE_BURN) {
    input_local_point =
         core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                   (&(param_1->base).base.model,&local_3c,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
              ((CDemonActor *)param_1,&local_24,input_local_point);
    core_charactr_cpp_FUN_00427730(param_1,&local_24,0,0,0x41200000,0);
  }
  core_batman_cpp_CBatman_processDismemberment_FUN_004145f0(param_1,param_2);
  fVar1 = (param_1->base).base.hit_points - param_2->damage_amount;
  this_ptr = &(param_1->base).base.model;
  (param_1->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (param_1->base).base.hit_points = 0.0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr->motion_controller);
    if ((pSVar3->state_index != 7) && (pSVar3->state_index != 8)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&this_ptr->motion_controller,7,1);
      sound_sndmain_cpp_killSfx_FUN_00527230(param_1->sfx_handles[1]);
      uVar4 = (*((param_1->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)param_1,"batman-die.wav");
      param_1->sfx_handles[1] = uVar4;
      core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&param_1->base,param_2);
      return;
    }
  }
  else {
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040de00(0,2);
    if (iVar2 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&this_ptr->motion_controller,4,1);
    }
    if (iVar2 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->base).base.model.motion_controller,5,1);
    }
    if (iVar2 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->base).base.model.motion_controller,6,1);
    }
    iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->sfx_handles[1]);
    if (iVar2 == 0) {
      uVar4 = (*((param_1->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)param_1,"batman-hurt?.wav");
      param_1->sfx_handles[1] = uVar4;
      core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&param_1->base,param_2);
      return;
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&param_1->base,param_2);
  return;
}

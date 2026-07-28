// Name: core_werewolf.cpp_CWerewolf_processDamage_FUN_00557940
// Address: 00557940
// Address Range: [[00557940, 00557c24]]
// Convention: unknown
// Signature: void core_werewolf_cpp_CWerewolf_processDamage_FUN_00557940(CWerewolf *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_werewolf_cpp_CWerewolf_processDamage_FUN_00557940(CWerewolf *param_1,SDamageInfo *param_2)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  CVector3f local_28 [2];
  
  sound_sndmain_cpp_killSfx_FUN_00527230(param_1->sfx_handle);
  if (param_2->damage_type == DAMAGE_TYPE_BURN) {
    core_werewolf_cpp_CWerewolf_playHowl_FUN_00557060(param_1);
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).base.model.motion_controller,0x16,1);
    core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&param_1->base,param_2);
    return;
  }
  if (param_2->ammo_type == AMMO_TYPE_SILVER) {
    iVar4 = 0;
    param_2->damage_amount = param_2->damage_amount * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
              ((CDemonActor *)param_1,local_28,&param_2->impact_direction);
    do {
      iVar4 = iVar4 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (0x01C08D04,local_28,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar4 < 5);
  }
  fVar1 = (param_1->base).base.hit_points - param_2->damage_amount;
  this_ptr = &(param_1->base).base.model;
  (param_1->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (param_1->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr->motion_controller);
    if ((pSVar2->state_index != 0xd) && (pSVar2->state_index != 0xc)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&this_ptr->motion_controller,0xc,1);
      if ((param_1->type == WEREWOLF_TYPE_TRAIN) && (*(int *)(0x01E57284 + 0x15aa60) != 0)) {
        fVar1 = (param_1->base).base.base.location.position.x;
        if (fVar1 <= (float)5) {
          if ((double)fVar1 < -5) {
            (param_1->base).base.base.orient.vec.y = 1.5707964;
          }
        }
        else {
          (param_1->base).base.base.orient.vec.y = -1.5707964;
        }
      }
      sound_sndmain_cpp_killSfx_FUN_00527230(param_1->sfx_handles[0]);
      uVar3 = (*((param_1->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)param_1,"werewolf-die?.wav");
      param_1->sfx_handles[0] = uVar3;
      (*((param_1->base).base.base.vtable._ub)->spawnFlies)((CDemonActor *)param_1,0x32,25.0);
    }
    goto LAB_00557a49;
  }
  if (param_1->type != WEREWOLF_TYPE_FOREST) {
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr->motion_controller);
    iVar4 = pSVar2->state_index;
    if ((iVar4 == 0xe) || (iVar4 == 0xf)) {
      iVar4 = core_actor_cpp_getRandomInt_FUN_0040de00(0,2);
      if (iVar4 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(param_1->base).base.model.motion_controller,9,1);
      }
      if (iVar4 == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(param_1->base).base.model.motion_controller,10,1);
      }
      if (iVar4 == 2) {
        iVar4 = 0xb;
LAB_00557b5d:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(param_1->base).base.model.motion_controller,iVar4,1);
      }
    }
    else if ((((iVar4 == 0) || (iVar4 == 1)) || (iVar4 == 2)) ||
            (((iVar4 == 0x13 || (iVar4 == 3)) || (iVar4 == 4)))) {
      iVar4 = core_actor_cpp_getRandomInt_FUN_0040de00(0,2);
      if (iVar4 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(param_1->base).base.model.motion_controller,0x10,1);
      }
      if (iVar4 == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(param_1->base).base.model.motion_controller,0x11,1);
      }
      if (iVar4 == 2) {
        iVar4 = 0x12;
        goto LAB_00557b5d;
      }
    }
  }
  iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->sfx_handles[0]);
  if (iVar4 == 0) {
    uVar3 = (*((param_1->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)param_1,"werewolf-hurt?.wav");
    param_1->sfx_handles[0] = uVar3;
    core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&param_1->base,param_2);
    return;
  }
LAB_00557a49:
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&param_1->base,param_2);
  return;
}

// Name: core_werewolf.cpp_CWerewolf_processDamage_FUN_00557940
// Address: 00557940
// Address Range: [[00557940, 00557c24]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_processDamage_FUN_00557940(CWerewolf *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_CWerewolf_processDamage_FUN_00557940(CWerewolf *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  CVector3f local_28 [2];
  
  sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handle);
  if (damage_info->damage_type == DAMAGE_TYPE_BURN) {
    core_werewolf_cpp_CWerewolf_playHowl_FUN_00557060(this_ptr);
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.motion_controller,0x16,1);
    core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&this_ptr->base,damage_info);
    return;
  }
  if (damage_info->ammo_type == AMMO_TYPE_SILVER) {
    iVar4 = 0;
    damage_info->damage_amount = damage_info->damage_amount * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
              ((CDemonActor *)this_ptr,local_28,&damage_info->impact_direction);
    do {
      iVar4 = iVar4 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (g_CFireEffect_PTR_005b80f0,local_28,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar4 < 5);
  }
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr_00->motion_controller);
    if ((pSVar2->state_index != 0xd) && (pSVar2->state_index != 0xc)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&this_ptr_00->motion_controller,0xc,1);
      if ((this_ptr->type == WEREWOLF_TYPE_TRAIN) &&
         (g_CDemonSet_PTR_005be368->last_switch_area_invalid != 0)) {
        fVar1 = (this_ptr->base).base.base.location.position.x;
        if (fVar1 <= (float)5) {
          if ((double)fVar1 < -5) {
            (this_ptr->base).base.base.orient.vec.y = 1.5707964;
          }
        }
        else {
          (this_ptr->base).base.base.orient.vec.y = -1.5707964;
        }
      }
      sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handles[0]);
      uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"werewolf-die?.wav");
      this_ptr->sfx_handles[0] = uVar3;
      (*((this_ptr->base).base.base.vtable._ub)->spawnFlies)((CDemonActor *)this_ptr,0x32,25.0);
    }
    goto LAB_00557a49;
  }
  if (this_ptr->type != WEREWOLF_TYPE_FOREST) {
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr_00->motion_controller);
    iVar4 = pSVar2->state_index;
    if ((iVar4 == 0xe) || (iVar4 == 0xf)) {
      iVar4 = core_actor_cpp_getRandomInt_FUN_0040de00(0,2);
      if (iVar4 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(this_ptr->base).base.model.motion_controller,9,1);
      }
      if (iVar4 == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(this_ptr->base).base.model.motion_controller,10,1);
      }
      if (iVar4 == 2) {
        iVar4 = 0xb;
LAB_00557b5d:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(this_ptr->base).base.model.motion_controller,iVar4,1);
      }
    }
    else if ((((iVar4 == 0) || (iVar4 == 1)) || (iVar4 == 2)) ||
            (((iVar4 == 0x13 || (iVar4 == 3)) || (iVar4 == 4)))) {
      iVar4 = core_actor_cpp_getRandomInt_FUN_0040de00(0,2);
      if (iVar4 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(this_ptr->base).base.model.motion_controller,0x10,1);
      }
      if (iVar4 == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(this_ptr->base).base.model.motion_controller,0x11,1);
      }
      if (iVar4 == 2) {
        iVar4 = 0x12;
        goto LAB_00557b5d;
      }
    }
  }
  iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handles[0]);
  if (iVar4 == 0) {
    uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"werewolf-hurt?.wav");
    this_ptr->sfx_handles[0] = uVar3;
    core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&this_ptr->base,damage_info);
    return;
  }
LAB_00557a49:
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&this_ptr->base,damage_info);
  return;
}

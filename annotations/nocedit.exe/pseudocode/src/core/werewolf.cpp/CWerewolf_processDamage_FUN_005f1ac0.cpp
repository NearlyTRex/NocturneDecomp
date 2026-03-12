// Name: core_werewolf.cpp_CWerewolf_processDamage_FUN_005f1ac0
// Address: 005f1ac0
// Address Range: [[005f1ac0, 005f1da4]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_processDamage_FUN_005f1ac0(CWerewolf *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_CWerewolf_processDamage_FUN_005f1ac0(CWerewolf *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_01;
  float fVar2;
  SMotion *pSVar2;
  uint uVar3;
  SMotion *pSVar3;
  int iVar4;
  uint uVar4;
  int iVar5;
  CVector3f local_28 [2];
  float fVar1;
  CDeformableModelInstance *this_ptr_00;
  
  sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handle);
  if (damage_info->damage_type == DAMAGE_TYPE_BURN) {
    core_werewolf_cpp_CWerewolf_playHowl_FUN_005f11e0(this_ptr);
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,0x16,1);
    core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
    return;
  }
  if (damage_info->ammo_type == AMMO_TYPE_SILVER) {
    iVar5 = 0;
    damage_info->damage_amount = damage_info->damage_amount * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,local_28,&damage_info->impact_direction);
    do {
      iVar5 = iVar5 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_004c79d0
                (g_CFireEffectPtr,local_28,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar5 < 5);
  }
  fVar2 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_01 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar2;
  if (fVar2 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_01->motion_controller);
    if ((pSVar2->state_index != 0xd) && (pSVar2->state_index != 0xc)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr_01->motion_controller,0xc,1);
      if ((this_ptr->type == WEREWOLF_TYPE_TRAIN) && (g_CDemonSetPtr->last_switch_area_invalid != 0)
         ) {
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
      sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handles[0]);
      uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"werewolf-die?.wav");
      this_ptr->sfx_handles[0] = uVar3;
      (*((this_ptr->base).base.base.vtable._ub)->spawnFlies)((CDemonActor *)this_ptr,0x32,25.0);
    }
    goto LAB_005f1bc9;
  }
  if (this_ptr->type != WEREWOLF_TYPE_FOREST) {
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_01->motion_controller);
    iVar5 = pSVar3->state_index;
    if ((iVar5 == 0xe) || (iVar5 == 0xf)) {
      iVar4 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
      if (iVar4 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,9,1);
      }
      if (iVar4 == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,10,1);
      }
      if (iVar4 == 2) {
        iVar5 = 0xb;
LAB_005f1cdd:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,iVar5,1);
      }
    }
    else if ((((iVar5 == 0) || (iVar5 == 1)) || (iVar5 == 2)) ||
            (((iVar5 == 0x13 || (iVar5 == 3)) || (iVar5 == 4)))) {
      iVar5 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
      if (iVar5 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0x10,1);
      }
      if (iVar5 == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0x11,1);
      }
      if (iVar5 == 2) {
        iVar5 = 0x12;
        goto LAB_005f1cdd;
      }
    }
  }
  iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[0]);
  if (iVar5 == 0) {
    uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"werewolf-hurt?.wav");
    this_ptr->sfx_handles[0] = uVar4;
    core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
    return;
  }
LAB_005f1bc9:
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
  return;
}

// Name: core_dracbrid.cpp_CDraculaBride_processDamage_FUN_0045a6f0
// Address: 0045a6f0
// Address Range: [[0045a6f0, 0045a96c]]
// Convention: unknown
// Signature: void core_dracbrid_cpp_CDraculaBride_processDamage_FUN_0045a6f0(CDraculaBride *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_dracbrid_cpp_CDraculaBride_processDamage_FUN_0045a6f0(CDraculaBride *param_1,SDamageInfo *param_2)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  bool bVar2;
  CVector3f *input_local_point;
  SMotion *pSVar3;
  int iVar4;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  
  bVar2 = false;
  if (param_2->ammo_type == AMMO_TYPE_LITHIUM) {
    iVar4 = 0;
    param_2->damage_amount = param_2->damage_amount * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
              ((CDemonActor *)param_1,&local_30,&param_2->impact_direction);
    do {
      iVar4 = iVar4 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (0x01C08D04,&local_30,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar4 < 5);
    bVar2 = true;
  }
  if (param_2->damage_type == DAMAGE_TYPE_LAUNCH) {
    bVar2 = true;
  }
  if (param_2->damage_type == DAMAGE_TYPE_BURN) {
    input_local_point =
         core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                   (&(param_1->base).base.model,&local_3c,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
              ((CDemonActor *)param_1,&local_24,input_local_point);
    core_charactr_cpp_FUN_00427730((CCharacter *)param_1,&local_24,0,0,10.0,0);
  }
  core_dracbrid_cpp_CDraculaBride_checkHeartShot_FUN_0045a6a0(param_1,param_2);
  fVar1 = (param_1->base).base.hit_points - param_2->damage_amount;
  this_ptr = &(param_1->base).base.model;
  (param_1->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (param_1->base).base.hit_points = 0.0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr->motion_controller);
    iVar4 = pSVar3->state_index;
    if ((((iVar4 != 0x11) && (iVar4 != 0x10)) && (iVar4 != 10)) && (iVar4 != 7)) {
      if (bVar2) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&this_ptr->motion_controller,7,1);
        (*((param_1->base).base.base.vtable._ub)->playAmbientSound)
                  ((CDemonActor *)param_1,"bride-launch.wav");
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&this_ptr->motion_controller,10,1);
      }
    }
    iVar4 = core_actor_cpp_randomChance_FUN_0040dea0(0.4);
    if (iVar4 != 0) {
      core_dracbrid_cpp_FUN_0045ab40(param_1,"bride-die?.wav",2.0);
      core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&param_1->base,param_2);
      return;
    }
    goto LAB_0045a7ee;
  }
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&this_ptr->motion_controller);
  iVar4 = pSVar3->state_index;
  if (((iVar4 == 8) || (iVar4 == 9)) || (iVar4 == 2)) {
    iVar4 = 1;
LAB_0045a8a5:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).base.model.motion_controller,iVar4,1);
  }
  else if (((iVar4 == 0) || (iVar4 == 0xe)) ||
          (((iVar4 == 0x13 || (((iVar4 == 0xc || (iVar4 == 0x12)) || (iVar4 == 0x14)))) ||
           (iVar4 == 0x15)))) {
    iVar4 = core_actor_cpp_getRandomInt_FUN_0040de00(0,2);
    if (iVar4 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->base).base.model.motion_controller,4,1);
    }
    if (iVar4 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->base).base.model.motion_controller,5,1);
    }
    if (iVar4 == 2) {
      iVar4 = 6;
      goto LAB_0045a8a5;
    }
  }
  iVar4 = core_actor_cpp_randomChance_FUN_0040dea0(0.4);
  if (iVar4 != 0) {
    core_dracbrid_cpp_FUN_0045ab40(param_1,"bride-hurt?.wav",2.0);
    core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&param_1->base,param_2);
    return;
  }
LAB_0045a7ee:
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&param_1->base,param_2);
  return;
}

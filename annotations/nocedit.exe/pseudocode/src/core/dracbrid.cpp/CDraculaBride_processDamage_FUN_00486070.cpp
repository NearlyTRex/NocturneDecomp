// Name: core_dracbrid.cpp_CDraculaBride_processDamage_FUN_00486070
// Address: 00486070
// Address Range: [[00486070, 004862ec]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_processDamage_FUN_00486070 (CDraculaBride *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl
core_dracbrid_cpp_CDraculaBride_processDamage_FUN_00486070
          (CDraculaBride *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  bool bVar2;
  CVector3f *input_local_point;
  SMotion *pSVar3;
  int iVar4;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  
  bVar2 = false;
  if (damage_info->ammo_type == 7) {
    iVar4 = 0;
    damage_info->damage_amount = damage_info->damage_amount * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&local_30,&damage_info->impact_direction);
    do {
      iVar4 = iVar4 + 1;
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    } while (iVar4 < 5);
    bVar2 = true;
  }
  if (damage_info->damage_type == 0x68) {
    bVar2 = true;
  }
  if (damage_info->damage_type == 0x6c) {
    input_local_point =
         core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                   (&(this_ptr->base).base.model,&local_3c,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&local_24,input_local_point);
    core_charactr_cpp_CCharacter_igniteBone_FUN_0042b5b0
              ((CCharacter *)this_ptr,&local_24,0,0.0,0x41200000,0);
  }
  core_dracbrid_cpp_CDraculaBride_FUN_00486020(this_ptr);
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_00->motion_controller);
    iVar4 = pSVar3->state_index;
    if ((((iVar4 != 0x11) && (iVar4 != 0x10)) && (iVar4 != 10)) && (iVar4 != 7)) {
      if (bVar2) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr_00->motion_controller,7,1);
        (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                  ((CDemonActor *)this_ptr,"bride-launch.wav");
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr_00->motion_controller,10,1);
      }
    }
    iVar4 = core_actor_cpp_randomChance_FUN_0040cd10(0.4);
    if (iVar4 != 0) {
      core_dracbrid_cpp_CDraculaBride_FUN_004864c0(this_ptr);
      core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
      return;
    }
    goto LAB_0048616e;
  }
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&this_ptr_00->motion_controller);
  iVar4 = pSVar3->state_index;
  if (((iVar4 == 8) || (iVar4 == 9)) || (iVar4 == 2)) {
    iVar4 = 1;
LAB_00486225:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar4,1);
  }
  else if (((iVar4 == 0) || (iVar4 == 0xe)) ||
          (((iVar4 == 0x13 || (((iVar4 == 0xc || (iVar4 == 0x12)) || (iVar4 == 0x14)))) ||
           (iVar4 == 0x15)))) {
    iVar4 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
    if (iVar4 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,4,1);
    }
    if (iVar4 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,5,1);
    }
    if (iVar4 == 2) {
      iVar4 = 6;
      goto LAB_00486225;
    }
  }
  iVar4 = core_actor_cpp_randomChance_FUN_0040cd10(0.4);
  if (iVar4 != 0) {
    core_dracbrid_cpp_CDraculaBride_FUN_004864c0(this_ptr);
    core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
    return;
  }
LAB_0048616e:
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
  return;
}

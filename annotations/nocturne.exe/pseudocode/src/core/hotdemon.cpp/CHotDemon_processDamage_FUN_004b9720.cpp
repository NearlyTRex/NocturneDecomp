// Name: core_hotdemon.cpp_CHotDemon_processDamage_FUN_004b9720
// Address: 004b9720
// Address Range: [[004b9720, 004b98e0]]
// Convention: unknown
// Signature: void core_hotdemon_cpp_CHotDemon_processDamage_FUN_004b9720(CEnemy *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_hotdemon_cpp_CHotDemon_processDamage_FUN_004b9720(CEnemy *param_1,SDamageInfo *param_2)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  CVector3f local_24;
  
  sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)param_1[1].base.base.actor_name);
  if (param_2->ammo_type == AMMO_TYPE_MERCURY) {
    iVar4 = 0;
    param_2->damage_amount = param_2->damage_amount * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
              ((CDemonActor *)param_1,&local_24,&param_2->impact_direction);
    do {
      iVar4 = iVar4 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (0x01C08D04,&local_24,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar4 < 5);
  }
  fVar1 = (param_1->base).hit_points - param_2->damage_amount;
  this_ptr = &(param_1->base).model;
  (param_1->base).hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (param_1->base).hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr->motion_controller);
    iVar4 = pSVar2->state_index;
    if ((((iVar4 != 4) && (iVar4 != 5)) && (iVar4 != 10)) && (iVar4 != 0xb)) {
      if (iVar4 < 6) {
        iVar4 = 4;
      }
      else {
        iVar4 = 10;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&this_ptr->motion_controller,iVar4,1);
      sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1[1].base.base.actor_name + 4));
      uVar3 = (*((param_1->base).base.vtable._ub)->playSound)
                        ((CDemonActor *)param_1,"hotdemon-die.wav");
      *(uint *)(param_1[1].base.base.actor_name + 4) = uVar3;
      core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
      return;
    }
  }
  else {
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr->motion_controller);
    if ((pSVar2->state_index < 6) || (pSVar2->state_index == 0xf)) {
      iVar4 = 3;
    }
    else {
      iVar4 = 9;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).model.motion_controller,iVar4,1);
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                      (*(uint *)(param_1[1].base.base.actor_name + 4));
    if (iVar4 == 0) {
      uVar3 = (*((param_1->base).base.vtable._ub)->playSound)
                        ((CDemonActor *)param_1,"hotdemon-hurt?.wav");
      *(uint *)(param_1[1].base.base.actor_name + 4) = uVar3;
      core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
      return;
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
  return;
}

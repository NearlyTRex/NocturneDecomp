// Name: core_vampboss.cpp_CVampireBoss_processDamage_FUN_0054dd50
// Address: 0054dd50
// Address Range: [[0054dd50, 0054df8e]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_processDamage_FUN_0054dd50(CVampireBoss *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_CVampireBoss_processDamage_FUN_0054dd50(CVampireBoss *this_ptr,SDamageInfo *damage_info)

{
  float *this_ptr_00;
  float fVar1;
  int iVar2;
  uint uVar3;
  CDemonActor *this_ptr_01;
  CDemonActor *pCVar4;
  CVector3f local_24;
  
  if (damage_info->ammo_type == AMMO_TYPE_LITHIUM) {
    iVar2 = 0;
    damage_info->damage_amount = damage_info->damage_amount * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
              ((CDemonActor *)this_ptr,&local_24,&damage_info->impact_direction);
    do {
      iVar2 = iVar2 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (g_CFireEffect_PTR_005b80f0,&local_24,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar2 < 5);
  }
  if (this_ptr->form == 0) {
    if ((damage_info->ammo_type == AMMO_TYPE_HOLY) &&
       (this_ptr_01 = core_actor_cpp_castToClassHash_FUN_0040d890
                                (damage_info->attacker,g_CMeleeActorType_01cc56a4.name_hash),
       this_ptr_01 != (CDemonActor *)0x0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(this_ptr->base).base.model.motion_controller,10,1);
      pCVar4 = (*((this_ptr_01->vtable)._ub)->getCarrier)(this_ptr_01);
      if (pCVar4 != (CDemonActor *)0x0) {
        (*((pCVar4->vtable)._ub)->drop)(pCVar4,this_ptr_01,(CVector3f *)0x0);
        pCVar4 = core_actor_cpp_castToClassHash_FUN_0040d890
                           (pCVar4,g_CHeroActorType_01cae0ec.name_hash);
        if (pCVar4 != (CDemonActor *)0x0) {
          this_ptr_00 = &pCVar4[0x17e].orient_matrix.m[0].y;
          pCVar4 = core_inv_cpp_CInventory_findItemByName_FUN_004c0710
                             ((CInventory *)this_ptr_00,this_ptr_01->actor_name);
          if (pCVar4 == this_ptr_01) {
            core_inv_cpp_CInventory_removeItem_FUN_004c07b0((CInventory *)this_ptr_00,this_ptr_01,0)
            ;
            core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60
                      (g_CDemonMission_PTR_005baf90,this_ptr_01);
          }
        }
      }
      core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428f40
                ((CCharacter *)this_ptr,0,this_ptr_01,0.2);
      core_event_cpp_CEventList_executeCommands_FUN_0047ab70
                (0x01C03A10,"VampireBossBitesIt");
      sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handle);
      core_sound_cpp_CSound_playSound_FUN_0052ea40
                (g_CSound_PTR_005bed68,this_ptr,"voicudeath.wav @ 2.5");
      (this_ptr->base).base.hit_points = 0.0;
      return;
    }
  }
  else {
    if (this_ptr->form != 2) {
      damage_info->damage_amount = 0.0;
      return;
    }
    fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
    (this_ptr->base).base.hit_points = fVar1;
    if (fVar1 < (float)25) {
      (this_ptr->base).base.hit_points = 24.999;
    }
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040de00(0,2);
    if (iVar2 == 0) {
      iVar2 = 3;
    }
    else if (iVar2 == 1) {
      iVar2 = 4;
    }
    else {
      iVar2 = 5;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->model).motion_controller,iVar2,1);
    iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handle);
    if (iVar2 == 0) {
      uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"voicuhurt.wav");
      this_ptr->sfx_handle = uVar3;
      return;
    }
  }
  return;
}

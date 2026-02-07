// Name: core_vampboss.cpp_CVampireBoss_processDamage_FUN_005e7030
// Address: 005e7030
// Address Range: [[005e7030, 005e726e]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_processDamage_FUN_005e7030 (CVampireBoss *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl
core_vampboss_cpp_CVampireBoss_processDamage_FUN_005e7030
          (CVampireBoss *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  CDemonActor *this_ptr_00;
  CDemonActor *pCVar4;
  CDemonActor *pCVar5;
  
  if (damage_info->ammo_type == 7) {
    iVar2 = 0;
    damage_info->damage_amount = damage_info->damage_amount * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,(CVector3f *)&stack0xffffffdc,&damage_info->impact_direction)
    ;
    do {
      iVar2 = iVar2 + 1;
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    } while (iVar2 < 5);
  }
  if (this_ptr->form == 0) {
    if ((damage_info->ammo_type == 1) &&
       (this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c790
                                (damage_info->attacker,g_CMeleeClassInfo.name_hash),
       this_ptr_00 != (CDemonActor *)0x0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,10,1);
      pCVar4 = (*((this_ptr_00->vtable)._ub)->getCarrier)(this_ptr_00);
      if (pCVar4 != (CDemonActor *)0x0) {
        (*((pCVar4->vtable)._ub)->drop)(pCVar4,this_ptr_00,(CVector3f *)0x0);
        pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar4,g_CHeroClassInfo.name_hash);
        if (pCVar4 != (CDemonActor *)0x0) {
          pCVar5 = core_inv_cpp_CInventory_findItemByName_FUN_004fe9d0
                             ((CInventory *)(pCVar4[0x176].create_event + 0x30),
                              this_ptr_00->actor_name);
          if (pCVar5 == this_ptr_00) {
            core_inv_cpp_CInventory_removeItem_FUN_004fea70
                      ((CInventory *)(pCVar4[0x176].create_event + 0x30),this_ptr_00,0);
            core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70
                      (g_CDemonMissionPtr,this_ptr_00);
          }
        }
      }
      core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0((CCharacter *)this_ptr);
      core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
      sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk4 + 0xc));
      core_sound_cpp_CSound_playSound_FUN_005b3a20
                (g_CSoundPtr,this_ptr,"voicudeath.wav @ 2.5");
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
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
    if (iVar2 == 0) {
      iVar2 = 3;
    }
    else if (iVar2 == 1) {
      iVar2 = 4;
    }
    else {
      iVar2 = 5;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->model).motion_controller,iVar2,1);
    iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk4 + 0xc));
    if (iVar2 == 0) {
      uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"voicuhurt.wav");
      *(uint *)(this_ptr->unk4 + 0xc) = uVar3;
      return;
    }
  }
  return;
}

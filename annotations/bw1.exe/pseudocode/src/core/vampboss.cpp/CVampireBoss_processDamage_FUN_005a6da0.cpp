// Name: core_vampboss.cpp_CVampireBoss_processDamage_FUN_005a6da0
// Address: 005a6da0
// Address Range: [[005a6da0, 005a700d]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_processDamage_FUN_005a6da0(CVampireBoss *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_vampboss_cpp_CVampireBoss_processDamage_FUN_005a6da0(CVampireBoss *this_ptr,SDamageInfo *damage_info)

{
  float *this_ptr_00;
  float fVar1;
  int iVar2;
  uint uVar3;
  CDemonActor *this_ptr_01;
  CDemonActor *pCVar4;
  byte bVar5;
  float afStackY_1018 [1011];
  CVector3f CStack_30;
  float fStack_24;
  uint auStack_20 [4];
  
  bVar5 = 0;
  if ((this_ptr->base).base.is_invulnerable == 0) {
    if (damage_info->ammo_type == AMMO_TYPE_LITHIUM) {
      damage_info->damage_amount = damage_info->damage_amount * (float)_DAT_005f8ec8;
      core_actor_cpp_FUN_00408b40(this_ptr,&damage_info->impact_direction);
      iVar2 = 0;
      CStack_30.x = fStack_24;
      *(uint *)((int)&CStack_30 + (uint)bVar5 * -8 + 4) = auStack_20[(uint)bVar5 * -2];
      *(uint *)((int)&CStack_30 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           auStack_20[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      do {
        iVar2 = iVar2 + 1;
        core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
                  (0x01C57074,&CStack_30,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
      } while (iVar2 < 5);
    }
    if (this_ptr->form == 0) {
      if ((damage_info->ammo_type == AMMO_TYPE_HOLY) &&
         (this_ptr_01 = core_actor_cpp_castToClassHash_FUN_0040c600
                                  (damage_info->attacker,g_CMeleeClassInfo.name_hash),
         this_ptr_01 != (CDemonActor *)0x0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,10,1);
        pCVar4 = (*((this_ptr_01->vtable)._ub)->getCarrier)(this_ptr_01);
        if (pCVar4 != (CDemonActor *)0x0) {
          (*((pCVar4->vtable)._ub)->drop)(pCVar4,this_ptr_01,(CVector3f *)0x0);
          pCVar4 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar4,g_CHeroClassInfo.name_hash);
          if (pCVar4 != (CDemonActor *)0x0) {
            this_ptr_00 = &pCVar4[0x179].orient_matrix.m[1].z;
            pCVar4 = core_inv_cpp_FUN_004f8c40((CInventory *)this_ptr_00,this_ptr_01->actor_name);
            if (pCVar4 == this_ptr_01) {
              core_inv_cpp_FUN_004f8d00((CInventory *)this_ptr_00,this_ptr_01,0);
              core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160(0x01D2C900,this_ptr_01);
            }
          }
        }
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_004325b0
                  ((CCharacter *)this_ptr,0,(int)this_ptr_01,0x3e4ccccd,0);
        core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                  (0x01C51D80,"VampireBossBitesIt");
        sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handle);
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (0x02C82A60,this_ptr,"voicudeath.wav @ 2.5");
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
      if (fVar1 < (float)_DAT_005f8ed0) {
        (this_ptr->base).base.hit_points = 24.999;
      }
      iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
      if (iVar2 == 0) {
        iVar2 = 3;
      }
      else if (iVar2 == 1) {
        iVar2 = 4;
      }
      else {
        iVar2 = 5;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->model).base,iVar2,1);
      iVar2 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handle);
      if (iVar2 == 0) {
        uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"voicuhurt.wav");
        this_ptr->sfx_handle = uVar3;
        return;
      }
    }
  }
  return;
}

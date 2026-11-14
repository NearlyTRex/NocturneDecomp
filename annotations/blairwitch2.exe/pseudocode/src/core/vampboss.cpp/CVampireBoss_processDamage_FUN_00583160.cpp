// Name: core_vampboss.cpp_CVampireBoss_processDamage_FUN_00583160
// Address: 00583160
// Address Range: [[00583160, 005833cd]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_processDamage_FUN_00583160(CVampireBoss *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_vampboss_cpp_CVampireBoss_processDamage_FUN_00583160(CVampireBoss *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  CDemonActor *this_ptr_00;
  CDemonActor *pCVar4;
  CDemonActor *pCVar5;
  byte bVar6;
  float afStackY_1018 [1011];
  CVector3f CStack_30;
  float fStack_24;
  uint auStack_20 [4];
  
  bVar6 = 0;
  if ((this_ptr->base).base.is_invulnerable == 0) {
    if (damage_info->ammo_type == AMMO_TYPE_LITHIUM) {
      damage_info->damage_amount = damage_info->damage_amount * (float)_DAT_005edb6c;
      core_actor_cpp_FUN_00408d70(this_ptr,&damage_info->impact_direction);
      iVar2 = 0;
      CStack_30.x = fStack_24;
      *(uint *)((int)&CStack_30 + (uint)bVar6 * -8 + 4) = auStack_20[(uint)bVar6 * -2];
      *(uint *)((int)&CStack_30 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           auStack_20[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      do {
        iVar2 = iVar2 + 1;
        core_fire_cpp_CFireEffect_createSpark_FUN_0049d090
                  (0x01C3DEB4,&CStack_30,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
      } while (iVar2 < 5);
    }
    if (this_ptr->form == 0) {
      if ((damage_info->ammo_type == AMMO_TYPE_HOLY) &&
         (this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                  (damage_info->attacker,g_CMeleeClassInfo.name_hash),
         this_ptr_00 != (CDemonActor *)0x0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(this_ptr->base).base.model.base,10,1);
        pCVar4 = (*((this_ptr_00->vtable)._ub)->getCarrier)(this_ptr_00);
        if (pCVar4 != (CDemonActor *)0x0) {
          (*((pCVar4->vtable)._ub)->drop)(pCVar4,this_ptr_00,(CVector3f *)0x0);
          pCVar4 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar4,g_CHeroClassInfo.name_hash);
          if (pCVar4 != (CDemonActor *)0x0) {
            pCVar5 = core_inv_cpp_CInventory_findItemByName_FUN_004db830
                               ((CInventory *)&pCVar4[0xd6].process_disabled,this_ptr_00->actor_name
                               );
            if (pCVar5 == this_ptr_00) {
              core_inv_cpp_FUN_004db8e0(&pCVar4[0xd6].process_disabled,this_ptr_00,0);
              core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200(0x01D182F0,this_ptr_00);
            }
          }
        }
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428b10
                  ((CCharacter *)this_ptr,0,(int)this_ptr_00,0x3e4ccccd,0);
        core_event_cpp_CEventList_executeCommands_FUN_004894f0
                  (0x01C38BC0,"VampireBossBitesIt");
        sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handle);
        core_sound_cpp_CSound_playSound_FUN_0055ae30
                  (0x0264B290,this_ptr,"voicudeath.wav @ 2.5");
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
      if (fVar1 < (float)_DAT_005edb74) {
        (this_ptr->base).base.hit_points = 24.999;
      }
      iVar2 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,2);
      if (iVar2 == 0) {
        iVar2 = 3;
      }
      else if (iVar2 == 1) {
        iVar2 = 4;
      }
      else {
        iVar2 = 5;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->model).base,iVar2,1);
      iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handle);
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

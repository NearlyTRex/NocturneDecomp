// Name: core_vampboss.cpp_CVampireBoss_processDamage_FUN_005a6da0
// Address: 005a6da0
// Address Range: [[005a6da0, 005a700d]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_processDamage_FUN_005a6da0(CVampireBoss *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_vampboss_cpp_CVampireBoss_processDamage_FUN_005a6da0(CVampireBoss *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  CDemonActor *this_ptr_00;
  CDemonActor *pCVar4;
  byte bVar5;
  float afStackY_1018 [1011];
  CVector3f CStack_30;
  float fStack_24;
  uint auStack_20 [4];
  
  bVar5 = 0;
  if (*(int *)&(this_ptr->base).base.field_0x27b0 == 0) {
    if (*(int *)(damage_info + 0x28) == 7) {
      *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005f8ec8;
      core_actor_cpp_FUN_00408b40(this_ptr,damage_info + 0x1c);
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
      if ((*(int *)(damage_info + 0x28) == 1) &&
         (this_ptr_00 = (CDemonActor *)
                        core_actor_cpp_castToClassHash_FUN_0040c600
                                  (*(uint *)(damage_info + 0x34),g_CMeleeClassInfo.name_hash),
         this_ptr_00 != (CDemonActor *)0x0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,10,1);
        pCVar4 = (*((this_ptr_00->vtable)._ub)->getCarrier)(this_ptr_00);
        if (pCVar4 != (CDemonActor *)0x0) {
          (*((pCVar4->vtable)._ub)->drop)(pCVar4,this_ptr_00,(CVector3f *)0x0);
          iVar2 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar4,g_CHeroClassInfo.name_hash);
          if (iVar2 != 0) {
            pCVar4 = core_inv_cpp_FUN_004f8c40((CInventory *)(iVar2 + 0x1fae8),(char *)this_ptr_00);
            if (pCVar4 == this_ptr_00) {
              core_inv_cpp_FUN_004f8d00((CInventory *)(iVar2 + 0x1fae8),this_ptr_00,0);
              core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160(0x01D2C900,this_ptr_00);
            }
          }
        }
        core_charactr_cpp_FUN_004325b0(this_ptr,0,this_ptr_00,0x3e4ccccd,0);
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
        *(uint *)(damage_info + 4) = 0;
        return;
      }
      fVar1 = (this_ptr->base).base.hit_points - *(float *)(damage_info + 4);
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

// Name: core_vampboss.cpp_FUN_0054dd50
// Address: 0054dd50
// Address Range: [[0054dd50, 0054df8e]]
// Convention: unknown
// Signature: void core_vampboss_cpp_FUN_0054dd50(CCharacter *param_1,int param_2)

#include "nocturne.h"

void core_vampboss_cpp_FUN_0054dd50(CCharacter *param_1,int param_2)

{
  float *this_ptr;
  float fVar1;
  int iVar2;
  uint uVar3;
  CDemonActor *this_ptr_00;
  CDemonActor *pCVar4;
  CVector3f local_24;
  
  if (*(int *)(param_2 + 0x28) == 7) {
    iVar2 = 0;
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
              (&param_1->base,&local_24,(CVector3f *)(param_2 + 0x1c));
    do {
      iVar2 = iVar2 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (0x01C08D04,&local_24,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar2 < 5);
  }
  fVar1 = param_1[0x10].model.bone_transform.bone_world_matrices[0x2f].m[0].y;
  if (fVar1 == 0.0) {
    if ((*(int *)(param_2 + 0x28) == 1) &&
       (this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040d890
                                (*(CDemonActor **)(param_2 + 0x34),
                                 g_CMeleeActorType_01cc56a4.name_hash),
       this_ptr_00 != (CDemonActor *)0x0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->model).motion_controller,10,1);
      pCVar4 = (*((this_ptr_00->vtable)._ub)->getCarrier)(this_ptr_00);
      if (pCVar4 != (CDemonActor *)0x0) {
        (*((pCVar4->vtable)._ub)->drop)(pCVar4,this_ptr_00,(CVector3f *)0x0);
        pCVar4 = core_actor_cpp_castToClassHash_FUN_0040d890
                           (pCVar4,g_CHeroActorType_01cae0ec.name_hash);
        if (pCVar4 != (CDemonActor *)0x0) {
          this_ptr = &pCVar4[0x17e].orient_matrix.m[0].y;
          pCVar4 = core_inv_cpp_CInventory_findItemByName_FUN_004c0710
                             ((CInventory *)this_ptr,this_ptr_00->actor_name);
          if (pCVar4 == this_ptr_00) {
            core_inv_cpp_CInventory_removeItem_FUN_004c07b0((CInventory *)this_ptr,this_ptr_00,0);
            core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60(0x01CC9450,this_ptr_00);
          }
        }
      }
      core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428f40(param_1,0,this_ptr_00,0.2);
      core_event_cpp_CEventList_executeCommands_FUN_0047ab70
                (0x01C03A10,"VampireBossBitesIt");
      sound_sndmain_cpp_killSfx_FUN_00527230(param_1[0x10].carry_hands[1].bone_index);
      core_sound_cpp_CSound_playSound_FUN_0052ea40
                (0x02DC9450,param_1,"voicudeath.wav @ 2.5");
      param_1->hit_points = 0.0;
      return;
    }
  }
  else {
    if (fVar1 != 2.8026e-45) {
      *(uint *)(param_2 + 4) = 0;
      return;
    }
    fVar1 = param_1->hit_points - *(float *)(param_2 + 4);
    param_1->hit_points = fVar1;
    if (fVar1 < (float)25) {
      param_1->hit_points = 24.999;
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
              ((CMotionController *)(param_1[1].base.create_event + 0x20),iVar2,1);
    iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1[0x10].carry_hands[1].bone_index);
    if (iVar2 == 0) {
      uVar3 = (*((param_1->base).vtable._ub)->playSound)(&param_1->base,"voicuhurt.wav");
      param_1[0x10].carry_hands[1].bone_index = uVar3;
      return;
    }
  }
  return;
}

// Name: core_vampboss.cpp_FUN_005e7030
// Address: 005e7030
// Address Range: [[005e7030, 005e726e]]
// Convention: unknown
// Signature: undefined core_vampboss.cpp_FUN_005e7030()

#include "nocturne.h"

/* Signature: byte actors_enemy_vampboss.cpp_FUN_005e7030(uint param_1, uint
   param_2) */

void core_vampboss_cpp_FUN_005e7030(void)

{
  int iVar1;
  uint uVar2;
  CDemonActor *this_ptr;
  CDemonActor *pCVar3;
  CDemonActor *pCVar4;
  BADSPACEBASE *in_ESP;
  CCharacter *in_stack_00000004;
  int in_stack_00000008;
  float fVar5;
  
  if (*(int *)(in_stack_00000008 + 0x28) == 7) {
    iVar1 = 0;
    *(float *)(in_stack_00000008 + 4) = *(float *)(in_stack_00000008 + 4) * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&in_stack_00000004->base_actor,(CVector3f *)&stack0xffffffdc,
               (CVector3f *)(in_stack_00000008 + 0x1c));
    do {
      iVar1 = iVar1 + 1;
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    } while (iVar1 < 5);
  }
  if (*(int *)(in_stack_00000004[0x11].cloth_data + 0x11c4) == 0) {
    if ((*(int *)(in_stack_00000008 + 0x28) == 1) &&
       (this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790
                             (*(CDemonActor **)(in_stack_00000008 + 0x34),
                              g_CMeleeClassInfo.name_hash), this_ptr != (CDemonActor *)0x0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->model).motion_controller,10,1);
      pCVar3 = (*this_ptr->vtable->getCarrier)(this_ptr);
      if (pCVar3 != (CDemonActor *)0x0) {
        (*pCVar3->vtable->drop)(pCVar3,this_ptr,(CVector3f *)0x0);
        pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar3,g_CHeroClassInfo.name_hash);
        if (pCVar3 != (CDemonActor *)0x0) {
          pCVar4 = core_inv_cpp_CInventory_findItemByName_FUN_004fe9d0
                             ((CInventory *)(pCVar3[0x176].create_event + 0x30),this_ptr->actor_name
                             );
          if (pCVar4 == this_ptr) {
            core_inv_cpp_CInventory_removeItem_FUN_004fea70
                      ((CInventory *)(pCVar3[0x176].create_event + 0x30),this_ptr,0);
            core_mission_cpp_CDemonMission_FUN_00523b70(g_CDemonMissionPtr);
          }
        }
      }
      core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0(in_stack_00000004);
      core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
      sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004[0x11].cloth_data + 0x1e04))
      ;
      core_sound_cpp_CSound_playSound_FUN_005b3a20
                (g_CSoundPtr,in_stack_00000004,"voicudeath.wav @ 2.5");
      in_stack_00000004->hit_points = 0.0;
      return;
    }
  }
  else {
    if (*(int *)(in_stack_00000004[0x11].cloth_data + 0x11c4) != 2) {
      *(uint *)(in_stack_00000008 + 4) = 0;
      return;
    }
    fVar5 = in_stack_00000004->hit_points - *(float *)(in_stack_00000008 + 4);
    in_stack_00000004->hit_points = fVar5;
    if (fVar5 < (float)25) {
      in_stack_00000004->hit_points = 24.999;
    }
    iVar1 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
    if (iVar1 == 0) {
      fVar5 = 4.2039e-45;
    }
    else if (iVar1 == 1) {
      fVar5 = 5.60519e-45;
    }
    else {
      fVar5 = 7.00649e-45;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)(in_stack_00000004[1].base_actor.create_event + 0x20),(int)fVar5
               ,1);
    iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                      (*(uint *)(in_stack_00000004[0x11].cloth_data + 0x1e04));
    if (iVar1 == 0) {
      uVar2 = (*((in_stack_00000004->base_actor).vtable)->playSound)
                        (&in_stack_00000004->base_actor,"voicuhurt.wav");
      *(uint *)(in_stack_00000004[0x11].cloth_data + 0x1e04) = uVar2;
      return;
    }
  }
  return;
}

// Name: core_vampboss.cpp_FUN_005e7030
// Address: 005e7030
// Address Range: [[005e7030, 005e726e]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_FUN_005e7030(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_vampboss.cpp_FUN_005e7030(uint param_1, uint
   param_2) */

void __cdecl core_vampboss_cpp_FUN_005e7030(void)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  CDemonActor *this_ptr;
  CDemonActor *pCVar4;
  CDemonActor *pCVar5;
  CCharacter *in_stack_00000004;
  int in_stack_00000008;
  
  if (*(int *)(in_stack_00000008 + 0x28) == 7) {
    iVar2 = 0;
    *(float *)(in_stack_00000008 + 4) = *(float *)(in_stack_00000008 + 4) * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&in_stack_00000004->base,(CVector3f *)&stack0xffffffdc,
               (CVector3f *)(in_stack_00000008 + 0x1c));
    do {
      iVar2 = iVar2 + 1;
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    } while (iVar2 < 5);
  }
  if (*(int *)(in_stack_00000004[0x11].cloth_data + 0x11c4) == 0) {
    if ((*(int *)(in_stack_00000008 + 0x28) == 1) &&
       (this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790
                             (*(CDemonActor **)(in_stack_00000008 + 0x34),
                              g_CMeleeClassInfo.name_hash), this_ptr != (CDemonActor *)0x0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->model).motion_controller,10,1);
      pCVar4 = (*((this_ptr->vtable)._ub)->getCarrier)(this_ptr);
      if (pCVar4 != (CDemonActor *)0x0) {
        (*((pCVar4->vtable)._ub)->drop)(pCVar4,this_ptr,(CVector3f *)0x0);
        pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar4,g_CHeroClassInfo.name_hash);
        if (pCVar4 != (CDemonActor *)0x0) {
          pCVar5 = core_inv_cpp_CInventory_findItemByName_FUN_004fe9d0
                             ((CInventory *)(pCVar4[0x176].create_event + 0x30),this_ptr->actor_name
                             );
          if (pCVar5 == this_ptr) {
            core_inv_cpp_CInventory_removeItem_FUN_004fea70
                      ((CInventory *)(pCVar4[0x176].create_event + 0x30),this_ptr,0);
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
      in_stack_00000004->hit_points = 0;
      return;
    }
  }
  else {
    if (*(int *)(in_stack_00000004[0x11].cloth_data + 0x11c4) != 2) {
      *(uint *)(in_stack_00000008 + 4) = 0;
      return;
    }
    fVar1 = (float)in_stack_00000004->hit_points - *(float *)(in_stack_00000008 + 4);
    in_stack_00000004->hit_points = (int)fVar1;
    if (fVar1 < (float)25) {
      in_stack_00000004->hit_points = 0x41c7fdf4;
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
              ((CMotionController *)(in_stack_00000004[1].base.create_event + 0x20),iVar2,1);
    iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                      (*(uint *)(in_stack_00000004[0x11].cloth_data + 0x1e04));
    if (iVar2 == 0) {
      uVar3 = (*((in_stack_00000004->base).vtable._ub)->playSound)
                        (&in_stack_00000004->base,"voicuhurt.wav");
      *(uint *)(in_stack_00000004[0x11].cloth_data + 0x1e04) = uVar3;
      return;
    }
  }
  return;
}

// Name: core_vampboss.cpp_FUN_005a6da0
// Address: 005a6da0
// Address Range: [[005a6da0, 005a700d]]
// Convention: unknown
// Signature: void core_vampboss_cpp_FUN_005a6da0(void *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_vampboss_cpp_FUN_005a6da0(void *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  CDemonActor *item_to_remove;
  CDemonActor *pCVar4;
  byte bVar5;
  uint auStackY_1018 [1011];
  CVector3f CStack_30;
  CVector3f CStack_24;
  
  bVar5 = 0;
  if (*(int *)((int)param_1 + 0x27b0) == 0) {
    if (*(int *)(param_2 + 0x28) == 7) {
      *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_005f8ec8;
      core_actor_cpp_FUN_00408b40(param_1,param_2 + 0x1c);
      iVar2 = 0;
      CStack_30._0_4_ = CStack_24._0_4_;
      *(uint *)((int)&CStack_30 + (uint)bVar5 * -8 + 4) =
           *(uint *)((int)&CStack_24 + (uint)bVar5 * -8 + 4);
      *(uint *)((int)&CStack_30 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           *(uint *)((int)&CStack_24 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      do {
        iVar2 = iVar2 + 1;
        core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
                  (0x01C57074,&CStack_30,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
      } while (iVar2 < 5);
    }
    if (*(int *)((int)param_1 + 0xbe79c) == 0) {
      if ((*(int *)(param_2 + 0x28) == 1) &&
         (item_to_remove =
               (CDemonActor *)
               core_actor_cpp_castToClassHash_FUN_0040c600
                         (*(uint *)(param_2 + 0x34),g_CMeleeClassInfo.name_hash),
         item_to_remove != (CDemonActor *)0x0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)((int)param_1 + 0x158),10,1);
        iVar2 = (**(code **)(*(int *)&item_to_remove->field_0x154 + 0x94))(item_to_remove);
        if (iVar2 != 0) {
          (**(code **)(*(int *)(iVar2 + 0x154) + 0x90))(iVar2,item_to_remove,0);
          iVar2 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c600(iVar2,g_CHeroClassInfo.name_hash);
          if (iVar2 != 0) {
            pCVar4 = core_inv_cpp_FUN_004f8c40
                               ((CInventory *)(iVar2 + 0x1fae8),(char *)item_to_remove);
            if (pCVar4 == item_to_remove) {
              core_inv_cpp_FUN_004f8d00((CInventory *)(iVar2 + 0x1fae8),item_to_remove,0);
              core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160
                        (0x01D2C900,item_to_remove);
            }
          }
        }
        core_charactr_cpp_FUN_004325b0(param_1,0,item_to_remove,0x3e4ccccd,0);
        core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                  (0x01C51D80,"VampireBossBitesIt");
        sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)((int)param_1 + 0xbf3dc));
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (0x02C82A60,param_1,"voicudeath.wav @ 2.5");
        *(uint *)((int)param_1 + 0x2538) = 0;
        return;
      }
    }
    else {
      if (*(int *)((int)param_1 + 0xbe79c) != 2) {
        *(uint *)(param_2 + 4) = 0;
        return;
      }
      fVar1 = *(float *)((int)param_1 + 0x2538) - *(float *)(param_2 + 4);
      *(float *)((int)param_1 + 0x2538) = fVar1;
      if (fVar1 < (float)_DAT_005f8ed0) {
        *(uint *)((int)param_1 + 0x2538) = 0x41c7fdf4;
      }
      iVar2 = core_actor_cpp_FUN_0040cc60(0,2);
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
                ((CMotionController *)((int)param_1 + 0xc268),iVar2,1);
      iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)((int)param_1 + 0xbf3dc));
      if (iVar2 == 0) {
        uVar3 = (**(code **)(*(int *)((int)param_1 + 0x154) + 0x2c))
                          (param_1,"voicuhurt.wav");
        *(uint *)((int)param_1 + 0xbf3dc) = uVar3;
        return;
      }
    }
  }
  return;
}

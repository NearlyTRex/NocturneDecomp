// Name: core_vampboss.cpp_FUN_00583160
// Address: 00583160
// Address Range: [[00583160, 005833cd]]
// Convention: unknown
// Signature: void core_vampboss_cpp_FUN_00583160(void *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_vampboss_cpp_FUN_00583160(void *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  CDemonActor *actor;
  CDemonActor *pCVar4;
  byte bVar5;
  uint auStackY_1018 [1011];
  CVector3f CStack_30;
  CVector3f CStack_24;
  
  bVar5 = 0;
  if (*(int *)((int)param_1 + 0x281c) == 0) {
    if (*(int *)(param_2 + 0x28) == 7) {
      *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_005edb6c;
      core_actor_cpp_FUN_00408d70(param_1,param_2 + 0x1c);
      iVar2 = 0;
      CStack_30._0_4_ = CStack_24._0_4_;
      *(uint *)((int)&CStack_30 + (uint)bVar5 * -8 + 4) =
           *(uint *)((int)&CStack_24 + (uint)bVar5 * -8 + 4);
      *(uint *)((int)&CStack_30 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           *(uint *)((int)&CStack_24 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      do {
        iVar2 = iVar2 + 1;
        core_fire_cpp_FUN_0049d090(0x01C3DEB4,&CStack_30,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
      } while (iVar2 < 5);
    }
    if (*(int *)((int)param_1 + 0xc2f3c) == 0) {
      if ((*(int *)(param_2 + 0x28) == 1) &&
         (actor = (CDemonActor *)
                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (*(uint *)(param_2 + 0x34),g_CMeleeClassInfo.name_hash),
         actor != (CDemonActor *)0x0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)((int)param_1 + 0x2b4),10,1);
        iVar2 = (**(code **)(*(int *)&actor->field_0x2b0 + 0x9c))(actor);
        if (iVar2 != 0) {
          (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x98))(iVar2,actor,0);
          iVar2 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c8f0(iVar2,g_CHeroClassInfo.name_hash);
          if (iVar2 != 0) {
            pCVar4 = core_inv_cpp_FUN_004db830((CInventory *)(iVar2 + 0x2437c),(char *)actor);
            if (pCVar4 == actor) {
              core_inv_cpp_FUN_004db8e0((CInventory *)(iVar2 + 0x2437c),actor,0);
              core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200(0x01D182F0,actor);
            }
          }
        }
        core_charactr_cpp_FUN_00428b10(param_1,0,actor,0x3e4ccccd,0);
        core_event_cpp_CEventList_executeCommands_FUN_004894f0
                  (0x01C38BC0,"VampireBossBitesIt");
        sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)((int)param_1 + 0xc3b7c));
        core_sound_cpp_CSound_playSound_FUN_0055ae30
                  (0x0264B290,param_1,"voicudeath.wav @ 2.5");
        *(uint *)((int)param_1 + 0x25a8) = 0;
        return;
      }
    }
    else {
      if (*(int *)((int)param_1 + 0xc2f3c) != 2) {
        *(uint *)(param_2 + 4) = 0;
        return;
      }
      fVar1 = *(float *)((int)param_1 + 0x25a8) - *(float *)(param_2 + 4);
      *(float *)((int)param_1 + 0x25a8) = fVar1;
      if (fVar1 < (float)_DAT_005edb74) {
        *(uint *)((int)param_1 + 0x25a8) = 0x41c7fdf4;
      }
      iVar2 = core_actor_cpp_FUN_0040cfc0(0,2);
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
                ((CMotionController *)((int)param_1 + 0x10af8),iVar2,1);
      iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)((int)param_1 + 0xc3b7c));
      if (iVar2 == 0) {
        uVar3 = (**(code **)(*(int *)((int)param_1 + 0x2b0) + 0x34))
                          (param_1,"voicuhurt.wav");
        *(uint *)((int)param_1 + 0xc3b7c) = uVar3;
        return;
      }
    }
  }
  return;
}

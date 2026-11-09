// Name: core_game.cpp_FUN_004b8e10
// Address: 004b8e10
// Address Range: [[004b8e10, 004b8fc4]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004b8e10(undefined4 param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004b8e10(uint param_1,char *param_2)

{
  char cVar1;
  CDemonActor *actor_ptr;
  int iVar2;
  CDemonActor *pCVar3;
  char *pcVar4;
  CDemonActor *pCVar5;
  
  actor_ptr = (CDemonActor *)core_actor_cpp_createActorByName_FUN_0040c5a0(param_1);
  iVar2 = core_actor_cpp_FUN_0040c840(actor_ptr,".@CMeleeAxe" + 2);
  if (iVar2 == 0) {
    iVar2 = core_actor_cpp_FUN_0040c840(actor_ptr,"CBoxActor");
    if (iVar2 == 0) {
      core_mission_cpp_CDemonMission_generateActorName_FUN_004fcda0(0x01D182F0,actor_ptr);
    }
    else {
      pCVar3 = (CDemonActor *)
               core_actor_cpp_castToClassHash_FUN_0040c8f0(actor_ptr,g_CBoxActorClassInfo.name_hash)
      ;
      pcVar4 = param_2;
      pCVar5 = pCVar3;
      if (param_2 != (char *)0x0) {
        do {
          cVar1 = *pcVar4;
          *(char *)pCVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pCVar5->field_0x1 = cVar1;
          pcVar4 = pcVar4 + 2;
          pCVar5 = (CDemonActor *)&pCVar5->field_0x2;
        } while (cVar1 != '\0');
        (**(code **)(*(int *)&pCVar3->field_0x2b0 + 8))(pCVar3);
        iVar2 = _strcmp(param_2,"Lantern");
        if (iVar2 == 0) {
          core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
                    ((CKeyFramedModelInstance *)(pCVar3 + 1),"Lantern.kfm");
        }
        core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
                  ((CKeyFramedModelInstance *)(pCVar3 + 1));
        *(uint *)&pCVar3[1].field_0x1bc = 2;
        iVar2 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        goto LAB_004b8edb;
      }
    }
  }
  else {
    pcVar4 = &DAT_005d79fd;
    pCVar5 = actor_ptr;
    do {
      cVar1 = *pcVar4;
      *(char *)pCVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pCVar5->field_0x1 = cVar1;
      pCVar5 = (CDemonActor *)&pCVar5->field_0x2;
    } while (cVar1 != '\0');
  }
  (**(code **)(*(int *)&actor_ptr->field_0x2b0 + 8))(actor_ptr);
  iVar2 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c8f0(actor_ptr,g_CWeaponClassInfo.name_hash);
  if (iVar2 == 0) {
    _DAT_01d046a0 = "..\\core\\game.cpp";
    _DAT_01d046a4 = 0xb63;
    core_main_c_FUN_004e4500("giveHeroWeapon - This is not a weapon");
  }
  *(uint *)(iVar2 + 0x6c4) = 500;
  (**(code **)(*(int *)&actor_ptr->field_0x2b0 + 0x90))
            (actor_ptr,*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4));
  iVar2 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  pCVar3 = actor_ptr;
LAB_004b8edb:
  core_inv_cpp_FUN_004dadb0(iVar2 + 0x2437c,pCVar3,1,0);
  return;
}

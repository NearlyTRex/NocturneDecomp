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
  CDemonActor *this_ptr;
  char *pcVar3;
  CDemonActor *pCVar4;
  
  actor_ptr = (CDemonActor *)core_actor_cpp_createActorByName_FUN_0040c5a0(param_1);
  iVar2 = core_actor_cpp_isOfClass_FUN_0040c840(actor_ptr,".@CMeleeAxe" + 2);
  if (iVar2 == 0) {
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c840(actor_ptr,"CBoxActor");
    if (iVar2 == 0) {
      core_mission_cpp_CDemonMission_generateActorName_FUN_004fcda0(0x01D182F0,actor_ptr);
    }
    else {
      this_ptr = (CDemonActor *)
                 core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (actor_ptr,g_CBoxActorClassInfo.name_hash);
      pcVar3 = param_2;
      pCVar4 = this_ptr;
      if (param_2 != (char *)0x0) {
        do {
          cVar1 = *pcVar3;
          pCVar4->actor_name[0] = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar3[1];
          pCVar4->actor_name[1] = cVar1;
          pcVar3 = pcVar3 + 2;
          pCVar4 = (CDemonActor *)(pCVar4->actor_name + 2);
        } while (cVar1 != '\0');
        (*((this_ptr->vtable)._ub)->setup)(this_ptr);
        iVar2 = _strcmp(param_2,"Lantern");
        if (iVar2 == 0) {
          core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
                    ((CKeyFramedModelInstance *)(this_ptr + 1),"Lantern.kfm");
        }
        core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
                  ((CKeyFramedModelInstance *)(this_ptr + 1));
        this_ptr[1].particle_systems[1].fade_start = 2.8026e-45;
        iVar2 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        goto LAB_004b8edb;
      }
    }
  }
  else {
    pcVar3 = &DAT_005d79fd;
    pCVar4 = actor_ptr;
    do {
      cVar1 = *pcVar3;
      pCVar4->actor_name[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pCVar4->actor_name[1] = cVar1;
      pCVar4 = (CDemonActor *)(pCVar4->actor_name + 2);
    } while (cVar1 != '\0');
  }
  (*((actor_ptr->vtable)._ub)->setup)(actor_ptr);
  iVar2 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c8f0(actor_ptr,g_CWeaponClassInfo.name_hash);
  if (iVar2 == 0) {
    _DAT_01d046a0 = "..\\core\\game.cpp";
    _DAT_01d046a4 = 0xb63;
    core_main_c_FUN_004e4500("giveHeroWeapon - This is not a weapon");
  }
  *(uint *)(iVar2 + 0x6c4) = 500;
  (*((actor_ptr->vtable)._ub)->pickup)(actor_ptr,*(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4));
  iVar2 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  this_ptr = actor_ptr;
LAB_004b8edb:
  core_inv_cpp_FUN_004dadb0(iVar2 + 0x2437c,this_ptr,1,0);
  return;
}

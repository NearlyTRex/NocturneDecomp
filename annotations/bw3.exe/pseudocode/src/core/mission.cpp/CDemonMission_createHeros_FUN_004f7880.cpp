// Name: core_mission.cpp_CDemonMission_createHeros_FUN_004f7880
// Address: 004f7880
// Address Range: [[004f7880, 004f7a15]]
// Convention: __cdecl
// Signature: int __cdecl core_mission_cpp_CDemonMission_createHeros_FUN_004f7880(CDemonMission *this_ptr,CCharacter *existing_hero)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_mission_cpp_CDemonMission_createHeros_FUN_004f7880(CDemonMission *this_ptr,CCharacter *existing_hero)

{
  CDemonActor *actor_ptr;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    iVar2 = iVar4 + 4;
    *(uint *)(iVar4 + 0x1d5ba04) = 0;
    iVar4 = iVar2;
  } while (iVar2 != 0x10);
  if (g_CNetGamePtr->connection_type == CONNECTION_NONE) {
    _DAT_01d5ba00 = 1;
    _DAT_01d5ba14 = g_CNetGamePtr->connection_type;
    iVar4 = core_mission_cpp_CDemonMission_createOneHero_FUN_004f7710
                      (this_ptr,0,*(int *)&g_CGamePtr->field_0xd8,existing_hero);
    if (iVar4 == 0) {
      return 0;
    }
    *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e4) =
         *(uint *)&g_CGamePtr->field_0xdc;
  }
  else {
    _DAT_01d5ba00 = g_CNetGamePtr->player_count;
    if (3 < _DAT_01d5ba00) {
      _DAT_01d71de0 = "..\\core\\mission.cpp";
      _DAT_01d71de4 = 0x69a;
      core_main_c_FUN_004e4330("CDemonMission::createHeros - too many network players for MAX_HERO");
    }
    iVar4 = 0;
    if (0 < _DAT_01d5ba00) {
      iVar3 = 0;
      iVar2 = 0;
      do {
        iVar1 = core_mission_cpp_CDemonMission_createOneHero_FUN_004f7710
                          (this_ptr,iVar4,*(int *)(&g_CNetGamePtr->players[0].field_0x14 + iVar3),
                           (CCharacter *)0x0);
        if (iVar1 == 0) {
          return 0;
        }
        *(uint *)(*(int *)(iVar2 + 0x1d5ba04) + 0xcdd0) = 1;
        iVar4 = iVar4 + 1;
        *(uint *)(*(int *)(iVar2 + 0x1d5ba04) + 0x206e4) =
             *(uint *)(&g_CNetGamePtr->players[0].field_0x18 + iVar3);
        iVar3 = iVar3 + 0x80;
        iVar2 = iVar2 + 4;
      } while (iVar4 < _DAT_01d5ba00);
    }
    _DAT_01d5ba14 = g_CNetGamePtr->local_player_index;
  }
  *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0xcdd0) = 0;
  actor_ptr = *(CDemonActor **)(this_ptr + 0x143c);
  while (actor_ptr != (CDemonActor *)0x0) {
    iVar4 = core_actor_cpp_isOfClass_FUN_0040c790(actor_ptr,"CHeroPlaceholder");
    if (iVar4 == 0) {
      actor_ptr = actor_ptr->next_actor;
    }
    else {
      core_mission_cpp_CDemonMission_removeActor_FUN_004f6ca0(this_ptr,actor_ptr,1);
      actor_ptr = *(CDemonActor **)(this_ptr + 0x143c);
    }
  }
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_004f6bf0(this_ptr);
  return 1;
}

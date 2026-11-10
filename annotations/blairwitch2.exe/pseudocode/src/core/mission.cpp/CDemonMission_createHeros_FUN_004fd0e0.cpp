// Name: core_mission.cpp_CDemonMission_createHeros_FUN_004fd0e0
// Address: 004fd0e0
// Address Range: [[004fd0e0, 004fd275]]
// Convention: __cdecl
// Signature: int __cdecl core_mission_cpp_CDemonMission_createHeros_FUN_004fd0e0(CDemonMission *this_ptr,CCharacter *existing_hero)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_mission_cpp_CDemonMission_createHeros_FUN_004fd0e0(CDemonMission *this_ptr,CCharacter *existing_hero)

{
  CDemonActor *actor_ptr;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    iVar2 = iVar4 + 4;
    *(uint *)(iVar4 + 0x1cedee4) = 0;
    iVar4 = iVar2;
  } while (iVar2 != 0x10);
  if (g_CNetGamePtr->connection_type == CONNECTION_NONE) {
    _DAT_01cedee0 = 1;
    _DAT_01cedef4 = g_CNetGamePtr->connection_type;
    iVar4 = core_mission_cpp_CDemonMission_createOneHero_FUN_004fcf70
                      (this_ptr,0,*(int *)&g_CGamePtr->field_0xd4,existing_hero);
    if (iVar4 == 0) {
      return 0;
    }
    *(uint *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x24378) =
         *(uint *)&g_CGamePtr->field_0xd8;
  }
  else {
    _DAT_01cedee0 = g_CNetGamePtr->player_count;
    if (3 < _DAT_01cedee0) {
      _DAT_01d046a0 = "..\\core\\mission.cpp";
      _DAT_01d046a4 = 0x688;
      core_main_c_FUN_004e4500("CDemonMission::createHeros - too many network players for MAX_HERO");
    }
    iVar4 = 0;
    if (0 < _DAT_01cedee0) {
      iVar3 = 0;
      iVar2 = 0;
      do {
        iVar1 = core_mission_cpp_CDemonMission_createOneHero_FUN_004fcf70
                          (this_ptr,iVar4,*(int *)(&g_CNetGamePtr->players[0].field_0x14 + iVar3),
                           (CCharacter *)0x0);
        if (iVar1 == 0) {
          return 0;
        }
        *(uint *)(*(int *)(iVar2 + 0x1cedee4) + 0x10a64) = 1;
        iVar4 = iVar4 + 1;
        *(uint *)(*(int *)(iVar2 + 0x1cedee4) + 0x24378) =
             *(uint *)(&g_CNetGamePtr->players[0].field_0x18 + iVar3);
        iVar3 = iVar3 + 0x80;
        iVar2 = iVar2 + 4;
      } while (iVar4 < _DAT_01cedee0);
    }
    _DAT_01cedef4 = g_CNetGamePtr->local_player_index;
  }
  *(uint *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x10a64) = 0;
  actor_ptr = *(CDemonActor **)(this_ptr + 0x1114);
  while (actor_ptr != (CDemonActor *)0x0) {
    iVar4 = core_actor_cpp_isOfClass_FUN_0040c840(actor_ptr,"CHeroPlaceholder");
    if (iVar4 == 0) {
      actor_ptr = *(CDemonActor **)&actor_ptr->field_0x14c;
    }
    else {
      core_mission_cpp_CDemonMission_removeActor_FUN_004fc570(this_ptr,actor_ptr,1);
      actor_ptr = *(CDemonActor **)(this_ptr + 0x1114);
    }
  }
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_004fc4c0(this_ptr);
  return 1;
}

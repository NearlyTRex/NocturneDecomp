// Name: core_mission.cpp_CDemonMission_createHeros_FUN_00524a80
// Address: 00524a80
// Address Range: [[00524a80, 00524c12]]
// Convention: __cdecl
// Signature: int __cdecl core_mission_cpp_CDemonMission_createHeros_FUN_00524a80(CDemonMission *this_ptr,int creation_flags)

#include "nocturne.h"

int __cdecl
core_mission_cpp_CDemonMission_createHeros_FUN_00524a80(CDemonMission *this_ptr,int creation_flags)

{
  CDemonActor *actor_ptr;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    iVar2 = iVar4 + 4;
    *(uint *)((int)g_HeroActors + iVar4) = 0;
    iVar4 = iVar2;
  } while (iVar2 != 0x10);
  if (g_CNetGamePtr->connection_type == 0) {
    g_HeroCount = 1;
    g_LocalHeroIndex = g_CNetGamePtr->connection_type;
    iVar4 = core_mission_cpp_CDemonMission_createOneHero_FUN_00524920
                      (this_ptr,0,g_CGamePtr->hero_number,(void *)creation_flags);
    if (iVar4 == 0) {
      return 0;
    }
    g_HeroActors[g_LocalHeroIndex]->aim_mode = g_CGamePtr->aim_mode;
  }
  else {
    g_HeroCount = g_CNetGamePtr->player_count;
    if (3 < g_HeroCount) {
      g_CurrentFilename = "..\\core\\mission.cpp";
      g_CurrentLineNumber = 0x639;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::createHeros - too many network players for MAX_HERO");
    }
    iVar4 = 0;
    if (0 < g_HeroCount) {
      iVar3 = 0;
      iVar2 = 0;
      do {
        iVar1 = core_mission_cpp_CDemonMission_createOneHero_FUN_00524920
                          (this_ptr,iVar4,*(int *)(g_CNetGamePtr->players[0].name + iVar3 + 0x14),
                           (void *)0x0);
        if (iVar1 == 0) {
          return 0;
        }
        *(uint *)(*(int *)((int)g_HeroActors + iVar2) + 0xbe28) = 1;
        iVar4 = iVar4 + 1;
        *(uint *)(*(int *)((int)g_HeroActors + iVar2) + 0x1f734) =
             *(uint *)(g_CNetGamePtr->players[0].name + iVar3 + 0x18);
        iVar3 = iVar3 + 0x78;
        iVar2 = iVar2 + 4;
      } while (iVar4 < g_HeroCount);
    }
    g_LocalHeroIndex = g_CNetGamePtr->local_player_index;
  }
  g_HeroActors[g_LocalHeroIndex]->control_type = 0;
  actor_ptr = this_ptr->first_actor;
  while (actor_ptr != (CDemonActor *)0x0) {
    iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CHeroPlaceholder");
    if (iVar4 == 0) {
      actor_ptr = actor_ptr->next_actor;
    }
    else {
      core_mission_cpp_CDemonMission_removeActor_FUN_00523f20(this_ptr,actor_ptr,1);
      actor_ptr = this_ptr->first_actor;
    }
  }
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(this_ptr);
  return 1;
}

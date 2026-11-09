// Name: core_mission.cpp_CDemonMission_createHeros_FUN_0051c0a0
// Address: 0051c0a0
// Address Range: [[0051c0a0, 0051c232]]
// Convention: __cdecl
// Signature: int __cdecl core_mission_cpp_CDemonMission_createHeros_FUN_0051c0a0(CDemonMission *this_ptr,CCharacter *existing_hero)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_mission_cpp_CDemonMission_createHeros_FUN_0051c0a0(CDemonMission *this_ptr,CCharacter *existing_hero)

{
  CDemonActor *actor_ptr;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    iVar2 = iVar4 + 4;
    *(uint *)(iVar4 + 0x1d06aa4) = 0;
    iVar4 = iVar2;
  } while (iVar2 != 0x10);
  if (*(int *)g_CNetGamePtr == 0) {
    _DAT_01d06aa0 = 1;
    _DAT_01d06ab4 = *(int *)g_CNetGamePtr;
    iVar4 = core_mission_cpp_CDemonMission_createOneHero_FUN_0051bf30
                      (this_ptr,0,*(int *)&g_CGamePtr->field_0xd4,existing_hero);
    if (iVar4 == 0) {
      return 0;
    }
    *(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae4) =
         *(uint *)&g_CGamePtr->field_0xd8;
  }
  else {
    _DAT_01d06aa0 = *(int *)&g_CNetGamePtr->field_0x1c;
    if (3 < _DAT_01d06aa0) {
      _DAT_01d1d400 = "..\\core\\mission.cpp";
      _DAT_01d1d404 = 0x698;
      core_main_c_FUN_005030e0("CDemonMission::createHeros - too many network players for MAX_HERO");
    }
    iVar4 = 0;
    if (0 < _DAT_01d06aa0) {
      iVar3 = 0;
      iVar2 = 0;
      do {
        iVar1 = core_mission_cpp_CDemonMission_createOneHero_FUN_0051bf30
                          (this_ptr,iVar4,*(int *)(&g_CNetGamePtr->field_0x34 + iVar3),
                           (CCharacter *)0x0);
        if (iVar1 == 0) {
          return 0;
        }
        *(uint *)(*(int *)(iVar2 + 0x1d06aa4) + 0xc1d4) = 1;
        iVar4 = iVar4 + 1;
        *(uint *)(*(int *)(iVar2 + 0x1d06aa4) + 0x1fae4) =
             *(uint *)(&g_CNetGamePtr->field_0x38 + iVar3);
        iVar3 = iVar3 + 0x7c;
        iVar2 = iVar2 + 4;
      } while (iVar4 < _DAT_01d06aa0);
    }
    _DAT_01d06ab4 = *(int *)&g_CNetGamePtr->field_0x11c;
  }
  *(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0xc1d4) = 0;
  actor_ptr = *(CDemonActor **)(this_ptr + 0x1118);
  while (actor_ptr != (CDemonActor *)0x0) {
    iVar4 = core_actor_cpp_FUN_0040c550(actor_ptr,"CHeroPlaceholder");
    if (iVar4 == 0) {
      actor_ptr = *(CDemonActor **)&actor_ptr->field_0x14c;
    }
    else {
      core_mission_cpp_CDemonMission_removeActor_FUN_0051b4d0(this_ptr,actor_ptr,1);
      actor_ptr = *(CDemonActor **)(this_ptr + 0x1118);
    }
  }
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_0051b420(this_ptr);
  return 1;
}

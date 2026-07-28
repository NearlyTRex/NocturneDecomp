// Name: core_mission.cpp_CDemonMission_createHeros_FUN_004d9a80
// Address: 004d9a80
// Address Range: [[004d9a80, 004d9c12]]
// Convention: __cdecl
// Signature: int __cdecl core_mission_cpp_CDemonMission_createHeros_FUN_004d9a80(CDemonMission *this_ptr,CCharacter *existing_hero)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_mission_cpp_CDemonMission_createHeros_FUN_004d9a80(CDemonMission *this_ptr,CCharacter *existing_hero)

{
  CDemonActor *actor_ptr;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    iVar2 = iVar4 + 4;
    *(uint *)(iVar4 + 0x1cae0d8) = 0;
    iVar4 = iVar2;
  } while (iVar2 != 0x10);
  if (*0x01CEA280 == 0) {
    _DAT_01cae0d4 = 1;
    _DAT_01cae0e8 = *0x01CEA280;
    iVar4 = core_mission_cpp_CDemonMission_createOneHero_FUN_004d9920
                      (this_ptr,0,*(int *)(0x01C775EC + 0xc0),existing_hero);
    if (iVar4 == 0) {
      return 0;
    }
    *(uint *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f59c) =
         *(uint *)(0x01C775EC + 0xc4);
  }
  else {
    _DAT_01cae0d4 = 0x01CEA280[7];
    if (3 < _DAT_01cae0d4) {
      PTR_01cc4800 = "..\\core\\mission.cpp";
      INT_01cc4804 = 0x63b;
      core_main_c_FUN_004c8440("CDemonMission::createHeros - too many network players for MAX_HERO");
    }
    iVar4 = 0;
    if (0 < _DAT_01cae0d4) {
      iVar3 = 0;
      iVar2 = 0;
      do {
        iVar1 = core_mission_cpp_CDemonMission_createOneHero_FUN_004d9920
                          (this_ptr,iVar4,*(int *)(iVar3 + 0x34 + (int)0x01CEA280),
                           (CCharacter *)0x0);
        if (iVar1 == 0) {
          return 0;
        }
        *(uint *)(*(int *)(iVar2 + 0x1cae0d8) + 0xbc90) = 1;
        iVar4 = iVar4 + 1;
        *(uint *)(*(int *)(iVar2 + 0x1cae0d8) + 0x1f59c) =
             *(uint *)((int)0x01CEA280 + iVar3 + 0x38);
        iVar3 = iVar3 + 0x78;
        iVar2 = iVar2 + 4;
      } while (iVar4 < _DAT_01cae0d4);
    }
    _DAT_01cae0e8 = 0x01CEA280[0x45];
  }
  *(uint *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0xbc90) = 0;
  actor_ptr = *(CDemonActor **)(this_ptr->set_names[3] + 0xcc);
  while (actor_ptr != (CDemonActor *)0x0) {
    iVar4 = core_actor_cpp_isOfClass_FUN_0040d7e0(actor_ptr,"CHeroPlaceholder");
    if (iVar4 == 0) {
      actor_ptr = actor_ptr->next_actor;
    }
    else {
      core_mission_cpp_CDemonMission_removeActor_FUN_004d8f90(this_ptr,actor_ptr,1);
      actor_ptr = *(CDemonActor **)(this_ptr->set_names[3] + 0xcc);
    }
  }
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_004d8ee0(this_ptr);
  return 1;
}

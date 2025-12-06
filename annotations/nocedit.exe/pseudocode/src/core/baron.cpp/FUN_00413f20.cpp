// Name: core_baron.cpp_FUN_00413f20
// Address: 00413f20
// Address Range: [[00413f20, 00413fe1]]
// Convention: unknown
// Signature: undefined core_baron.cpp_FUN_00413f20()

#include "nocturne.h"

/* Signature: byte actors_hero_baron.cpp_FUN_00413f20(uint param_1) */

void core_baron_cpp_FUN_00413f20(void)

{
  CDemonMission *this_ptr;
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x578) == 0) {
    iVar3 = 0;
    for (iVar2 = 0; iVar2 < (int)g_CDemonSetPtr->actor_list_ptr; iVar2 = iVar2 + 1) {
      pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar3),
                          g_CBaronClassInfo.name_hash);
      *(CDemonActor **)(in_stack_00000004 + 0x578) = pCVar1;
      if (pCVar1 != (CDemonActor *)0x0) break;
      iVar3 = iVar3 + 4;
    }
    if (*(int *)(in_stack_00000004 + 0x578) == 0) {
      pCVar1 = core_actor_cpp_createActorByName_FUN_0040c430("CBaron");
      this_ptr = g_CDemonMissionPtr;
      *(CDemonActor **)(in_stack_00000004 + 0x578) = pCVar1;
      core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(this_ptr);
      (*(code *)**(uint **)(*(int *)(in_stack_00000004 + 0x578) + 0x154))();
      core_mission_cpp_CDemonMission_FUN_00523b70(g_CDemonMissionPtr);
      (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0x578) + 0x154) + 0x60))();
      return;
    }
  }
  return;
}

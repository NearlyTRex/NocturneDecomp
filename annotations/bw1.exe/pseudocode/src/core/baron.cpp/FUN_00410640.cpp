// Name: core_baron.cpp_FUN_00410640
// Address: 00410640
// Address Range: [[00410640, 00410701]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_FUN_00410640(CBaronWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_baron_cpp_FUN_00410640(CBaronWeapon *this_ptr)

{
  CDemonMission *this_ptr_00;
  int iVar1;
  CDemonActor *actor;
  int iVar2;
  int iVar3;
  
  if (*(int *)&this_ptr->field_0x578 == 0) {
    iVar3 = 0;
    for (iVar2 = 0; iVar2 < *(int *)&g_CDemonSetPtr->field_0x14d164; iVar2 = iVar2 + 1) {
      iVar1 = core_actor_cpp_castToClassHash_FUN_0040c600
                        (*(uint *)(&g_CDemonSetPtr->field_0x14d168 + iVar3),
                         g_CBaronClassInfo.name_hash);
      *(int *)&this_ptr->field_0x578 = iVar1;
      if (iVar1 != 0) break;
      iVar3 = iVar3 + 4;
    }
    if (*(int *)&this_ptr->field_0x578 == 0) {
      actor = (CDemonActor *)core_actor_cpp_createActorByName_FUN_0040c2b0("CBaron");
      this_ptr_00 = 0x01D2C900;
      *(CDemonActor **)&this_ptr->field_0x578 = actor;
      core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(this_ptr_00,actor);
      (*(code *)**(uint **)(*(int *)&this_ptr->field_0x578 + 0x154))
                (*(int *)&this_ptr->field_0x578);
      core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160
                (0x01D2C900,*(CDemonActor **)&this_ptr->field_0x578);
      (**(code **)(*(int *)(*(int *)&this_ptr->field_0x578 + 0x154) + 0x68))
                (*(int *)&this_ptr->field_0x578,&this_ptr->field_0x20,&this_ptr->field_0x30);
      return;
    }
  }
  return;
}

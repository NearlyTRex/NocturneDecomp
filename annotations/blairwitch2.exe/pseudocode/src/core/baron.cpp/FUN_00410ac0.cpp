// Name: core_baron.cpp_FUN_00410ac0
// Address: 00410ac0
// Address Range: [[00410ac0, 00410b82]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_FUN_00410ac0(CBaronWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_baron_cpp_FUN_00410ac0(CBaronWeapon *this_ptr)

{
  CDemonMission *this_ptr_00;
  int iVar1;
  CDemonActor *actor;
  int iVar2;
  int iVar3;
  
  if (*(int *)&this_ptr->field_0x6d4 == 0) {
    iVar3 = 0;
    for (iVar2 = 0; iVar2 < *(int *)&g_CDemonSetPtr->field_0x14d164; iVar2 = iVar2 + 1) {
      iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                        (*(uint *)(&g_CDemonSetPtr->field_0x14d168 + iVar3),
                         g_CBaronClassInfo.name_hash);
      *(int *)&this_ptr->field_0x6d4 = iVar1;
      if (iVar1 != 0) break;
      iVar3 = iVar3 + 4;
    }
    if (*(int *)&this_ptr->field_0x6d4 == 0) {
      actor = (CDemonActor *)core_actor_cpp_createActorByName_FUN_0040c5a0("CBaron");
      this_ptr_00 = 0x01D182F0;
      *(CDemonActor **)&this_ptr->field_0x6d4 = actor;
      core_mission_cpp_CDemonMission_generateActorName_FUN_004fcda0(this_ptr_00,actor);
      (**(code **)(*(int *)(*(int *)&this_ptr->field_0x6d4 + 0x2b0) + 8))
                (*(int *)&this_ptr->field_0x6d4);
      core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200
                (0x01D182F0,*(CDemonActor **)&this_ptr->field_0x6d4);
      (**(code **)(*(int *)(*(int *)&this_ptr->field_0x6d4 + 0x2b0) + 0x70))
                (*(int *)&this_ptr->field_0x6d4,&this_ptr->field_0x20,&this_ptr->field_0x30);
      return;
    }
  }
  return;
}

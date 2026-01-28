// Name: core_baron.cpp_CBaronWeapon_FUN_00413f20
// Address: 00413f20
// Address Range: [[00413f20, 00413fe1]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaronWeapon_FUN_00413f20(CBaronWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaronWeapon_FUN_00413f20(CBaronWeapon *this_ptr)

{
  CDemonMission *this_ptr_00;
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  
  if (this_ptr->unk == 0) {
    iVar3 = 0;
    for (iVar2 = 0; iVar2 < (int)g_CDemonSetPtr->actor_list_ptr; iVar2 = iVar2 + 1) {
      pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar3),
                          g_CBaronClassInfo.name_hash);
      this_ptr->unk = (int)pCVar1;
      if (pCVar1 != (CDemonActor *)0x0) break;
      iVar3 = iVar3 + 4;
    }
    if (this_ptr->unk == 0) {
      pCVar1 = core_actor_cpp_createActorByName_FUN_0040c430("CBaron");
      this_ptr_00 = g_CDemonMissionPtr;
      this_ptr->unk = (int)pCVar1;
      core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(this_ptr_00);
      (*(code *)**(uint **)(this_ptr->unk + 0x154))();
      core_mission_cpp_CDemonMission_FUN_00523b70(g_CDemonMissionPtr);
      (**(code **)(*(int *)(this_ptr->unk + 0x154) + 0x60))();
      return;
    }
  }
  return;
}

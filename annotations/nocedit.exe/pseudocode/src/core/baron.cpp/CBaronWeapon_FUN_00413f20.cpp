// Name: core_baron.cpp_CBaronWeapon_FUN_00413f20
// Address: 00413f20
// Address Range: [[00413f20, 00413fe1]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaronWeapon_FUN_00413f20(CBaronWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaronWeapon_FUN_00413f20(CBaronWeapon *this_ptr)

{
  CDemonMission *this_ptr_00;
  CBaron *pCVar1;
  CDemonActor *actor;
  int iVar1;
  int iVar2;
  
  if (this_ptr->unk == 0) {
    iVar2 = 0;
    for (iVar1 = 0; iVar1 < g_CDemonSetPtr->actor_count; iVar1 = iVar1 + 1) {
      pCVar1 = (CBaron *)
               core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar2),
                          g_CBaronClassInfo.name_hash);
      this_ptr->unk = (int)pCVar1;
      if (pCVar1 != (CBaron *)0x0) break;
      iVar2 = iVar2 + 4;
    }
    if (this_ptr->unk == 0) {
      actor = core_actor_cpp_createActorByName_FUN_0040c430("CBaron");
      this_ptr_00 = g_CDemonMissionPtr;
      this_ptr->unk = (int)actor;
      core_mission_cpp_CDemonMission_generateActorName_FUN_00524700(this_ptr_00,actor);
      (*(code *)**(uint **)(this_ptr->unk + 0x154))(this_ptr->unk);
      core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70
                (g_CDemonMissionPtr,(CDemonActor *)this_ptr->unk);
      (**(code **)(*(int *)(this_ptr->unk + 0x154) + 0x60))
                (this_ptr->unk,&(this_ptr->base).base.location,&(this_ptr->base).base.orient);
      return;
    }
  }
  return;
}

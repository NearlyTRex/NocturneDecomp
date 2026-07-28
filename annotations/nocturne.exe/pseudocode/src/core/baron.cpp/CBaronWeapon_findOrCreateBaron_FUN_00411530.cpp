// Name: core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530
// Address: 00411530
// Address Range: [[00411530, 004115f1]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530(int param_1)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530(int param_1)

{
  CDemonMission *this_ptr;
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x570) == 0) {
    iVar3 = 0;
    for (iVar2 = 0; iVar2 < *(int *)(0x01E57284 + 0x14cd6c); iVar2 = iVar2 + 1) {
      pCVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                         (*(CDemonActor **)(iVar3 + 0x14cd70 + 0x01E57284),
                          g_CBaronActorType_00764330.name_hash);
      *(CDemonActor **)(param_1 + 0x570) = pCVar1;
      if (pCVar1 != (CDemonActor *)0x0) break;
      iVar3 = iVar3 + 4;
    }
    if (*(int *)(param_1 + 0x570) == 0) {
      pCVar1 = core_actor_cpp_createActorByName_FUN_0040d540("CBaron");
      this_ptr = 0x01CC9450;
      *(CDemonActor **)(param_1 + 0x570) = pCVar1;
      core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(this_ptr,pCVar1);
      (*(code *)**(uint **)(*(int *)(param_1 + 0x570) + 0x14c))(*(int *)(param_1 + 0x570));
      core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60
                (0x01CC9450,*(CDemonActor **)(param_1 + 0x570));
      (**(code **)(*(int *)(*(int *)(param_1 + 0x570) + 0x14c) + 0x60))
                (*(int *)(param_1 + 0x570),param_1 + 0x20,param_1 + 0x30);
      return;
    }
  }
  return;
}

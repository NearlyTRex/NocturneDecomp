// Name: core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530
// Address: 00411530
// Address Range: [[00411530, 004115f1]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530(int param_1)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x570) == 0) {
    iVar5 = 0;
    for (iVar4 = 0; iVar4 < *(int *)(0x01E57284 + 0x14cd6c); iVar4 = iVar4 + 1) {
      iVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                        (*(uint *)(iVar5 + 0x14cd70 + 0x01E57284),
                         g_CBaronActorType_00764330.name_hash);
      *(int *)(param_1 + 0x570) = iVar2;
      if (iVar2 != 0) break;
      iVar5 = iVar5 + 4;
    }
    if (*(int *)(param_1 + 0x570) == 0) {
      uVar3 = core_actor_cpp_createActorByName_FUN_0040d540("CBaron");
      uVar1 = 0x01CC9450;
      *(uint *)(param_1 + 0x570) = uVar3;
      core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(uVar1,uVar3);
      (*(code *)**(uint **)(*(int *)(param_1 + 0x570) + 0x14c))(*(int *)(param_1 + 0x570));
      core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60
                (0x01CC9450,*(uint *)(param_1 + 0x570));
      (**(code **)(*(int *)(*(int *)(param_1 + 0x570) + 0x14c) + 0x60))
                (*(int *)(param_1 + 0x570),param_1 + 0x20,param_1 + 0x30);
      return;
    }
  }
  return;
}

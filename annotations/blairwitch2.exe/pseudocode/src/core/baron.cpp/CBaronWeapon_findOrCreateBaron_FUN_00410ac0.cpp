// Name: core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00410ac0
// Address: 00410ac0
// Address Range: [[00410ac0, 00410b82]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaronWeapon_findOrCreateBaron_FUN_00410ac0(CBaronWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaronWeapon_findOrCreateBaron_FUN_00410ac0(CBaronWeapon *this_ptr)

{
  CDemonMission *this_ptr_00;
  CBaron *pCVar1;
  int iVar2;
  int iVar3;
  
  if (this_ptr->baron == (CBaron *)0x0) {
    iVar3 = 0;
    for (iVar2 = 0; iVar2 < g_CDemonSetPtr->actor_count; iVar2 = iVar2 + 1) {
      pCVar1 = (CBaron *)
               core_actor_cpp_castToClassHash_FUN_0040c8f0
                         (*(uint *)((int)g_CDemonSetPtr->actors + iVar3),
                          g_CBaronClassInfo.name_hash);
      this_ptr->baron = pCVar1;
      if (pCVar1 != (CBaron *)0x0) break;
      iVar3 = iVar3 + 4;
    }
    if (this_ptr->baron == (CBaron *)0x0) {
      pCVar1 = (CBaron *)core_actor_cpp_createActorByName_FUN_0040c5a0("CBaron");
      this_ptr_00 = 0x01D182F0;
      this_ptr->baron = pCVar1;
      core_mission_cpp_CDemonMission_generateActorName_FUN_004fcda0
                (this_ptr_00,(CDemonActor *)pCVar1);
      (**(code **)(*(int *)&this_ptr->baron->field_0x2b0 + 8))(this_ptr->baron);
      core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200
                (0x01D182F0,(CDemonActor *)this_ptr->baron);
      (**(code **)(*(int *)&this_ptr->baron->field_0x2b0 + 0x70))
                (this_ptr->baron,&(this_ptr->base).base.field_0x20,&(this_ptr->base).base.orient);
      return;
    }
  }
  return;
}

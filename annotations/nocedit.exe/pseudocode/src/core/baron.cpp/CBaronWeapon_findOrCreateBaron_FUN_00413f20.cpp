// Name: core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00413f20
// Address: 00413f20
// Address Range: [[00413f20, 00413fe1]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaronWeapon_findOrCreateBaron_FUN_00413f20(CBaronWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaronWeapon_findOrCreateBaron_FUN_00413f20(CBaronWeapon *this_ptr)

{
  CDemonMission *this_ptr_00;
  CBaron *pCVar1;
  CBaron *actor;
  int iVar1;
  int iVar2;
  
  if (this_ptr->baron == (CBaron *)0x0) {
    iVar2 = 0;
    for (iVar1 = 0; iVar1 < g_CDemonSetPtr->actor_count; iVar1 = iVar1 + 1) {
      pCVar1 = (CBaron *)
               core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar2),
                          g_CBaronClassInfo.name_hash);
      this_ptr->baron = pCVar1;
      if (pCVar1 != (CBaron *)0x0) break;
      iVar2 = iVar2 + 4;
    }
    if (this_ptr->baron == (CBaron *)0x0) {
      actor = (CBaron *)core_actor_cpp_createActorByName_FUN_0040c430("CBaron");
      this_ptr_00 = g_CDemonMissionPtr;
      this_ptr->baron = actor;
      core_mission_cpp_CDemonMission_generateActorName_FUN_00524700
                (this_ptr_00,(CDemonActor *)actor);
      (*((this_ptr->baron->base).base.base.vtable._ub)->setup)((CDemonActor *)this_ptr->baron);
      core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70
                (g_CDemonMissionPtr,(CDemonActor *)this_ptr->baron);
      (*((this_ptr->baron->base).base.base.vtable._ub)->setPositionAndOrientation)
                ((CDemonActor *)this_ptr->baron,&(this_ptr->base).base.location.position,
                 (CVector3f *)&(this_ptr->base).base.orient);
      return;
    }
  }
  return;
}

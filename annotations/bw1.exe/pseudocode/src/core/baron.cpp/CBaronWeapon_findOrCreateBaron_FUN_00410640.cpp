// Name: core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00410640
// Address: 00410640
// Address Range: [[00410640, 00410701]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaronWeapon_findOrCreateBaron_FUN_00410640(CBaronWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaronWeapon_findOrCreateBaron_FUN_00410640(CBaronWeapon *this_ptr)

{
  CDemonMission *this_ptr_00;
  CBaron *pCVar1;
  int iVar2;
  int iVar3;
  
  if (this_ptr->baron == (CBaron *)0x0) {
    iVar3 = 0;
    for (iVar2 = 0; iVar2 < g_CDemonSetPtr->actor_count; iVar2 = iVar2 + 1) {
      pCVar1 = (CBaron *)
               core_actor_cpp_castToClassHash_FUN_0040c600
                         (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar3),
                          g_CBaronClassInfo.name_hash);
      this_ptr->baron = pCVar1;
      if (pCVar1 != (CBaron *)0x0) break;
      iVar3 = iVar3 + 4;
    }
    if (this_ptr->baron == (CBaron *)0x0) {
      pCVar1 = (CBaron *)core_actor_cpp_createActorByName_FUN_0040c2b0("CBaron");
      this_ptr_00 = 0x01D2C900;
      this_ptr->baron = pCVar1;
      core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60
                (this_ptr_00,(CDemonActor *)pCVar1);
      (*((this_ptr->baron->base).base.base.vtable._ub)->setup)((CDemonActor *)this_ptr->baron);
      core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160
                (0x01D2C900,(CDemonActor *)this_ptr->baron);
      (*((this_ptr->baron->base).base.base.vtable._ub)->setPositionAndOrientation)
                ((CDemonActor *)this_ptr->baron,&(this_ptr->base).base.location.position,
                 (CVector3f *)&(this_ptr->base).base.orient);
      return;
    }
  }
  return;
}

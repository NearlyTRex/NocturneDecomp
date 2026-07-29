// Name: core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530
// Address: 00411530
// Address Range: [[00411530, 004115f1]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530(CBaronWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530(CBaronWeapon *this_ptr)

{
  CDemonMission *this_ptr_00;
  CBaron *pCVar1;
  int iVar2;
  int iVar3;
  
  if (this_ptr->baron == (CBaron *)0x0) {
    iVar3 = 0;
    for (iVar2 = 0; iVar2 < *(int *)(0x01E57284 + 0x14cd6c); iVar2 = iVar2 + 1) {
      pCVar1 = (CBaron *)
               core_actor_cpp_castToClassHash_FUN_0040d890
                         (*(CDemonActor **)(iVar3 + 0x14cd70 + 0x01E57284),
                          g_CBaronActorType_00764330.name_hash);
      this_ptr->baron = pCVar1;
      if (pCVar1 != (CBaron *)0x0) break;
      iVar3 = iVar3 + 4;
    }
    if (this_ptr->baron == (CBaron *)0x0) {
      pCVar1 = (CBaron *)core_actor_cpp_createActorByName_FUN_0040d540("CBaron");
      this_ptr_00 = 0x01CC9450;
      this_ptr->baron = pCVar1;
      core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720
                (this_ptr_00,(CDemonActor *)pCVar1);
      (*((this_ptr->baron->base).base.base.vtable._ub)->setup)((CDemonActor *)this_ptr->baron);
      core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60
                (0x01CC9450,(CDemonActor *)this_ptr->baron);
      (*((this_ptr->baron->base).base.base.vtable._ub)->setPositionAndOrientation)
                ((CDemonActor *)this_ptr->baron,&(this_ptr->base).base.location.position,
                 (CVector3f *)&(this_ptr->base).base.orient);
      return;
    }
  }
  return;
}

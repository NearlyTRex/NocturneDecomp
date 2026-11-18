// Name: core_hero.cpp_CHero_findHeroAction_FUN_004d0780
// Address: 004d0780
// Address Range: [[004d0780, 004d08d4]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_findHeroAction_FUN_004d0780(CHero *this_ptr,int ignore_lock)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_findHeroAction_FUN_004d0780(CHero *this_ptr,int ignore_lock)

{
  CHero_full_vtable *pCVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  int iVar4;
  undefined3 extraout_var_00;
  
  core_hero_cpp_CHero_clearHeroAction_FUN_004cf200(this_ptr);
  pCVar1 = (this_ptr->base).base.vtable._uh;
  this_ptr->hero_action_range = 0.0;
  iVar3 = (*(pCVar1->_uh).canDoHeroAction)(this_ptr,1);
  if ((iVar3 != 0) && (iVar3 = core_hero_cpp_CHero_tryInteract_FUN_004cec50(this_ptr), iVar3 != 0))
  {
    return 1;
  }
  iVar3 = (*(((this_ptr->base).base.vtable._uh)->_uh).canDoHeroAction)(this_ptr,2);
  if ((iVar3 != 0) &&
     (iVar3 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90(this_ptr), iVar3 != 0)) {
    return 1;
  }
  iVar3 = (*(((this_ptr->base).base.vtable._uh)->_uh).canDoHeroAction)(this_ptr,4);
  if ((iVar3 != 0) &&
     (bVar2 = core_hero_cpp_CHero_tryPickupActorOfClass_FUN_004cfd60(this_ptr,"!CBodyPart"),
     CONCAT31(extraout_var,bVar2) != 0)) {
    return 1;
  }
  iVar4 = (*(((this_ptr->base).base.vtable._uh)->_uh).canDoHeroAction)(this_ptr,3);
  if ((iVar4 != 0) &&
     (iVar4 = core_hero_cpp_CHero_tryOpenNearbyDoor_FUN_004cf030(this_ptr,ignore_lock), iVar4 != 0))
  {
    return 1;
  }
  iVar4 = (*(((this_ptr->base).base.vtable._uh)->_uh).canDoHeroAction)(this_ptr,7);
  if ((iVar4 != 0) && (iVar4 = core_hero_cpp_CHero_tryPullLever_FUN_004cf2b0(this_ptr), iVar4 != 0))
  {
    return 1;
  }
  iVar4 = (*(((this_ptr->base).base.vtable._uh)->_uh).canDoHeroAction)(this_ptr,8);
  if ((iVar4 != 0) &&
     (iVar4 = core_hero_cpp_CHero_tryPushNearbyBox_FUN_004cf4e0(this_ptr), iVar4 != 0)) {
    return 1;
  }
  iVar4 = (*(((this_ptr->base).base.vtable._uh)->_uh).canDoHeroAction)(this_ptr,9);
  if ((iVar4 != 0) &&
     (iVar4 = core_hero_cpp_CHero_tryApproachNearbyActor_FUN_004cf890(this_ptr), iVar4 != 0)) {
    return 1;
  }
  if ((iVar3 != 0) &&
     (bVar2 = core_hero_cpp_CHero_tryPickupActorOfClass_FUN_004cfd60(this_ptr,"CBodyPart"),
     CONCAT31(extraout_var_00,bVar2) != 0)) {
    return 1;
  }
  return 0;
}

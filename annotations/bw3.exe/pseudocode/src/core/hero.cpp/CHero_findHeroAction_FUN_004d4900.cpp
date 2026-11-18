// Name: core_hero.cpp_CHero_findHeroAction_FUN_004d4900
// Address: 004d4900
// Address Range: [[004d4900, 004d4aa4]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_findHeroAction_FUN_004d4900(CHero *this_ptr,int ignore_lock)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_findHeroAction_FUN_004d4900(CHero *this_ptr,int ignore_lock)

{
  CHero_full_vtable *pCVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
  if ((this_ptr->hero_action == 0) || (this_ptr->hero_action_started == 0)) {
    core_hero_cpp_CHero_clearHeroAction_FUN_004d3210(this_ptr);
    pCVar1 = (this_ptr->base).base.vtable._uh;
    this_ptr->hero_action_range = 0.0;
    iVar3 = (*(pCVar1->_uh).canDoHeroAction)(this_ptr,4);
    core_hero_cpp_CHero_tryPickupActorOfClass_FUN_004d3e20(this_ptr,"!CBodyPart");
    iVar5 = this_ptr->hero_action;
    iVar4 = (*(((this_ptr->base).base.vtable._uh)->_uh).canDoHeroAction)(this_ptr,1);
    if (((iVar4 == 0) ||
        (iVar4 = core_hero_cpp_CHero_tryInteract_FUN_004d2cf0(this_ptr), iVar4 == 0)) &&
       ((iVar4 = (*(((this_ptr->base).base.vtable._uh)->_uh).canDoHeroAction)(this_ptr,2),
        iVar4 == 0 ||
        (iVar4 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004d2ea0(this_ptr), iVar4 == 0))))
    {
      if ((((iVar5 == 5) ||
           (bVar2 = core_hero_cpp_CHero_tryPickupActorOfClass_FUN_004d3e20
                              (this_ptr,"!CBodyPart"), CONCAT31(extraout_var,bVar2) == 0))
          && ((((iVar5 = (*(((this_ptr->base).base.vtable._uh)->_uh).canDoHeroAction)(this_ptr,3),
                iVar5 == 0 ||
                (iVar5 = core_hero_cpp_CHero_tryOpenNearbyDoor_FUN_004d3040(this_ptr,ignore_lock),
                iVar5 == 0)) &&
               ((iVar5 = (*(((this_ptr->base).base.vtable._uh)->_uh).canDoHeroAction)(this_ptr,8),
                iVar5 == 0 ||
                (iVar5 = core_hero_cpp_CHero_tryPullLever_FUN_004d32d0(this_ptr), iVar5 == 0)))) &&
              ((iVar5 = (*(((this_ptr->base).base.vtable._uh)->_uh).canDoHeroAction)(this_ptr,9),
               iVar5 == 0 ||
               (iVar5 = core_hero_cpp_CHero_tryPushNearbyBox_FUN_004d3500(this_ptr), iVar5 == 0)))))
          ) && ((iVar5 = (*(((this_ptr->base).base.vtable._uh)->_uh).canDoHeroAction)(this_ptr,10),
                iVar5 == 0 ||
                (iVar5 = core_hero_cpp_CHero_tryApproachNearbyActor_FUN_004d38b0(this_ptr),
                iVar5 == 0)))) {
        if ((iVar3 != 0) &&
           (bVar2 = core_hero_cpp_CHero_tryPickupActorOfClass_FUN_004d3e20
                              (this_ptr,"CBodyPart"), CONCAT31(extraout_var_00,bVar2) != 0)
           ) {
          return 1;
        }
        return 0;
      }
      return 1;
    }
  }
  return 1;
}

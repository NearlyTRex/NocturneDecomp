// Name: core_hero.cpp_FUN_004d0780
// Address: 004d0780
// Address Range: [[004d0780, 004d08d4]]
// Convention: unknown
// Signature: undefined4 core_hero_cpp_FUN_004d0780(CHero *param_1,int param_2)

#include "nocturne.h"

uint core_hero_cpp_FUN_004d0780(CHero *param_1,int param_2)

{
  CHero_full_vtable *pCVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  int iVar4;
  undefined3 extraout_var_00;
  
  core_hero_cpp_FUN_004cf200(param_1);
  pCVar1 = (param_1->base).base.vtable._uh;
  param_1->hero_action_range = 0.0;
  iVar3 = (*(pCVar1->_uh).canDoHeroAction)(param_1,1);
  if ((iVar3 != 0) && (iVar3 = core_hero_cpp_FUN_004cec50(param_1), iVar3 != 0)) {
    return 1;
  }
  iVar3 = (*(((param_1->base).base.vtable._uh)->_uh).canDoHeroAction)(param_1,2);
  if ((iVar3 != 0) &&
     (iVar3 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90(param_1), iVar3 != 0)) {
    return 1;
  }
  iVar3 = (*(((param_1->base).base.vtable._uh)->_uh).canDoHeroAction)(param_1,4);
  if ((iVar3 != 0) &&
     (bVar2 = core_hero_cpp_CHero_tryPickupActorOfClass_FUN_004cfd60(param_1,"!CBodyPart"),
     CONCAT31(extraout_var,bVar2) != 0)) {
    return 1;
  }
  iVar4 = (*(((param_1->base).base.vtable._uh)->_uh).canDoHeroAction)(param_1,3);
  if ((iVar4 != 0) &&
     (iVar4 = core_hero_cpp_CHero_tryOpenNearbyDoor_FUN_004cf030(param_1,param_2), iVar4 != 0)) {
    return 1;
  }
  iVar4 = (*(((param_1->base).base.vtable._uh)->_uh).canDoHeroAction)(param_1,7);
  if ((iVar4 != 0) && (iVar4 = core_hero_cpp_CHero_tryPullLever_FUN_004cf2b0(param_1), iVar4 != 0))
  {
    return 1;
  }
  iVar4 = (*(((param_1->base).base.vtable._uh)->_uh).canDoHeroAction)(param_1,8);
  if ((iVar4 != 0) &&
     (iVar4 = core_hero_cpp_CHero_tryPushNearbyBox_FUN_004cf4e0(param_1), iVar4 != 0)) {
    return 1;
  }
  iVar4 = (*(((param_1->base).base.vtable._uh)->_uh).canDoHeroAction)(param_1,9);
  if ((iVar4 != 0) &&
     (iVar4 = core_hero_cpp_CHero_tryApproachNearbyActor_FUN_004cf890(param_1), iVar4 != 0)) {
    return 1;
  }
  if ((iVar3 != 0) &&
     (bVar2 = core_hero_cpp_CHero_tryPickupActorOfClass_FUN_004cfd60(param_1,"CBodyPart"),
     CONCAT31(extraout_var_00,bVar2) != 0)) {
    return 1;
  }
  return 0;
}

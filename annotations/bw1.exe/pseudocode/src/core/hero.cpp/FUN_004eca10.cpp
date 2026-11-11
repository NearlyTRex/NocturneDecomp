// Name: core_hero.cpp_FUN_004eca10
// Address: 004eca10
// Address Range: [[004eca10, 004ecb64]]
// Convention: unknown
// Signature: undefined4 core_hero_cpp_FUN_004eca10(CHero *param_1,undefined4 param_2)

#include "nocturne.h"

uint core_hero_cpp_FUN_004eca10(CHero *param_1,uint param_2)

{
  CHero_full_vtable *pCVar1;
  int iVar2;
  int iVar3;
  
  core_hero_cpp_FUN_004eb5b0(param_1);
  pCVar1 = (param_1->base).base.vtable._uh;
  param_1->hero_action_range = 0.0;
  iVar2 = (*(pCVar1->_uh).canDoHeroAction)(param_1,1);
  if ((iVar2 != 0) && (iVar2 = core_hero_cpp_CHero_tryInteract_FUN_004eb090(param_1), iVar2 != 0)) {
    return 1;
  }
  iVar2 = (*(((param_1->base).base.vtable._uh)->_uh).canDoHeroAction)(param_1,2);
  if ((iVar2 != 0) &&
     (iVar2 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240(param_1), iVar2 != 0)) {
    return 1;
  }
  iVar2 = (*(((param_1->base).base.vtable._uh)->_uh).canDoHeroAction)(param_1,4);
  if ((iVar2 != 0) && (iVar3 = core_hero_cpp_FUN_004ec090(param_1,"!CBodyPart"), iVar3 != 0)
     ) {
    return 1;
  }
  iVar3 = (*(((param_1->base).base.vtable._uh)->_uh).canDoHeroAction)(param_1,3);
  if ((iVar3 != 0) && (iVar3 = core_hero_cpp_FUN_004eb3e0(param_1,param_2), iVar3 != 0)) {
    return 1;
  }
  iVar3 = (*(((param_1->base).base.vtable._uh)->_uh).canDoHeroAction)(param_1,7);
  if ((iVar3 != 0) && (iVar3 = core_hero_cpp_FUN_004eb660(param_1), iVar3 != 0)) {
    return 1;
  }
  iVar3 = (*(((param_1->base).base.vtable._uh)->_uh).canDoHeroAction)(param_1,8);
  if ((iVar3 != 0) && (iVar3 = core_hero_cpp_FUN_004eb890(param_1), iVar3 != 0)) {
    return 1;
  }
  iVar3 = (*(((param_1->base).base.vtable._uh)->_uh).canDoHeroAction)(param_1,9);
  if ((iVar3 != 0) &&
     (iVar3 = core_hero_cpp_CHero_tryApproachNearbyActor_FUN_004ebc40(param_1), iVar3 != 0)) {
    return 1;
  }
  if ((iVar2 != 0) && (iVar2 = core_hero_cpp_FUN_004ec090(param_1,"CBodyPart"), iVar2 != 0)
     ) {
    return 1;
  }
  return 0;
}

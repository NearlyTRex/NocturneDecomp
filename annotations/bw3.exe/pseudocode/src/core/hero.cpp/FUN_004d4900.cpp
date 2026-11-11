// Name: core_hero.cpp_FUN_004d4900
// Address: 004d4900
// Address Range: [[004d4900, 004d4aa4]]
// Convention: unknown
// Signature: undefined4 core_hero_cpp_FUN_004d4900(CHero *param_1,undefined4 param_2)

#include "nocturne.h"

uint core_hero_cpp_FUN_004d4900(CHero *param_1,uint param_2)

{
  CHero_full_vtable *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1->hero_action == 0) || (param_1->hero_action_started == 0)) {
    core_hero_cpp_FUN_004d3210(param_1);
    pCVar1 = (param_1->base).base.vtable._uh;
    param_1->hero_action_range = 0.0;
    iVar2 = (*(pCVar1->_uh).canDoHeroAction)(param_1,4);
    core_hero_cpp_FUN_004d3e20(param_1,"!CBodyPart");
    iVar4 = param_1->hero_action;
    iVar3 = (*(((param_1->base).base.vtable._uh)->_uh).canDoHeroAction)(param_1,1);
    if (((iVar3 == 0) || (iVar3 = core_hero_cpp_FUN_004d2cf0(param_1), iVar3 == 0)) &&
       ((iVar3 = (*(((param_1->base).base.vtable._uh)->_uh).canDoHeroAction)(param_1,2), iVar3 == 0
        || (iVar3 = core_hero_cpp_FUN_004d2ea0(param_1), iVar3 == 0)))) {
      if ((((iVar4 == 5) ||
           (iVar4 = core_hero_cpp_FUN_004d3e20(param_1,"!CBodyPart"), iVar4 == 0)) &&
          ((((iVar4 = (*(((param_1->base).base.vtable._uh)->_uh).canDoHeroAction)(param_1,3),
             iVar4 == 0 || (iVar4 = core_hero_cpp_FUN_004d3040(param_1,param_2), iVar4 == 0)) &&
            ((iVar4 = (*(((param_1->base).base.vtable._uh)->_uh).canDoHeroAction)(param_1,8),
             iVar4 == 0 ||
             (iVar4 = core_hero_cpp_CHero_tryPullLever_FUN_004d32d0(param_1), iVar4 == 0)))) &&
           ((iVar4 = (*(((param_1->base).base.vtable._uh)->_uh).canDoHeroAction)(param_1,9),
            iVar4 == 0 || (iVar4 = core_hero_cpp_FUN_004d3500(param_1), iVar4 == 0)))))) &&
         ((iVar4 = (*(((param_1->base).base.vtable._uh)->_uh).canDoHeroAction)(param_1,10),
          iVar4 == 0 ||
          (iVar4 = core_hero_cpp_CHero_tryApproachNearbyActor_FUN_004d38b0(param_1), iVar4 == 0))))
      {
        if ((iVar2 != 0) &&
           (iVar4 = core_hero_cpp_FUN_004d3e20(param_1,"CBodyPart"), iVar4 != 0)) {
          return 1;
        }
        return 0;
      }
      return 1;
    }
  }
  return 1;
}

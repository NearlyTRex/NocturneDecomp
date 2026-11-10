// Name: core_hero.cpp_FUN_004eca10
// Address: 004eca10
// Address Range: [[004eca10, 004ecb64]]
// Convention: unknown
// Signature: undefined4 core_hero_cpp_FUN_004eca10(CHero *param_1,undefined4 param_2)

#include "nocturne.h"

uint core_hero_cpp_FUN_004eca10(CHero *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  core_hero_cpp_FUN_004eb5b0(param_1);
  *(uint *)(param_1 + 0x1ff70) = 0;
  iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x15c))(param_1,1);
  if ((iVar1 != 0) && (iVar1 = core_hero_cpp_CHero_tryInteract_FUN_004eb090(param_1), iVar1 != 0)) {
    return 1;
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x15c))(param_1,2);
  if ((iVar1 != 0) &&
     (iVar1 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240(param_1), iVar1 != 0)) {
    return 1;
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x15c))(param_1,4);
  if ((iVar1 != 0) && (iVar2 = core_hero_cpp_FUN_004ec090(param_1,"!CBodyPart"), iVar2 != 0)
     ) {
    return 1;
  }
  iVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x15c))(param_1,3);
  if ((iVar2 != 0) && (iVar2 = core_hero_cpp_FUN_004eb3e0(param_1,param_2), iVar2 != 0)) {
    return 1;
  }
  iVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x15c))(param_1,7);
  if ((iVar2 != 0) && (iVar2 = core_hero_cpp_FUN_004eb660(param_1), iVar2 != 0)) {
    return 1;
  }
  iVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x15c))(param_1,8);
  if ((iVar2 != 0) && (iVar2 = core_hero_cpp_FUN_004eb890(param_1), iVar2 != 0)) {
    return 1;
  }
  iVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x15c))(param_1,9);
  if ((iVar2 != 0) &&
     (iVar2 = core_hero_cpp_CHero_tryApproachNearbyActor_FUN_004ebc40(param_1), iVar2 != 0)) {
    return 1;
  }
  if ((iVar1 != 0) && (iVar1 = core_hero_cpp_FUN_004ec090(param_1,"CBodyPart"), iVar1 != 0)
     ) {
    return 1;
  }
  return 0;
}

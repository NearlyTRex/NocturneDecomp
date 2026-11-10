// Name: core_hero.cpp_FUN_004d4900
// Address: 004d4900
// Address Range: [[004d4900, 004d4aa4]]
// Convention: unknown
// Signature: undefined4 core_hero_cpp_FUN_004d4900(CHero *param_1,undefined4 param_2)

#include "nocturne.h"

uint core_hero_cpp_FUN_004d4900(CHero *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x20b68) == 0) || (*(int *)(param_1 + 0x20b78) == 0)) {
    core_hero_cpp_FUN_004d3210(param_1);
    *(uint *)(param_1 + 0x20b7c) = 0;
    iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x15c))(param_1,4);
    core_hero_cpp_FUN_004d3e20(param_1,"!CBodyPart");
    iVar3 = *(int *)(param_1 + 0x20b68);
    iVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x15c))(param_1,1);
    if (((iVar2 == 0) || (iVar2 = core_hero_cpp_FUN_004d2cf0(param_1), iVar2 == 0)) &&
       ((iVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x15c))(param_1,2), iVar2 == 0 ||
        (iVar2 = core_hero_cpp_FUN_004d2ea0(param_1), iVar2 == 0)))) {
      if ((((iVar3 == 5) ||
           (iVar3 = core_hero_cpp_FUN_004d3e20(param_1,"!CBodyPart"), iVar3 == 0)) &&
          ((((iVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x15c))(param_1,3), iVar3 == 0 ||
             (iVar3 = core_hero_cpp_FUN_004d3040(param_1,param_2), iVar3 == 0)) &&
            ((iVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x15c))(param_1,8), iVar3 == 0 ||
             (iVar3 = core_hero_cpp_CHero_tryPullLever_FUN_004d32d0(param_1), iVar3 == 0)))) &&
           ((iVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x15c))(param_1,9), iVar3 == 0 ||
            (iVar3 = core_hero_cpp_FUN_004d3500(param_1), iVar3 == 0)))))) &&
         ((iVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x15c))(param_1,10), iVar3 == 0 ||
          (iVar3 = core_hero_cpp_CHero_tryApproachNearbyActor_FUN_004d38b0(param_1), iVar3 == 0))))
      {
        if ((iVar1 != 0) &&
           (iVar3 = core_hero_cpp_FUN_004d3e20(param_1,"CBodyPart"), iVar3 != 0)) {
          return 1;
        }
        return 0;
      }
      return 1;
    }
  }
  return 1;
}

// Name: core_battery.cpp_CBattery_canPickup_FUN_00414e10
// Address: 00414e10
// Address Range: [[00414e10, 00414e2b]]
// Convention: unknown
// Signature: undefined4 core_battery_cpp_CBattery_canPickup_FUN_00414e10(undefined4 param_1,CDemonActor *param_2)

#include "nocturne.h"

uint core_battery_cpp_CBattery_canPickup_FUN_00414e10(uint param_1,CDemonActor *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CHero");
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 2;
  }
  return uVar2;
}

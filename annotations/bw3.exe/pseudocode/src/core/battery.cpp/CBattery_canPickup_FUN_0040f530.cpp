// Name: core_battery.cpp_CBattery_canPickup_FUN_0040f530
// Address: 0040f530
// Address Range: [[0040f530, 0040f54b]]
// Convention: __cdecl
// Signature: int __cdecl core_battery_cpp_CBattery_canPickup_FUN_0040f530(CBattery *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_battery_cpp_CBattery_canPickup_FUN_0040f530(CBattery *this_ptr,CDemonActor *picker)

{
  int iVar1;
  int iVar2;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c790(picker,"CHero");
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = 2;
  }
  return iVar2;
}

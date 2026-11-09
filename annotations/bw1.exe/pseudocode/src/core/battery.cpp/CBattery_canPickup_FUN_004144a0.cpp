// Name: core_battery.cpp_CBattery_canPickup_FUN_004144a0
// Address: 004144a0
// Address Range: [[004144a0, 004144bb]]
// Convention: __cdecl
// Signature: int __cdecl core_battery_cpp_CBattery_canPickup_FUN_004144a0(CBattery *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_battery_cpp_CBattery_canPickup_FUN_004144a0(CBattery *this_ptr,CDemonActor *picker)

{
  int iVar1;
  int iVar2;
  
  iVar1 = core_actor_cpp_FUN_0040c550(picker,"CHero");
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = 2;
  }
  return iVar2;
}

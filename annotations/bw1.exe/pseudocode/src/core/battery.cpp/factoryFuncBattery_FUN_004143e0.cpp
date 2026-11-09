// Name: core_battery.cpp_factoryFuncBattery_FUN_004143e0
// Address: 004143e0
// Address Range: [[004143e0, 004143fb]]
// Convention: unknown
// Signature: void core_battery_cpp_factoryFuncBattery_FUN_004143e0(void)

#include "nocturne.h"

void core_battery_cpp_factoryFuncBattery_FUN_004143e0(void)

{
  CBattery *this_ptr;
  
  this_ptr = (CBattery *)FUN_005c0f32(0x2e0);
  if (this_ptr == (CBattery *)0x0) {
    return;
  }
  core_battery_cpp_CBattery_ctor_FUN_00414410(this_ptr);
  return;
}

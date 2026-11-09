// Name: core_battery.cpp_factoryFuncBattery_FUN_004146f0
// Address: 004146f0
// Address Range: [[004146f0, 0041470b]]
// Convention: unknown
// Signature: void core_battery_cpp_factoryFuncBattery_FUN_004146f0(void)

#include "nocturne.h"

void core_battery_cpp_factoryFuncBattery_FUN_004146f0(void)

{
  CBattery *this_ptr;
  
  this_ptr = (CBattery *)FUN_005b8be2(0x43c);
  if (this_ptr == (CBattery *)0x0) {
    return;
  }
  core_battery_cpp_CBattery_ctor_FUN_00414720(this_ptr);
  return;
}

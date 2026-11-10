// Name: core_battery.cpp_factoryFuncBattery_FUN_0040f470
// Address: 0040f470
// Address Range: [[0040f470, 0040f48b]]
// Convention: unknown
// Signature: void core_battery_cpp_factoryFuncBattery_FUN_0040f470(void)

#include "nocturne.h"

void core_battery_cpp_factoryFuncBattery_FUN_0040f470(void)

{
  CBattery *this_ptr;
  
  this_ptr = (CBattery *)debugAllocTracked1(0x2e0);
  if (this_ptr == (CBattery *)0x0) {
    return;
  }
  core_battery_cpp_CBattery_ctor_FUN_0040f4a0(this_ptr);
  return;
}

// Name: core_battery.cpp_FUN_00417e50
// Address: 00417e50
// Address Range: [[00417e50, 00417e72]]
// Convention: unknown
// Signature: undefined core_battery.cpp_FUN_00417e50()

#include "nocturne.h"

void core_battery_cpp_FUN_00417e50(void)

{
  CBattery *this_ptr;
  
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x2e0,"..\\core\\battery.cpp",0x1f);
  if (this_ptr == (CBattery *)0x0) {
    return;
  }
  core_battery_cpp_CBattery_ctor_FUN_00417e90(this_ptr);
  return;
}

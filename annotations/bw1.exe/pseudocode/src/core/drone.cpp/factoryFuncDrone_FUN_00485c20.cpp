// Name: core_drone.cpp_factoryFuncDrone_FUN_00485c20
// Address: 00485c20
// Address Range: [[00485c20, 00485c3b]]
// Convention: unknown
// Signature: void core_drone_cpp_factoryFuncDrone_FUN_00485c20(void)

#include "nocturne.h"

void core_drone_cpp_factoryFuncDrone_FUN_00485c20(void)

{
  CDrone *this_ptr;
  
  this_ptr = (CDrone *)FUN_005c0f32(0xc280);
  if (this_ptr == (CDrone *)0x0) {
    return;
  }
  core_drone_cpp_CDrone_ctor_FUN_00485c50(this_ptr);
  return;
}

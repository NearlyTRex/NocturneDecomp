// Name: core_drone.cpp_factoryFuncDrone_FUN_0046d720
// Address: 0046d720
// Address Range: [[0046d720, 0046d73b]]
// Convention: unknown
// Signature: void core_drone_cpp_factoryFuncDrone_FUN_0046d720(void)

#include "nocturne.h"

void core_drone_cpp_factoryFuncDrone_FUN_0046d720(void)

{
  CDrone *this_ptr;
  
  this_ptr = (CDrone *)FUN_005b8be2(0x10b10);
  if (this_ptr == (CDrone *)0x0) {
    return;
  }
  core_drone_cpp_CDrone_ctor_FUN_0046d750(this_ptr);
  return;
}

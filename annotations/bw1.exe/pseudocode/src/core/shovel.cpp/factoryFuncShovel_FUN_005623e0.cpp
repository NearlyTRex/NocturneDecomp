// Name: core_shovel.cpp_factoryFuncShovel_FUN_005623e0
// Address: 005623e0
// Address Range: [[005623e0, 005623fb]]
// Convention: unknown
// Signature: void core_shovel_cpp_factoryFuncShovel_FUN_005623e0(void)

#include "nocturne.h"

void core_shovel_cpp_factoryFuncShovel_FUN_005623e0(void)

{
  CShovel *this_ptr;
  
  this_ptr = (CShovel *)FUN_005c0f32(0x578);
  if (this_ptr == (CShovel *)0x0) {
    return;
  }
  core_shovel_cpp_CShovel_ctor_FUN_00562410(this_ptr);
  return;
}

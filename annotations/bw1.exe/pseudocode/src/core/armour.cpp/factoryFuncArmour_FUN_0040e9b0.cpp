// Name: core_armour.cpp_factoryFuncArmour_FUN_0040e9b0
// Address: 0040e9b0
// Address Range: [[0040e9b0, 0040e9cb]]
// Convention: unknown
// Signature: void core_armour_cpp_factoryFuncArmour_FUN_0040e9b0(void)

#include "nocturne.h"

void core_armour_cpp_factoryFuncArmour_FUN_0040e9b0(void)

{
  CArmour *this_ptr;
  
  this_ptr = (CArmour *)FUN_005c0f32(0xc2cc);
  if (this_ptr == (CArmour *)0x0) {
    return;
  }
  core_armour_cpp_CArmour_ctor_FUN_0040e9e0(this_ptr);
  return;
}

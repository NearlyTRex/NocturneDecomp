// Name: core_armour.cpp_factoryFuncArmour_FUN_0040ee10
// Address: 0040ee10
// Address Range: [[0040ee10, 0040ee2b]]
// Convention: unknown
// Signature: void core_armour_cpp_factoryFuncArmour_FUN_0040ee10(void)

#include "nocturne.h"

void core_armour_cpp_factoryFuncArmour_FUN_0040ee10(void)

{
  CArmour *this_ptr;
  
  this_ptr = (CArmour *)debugAllocTracked1(0x10b5c);
  if (this_ptr == (CArmour *)0x0) {
    return;
  }
  core_armour_cpp_CArmour_ctor_FUN_0040ee40(this_ptr);
  return;
}
